;;; font-lock.el --- Electric font lock mode

;; Copyright (C) 1992, 93, 94, 95, 96, 97, 98, 1999, 2000, 2001
;;  Free Software Foundation, Inc.

;; Author: jwz, then rms, then sm
;; Maintainer: FSF
;; Keywords: languages, faces

;; This file is part of GNU Emacs.

;; GNU Emacs is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.

;; GNU Emacs is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GNU Emacs; see the file COPYING.  If not, write to the
;; Free Software Foundation, Inc., 59 Temple Place - Suite 330,
;; Boston, MA 02111-1307, USA.

;;; Commentary:

;; Font Lock mode is a minor mode that causes your comments to be displayed in
;; one face, strings in another, reserved words in another, and so on.
;;
;; Comments will be displayed in `font-lock-comment-face'.
;; Strings will be displayed in `font-lock-string-face'.
;; Regexps are used to display selected patterns in other faces.
;;
;; To make the text you type be fontified, use M-x font-lock-mode RET.
;; When this minor mode is on, the faces of the current line are updated with
;; every insertion or deletion.
;;
;; To turn Font Lock mode on automatically, add this to your ~/.emacs file:
;;
;;  (add-hook 'emacs-lisp-mode-hook 'turn-on-font-lock)
;;
;; Or if you want to turn Font Lock mode on in many modes:
;;
;;  (global-font-lock-mode t)
;;
;; Fontification for a particular mode may be available in a number of levels
;; of decoration.  The higher the level, the more decoration, but the more time
;; it takes to fontify.  See the variable `font-lock-maximum-decoration', and
;; also the variable `font-lock-maximum-size'.  Support modes for Font Lock
;; mode can be used to speed up Font Lock mode.  See `font-lock-support-mode'.

;;; How Font Lock mode fontifies:

;; When Font Lock mode is turned on in a buffer, it (a) fontifies the entire
;; buffer and (b) installs one of its fontification functions on one of the
;; hook variables that are run by Emacs after every buffer change (i.e., an
;; insertion or deletion).  Fontification means the replacement of `face' text
;; properties in a given region; Emacs displays text with these `face' text
;; properties appropriately.
;;
;; Fontification normally involves syntactic (i.e., strings and comments) and
;; regexp (i.e., keywords and everything else) passes.  There are actually
;; three passes; (a) the syntactic keyword pass, (b) the syntactic pass and (c)
;; the keyword pass.  Confused?
;;
;; The syntactic keyword pass places `syntax-table' text properties in the
;; buffer according to the variable `font-lock-syntactic-keywords'.  It is
;; necessary because Emacs' syntax table is not powerful enough to describe all
;; the different syntactic constructs required by the sort of people who decide
;; that a single quote can be syntactic or not depending on the time of day.
;; (What sort of person could decide to overload the meaning of a quote?)
;; Obviously the syntactic keyword pass must occur before the syntactic pass.
;;
;; The syntactic pass places `face' text properties in the buffer according to
;; syntactic context, i.e., according to the buffer's syntax table and buffer
;; text's `syntax-table' text properties.  It involves using a syntax parsing
;; function to determine the context of different parts of a region of text.  A
;; syntax parsing function is necessary because generally strings and/or
;; comments can span lines, and so the context of a given region is not
;; necessarily apparent from the content of that region.  Because the keyword
;; pass only works within a given region, it is not generally appropriate for
;; syntactic fontification.  This is the first fontification pass that makes
;; changes visible to the user; it fontifies strings and comments.
;;
;; The keyword pass places `face' text properties in the buffer according to
;; the variable `font-lock-keywords'.  It involves searching for given regexps
;; (or calling given search functions) within the given region.  This is the
;; second fontification pass that makes changes visible to the user; it
;; fontifies language reserved words, etc.
;;
;; Oh, and the answer is, "Yes, obviously just about everything should be done
;; in a single syntactic pass, but the only syntactic parser available
;; understands only strings and comments."  Perhaps one day someone will write
;; some syntactic parsers for common languages and a son-of-font-lock.el could
;; use them rather then relying so heavily on the keyword (regexp) pass.

;;; How Font Lock mode supports modes or is supported by modes:

;; Modes that support Font Lock mode do so by defining one or more variables
;; whose values specify the fontification.  Font Lock mode knows of these
;; variable names from (a) the buffer local variable `font-lock-defaults', if
;; non-nil, or (b) the global variable `font-lock-defaults-alist', if the major
;; mode has an entry.  (Font Lock mode is set up via (a) where a mode's
;; patterns are distributed with the mode's package library, and (b) where a
;; mode's patterns are distributed with font-lock.el itself.  An example of (a)
;; is Pascal mode, an example of (b) is Lisp mode.  Normally, the mechanism is
;; (a); (b) is used where it is not clear which package library should contain
;; the pattern definitions.)  Font Lock mode chooses which variable to use for
;; fontification based on `font-lock-maximum-decoration'.
;;
;; Font Lock mode fontification behaviour can be modified in a number of ways.
;; See the below comments and the comments distributed throughout this file.

;;; Constructing patterns:

;; See the documentation for the variable `font-lock-keywords'.
;;
;; Efficient regexps for use as MATCHERs for `font-lock-keywords' and
;; `font-lock-syntactic-keywords' can be generated via the function
;; `regexp-opt'.

;;; Adding patterns for modes that already support Font Lock:

;; Though Font Lock highlighting patterns already exist for many modes, it's
;; likely there's something that you want fontified that currently isn't, even
;; at the maximum fontification level.  You can add highlighting patterns via
;; `font-lock-add-keywords'.  For example, say in some C
;; header file you #define the token `and' to expand to `&&', etc., to make
;; your C code almost readable.  In your ~/.emacs there could be:
;;
;;  (font-lock-add-keywords 'c-mode '("\\<\\(and\\|or\\|not\\)\\>"))
;;
;; Some modes provide specific ways to modify patterns based on the values of
;; other variables.  For example, additional C types can be specified via the
;; variable `c-font-lock-extra-types'.

;;; Adding patterns for modes that do not support Font Lock:

;; Not all modes support Font Lock mode.  If you (as a user of the mode) add
;; patterns for a new mode, you must define in your ~/.emacs a variable or
;; variables that specify regexp fontification.  Then, you should indicate to
;; Font Lock mode, via the mode hook setting `font-lock-defaults', exactly what
;; support is required.  For example, say Foo mode should have the following
;; regexps fontified case-sensitively, and comments and strings should not be
;; fontified automagically.  In your ~/.emacs there could be:
;;
;;  (defvar foo-font-lock-keywords
;;    '(("\\<\\(one\\|two\\|three\\)\\>" . font-lock-keyword-face)
;;      ("\\<\\(four\\|five\\|six\\)\\>" . font-lock-type-face))
;;    "Default expressions to highlight in Foo mode.")
;;
;;  (add-hook 'foo-mode-hook
;;   (function (lambda ()
;;               (make-local-variable 'font-lock-defaults)
;;               (setq font-lock-defaults '(foo-font-lock-keywords t)))))

;;; Adding Font Lock support for modes:

;; Of course, it would be better that the mode already supports Font Lock mode.
;; The package author would do something similar to above.  The mode must
;; define at the top-level a variable or variables that specify regexp
;; fontification.  Then, the mode command should indicate to Font Lock mode,
;; via `font-lock-defaults', exactly what support is required.  For example,
;; say Bar mode should have the following regexps fontified case-insensitively,
;; and comments and strings should be fontified automagically.  In bar.el there
;; could be:
;;
;;  (defvar bar-font-lock-keywords
;;    '(("\\<\\(uno\\|due\\|tre\\)\\>" . font-lock-keyword-face)
;;      ("\\<\\(quattro\\|cinque\\|sei\\)\\>" . font-lock-type-face))
;;    "Default expressions to highlight in Bar mode.")
;;
;; and within `bar-mode' there could be:
;;
;;  (make-local-variable 'font-lock-defaults)
;;  (setq font-lock-defaults '(bar-font-lock-keywords nil t))

;; What is fontification for?  You might say, "It's to make my code look nice."
;; I think it should be for adding information in the form of cues.  These cues
;; should provide you with enough information to both (a) distinguish between
;; different items, and (b) identify the item meanings, without having to read
;; the items and think about it.  Therefore, fontification allows you to think
;; less about, say, the structure of code, and more about, say, why the code
;; doesn't work.  Or maybe it allows you to think less and drift off to sleep.
;;
;; So, here are my opinions/advice/guidelines:
;;
;; - Highlight conceptual objects, such as function and variable names, and
;;   different objects types differently, i.e., (a) and (b) above, highlight
;;   function names differently to variable names.
;; - Keep the faces distinct from each other as far as possible.
;;   i.e., (a) above.
;; - Use the same face for the same conceptual object, across all modes.
;;   i.e., (b) above, all modes that have items that can be thought of as, say,
;;   keywords, should be highlighted with the same face, etc.
;; - Make the face attributes fit the concept as far as possible.
;;   i.e., function names might be a bold colour such as blue, comments might
;;   be a bright colour such as red, character strings might be brown, because,
;;   err, strings are brown (that was not the reason, please believe me).
;; - Don't use a non-nil OVERRIDE unless you have a good reason.
;;   Only use OVERRIDE for special things that are easy to define, such as the
;;   way `...' quotes are treated in strings and comments in Emacs Lisp mode.
;;   Don't use it to, say, highlight keywords in commented out code or strings.
;; - Err, that's it.

;;; Code:

;; Define core `font-lock' group.
(defgroup font-lock nil
  "Font Lock mode text highlighting package."
  :link '(custom-manual "(emacs)Font Lock")
  :link '(custom-manual "(elisp)Font Lock Mode")
  :group 'faces)

(defgroup font-lock-highlighting-faces nil
  "Faces for highlighting text."
  :prefix "font-lock-"
  :group 'font-lock)

(defgroup font-lock-extra-types nil
  "Extra mode-specific type names for highlighting declarations."
  :group 'font-lock)

;; Define support mode groups here to impose `font-lock' group order.
(defgroup fast-lock nil
  "Font Lock support mode to cache fontification."
  :link '(custom-manual "(emacs)Support Modes")
  :load 'fast-lock
  :group 'font-lock)

(defgroup lazy-lock nil
  "Font Lock support mode to fontify lazily."
  :link '(custom-manual "(emacs)Support Modes")
  :load 'lazy-lock
  :group 'font-lock)

(defgroup jit-lock nil
  "Font Lock support mode to fontify just-in-time."
  :link '(custom-manual "(emacs)Support Modes")
  :version "21.1"
  :load 'jit-lock
  :group 'font-lock)

;; User variables.

(defcustom font-lock-maximum-size 256000
  "*Maximum size of a buffer for buffer fontification.
Only buffers less than this can be fontified when Font Lock mode is turned on.
If nil, means size is irrelevant.
If a list, each element should be a cons pair of the form (MAJOR-MODE . SIZE),
where MAJOR-MODE is a symbol or t (meaning the default).  For example:
 ((c-mode . 256000) (c++-mode . 256000) (rmail-mode . 1048576))
means that the maximum size is 250K for buffers in C or C++ modes, one megabyte
for buffers in Rmail mode, and size is irrelevant otherwise."
  :type '(choice (const :tag "none" nil)
                 (integer :tag "size")
                 (repeat :menu-tag "mode specific" :tag "mode specific"
                         :value ((t . nil))
                         (cons :tag "Instance"
                               (radio :tag "Mode"
                                      (const :tag "all" t)
                                      (symbol :tag "name"))
                               (radio :tag "Size"
                                      (const :tag "none" nil)
                                      (integer :tag "size")))))
  :group 'font-lock)

(defcustom font-lock-maximum-decoration t
  "*Maximum decoration level for fontification.
If nil, use the default decoration (typically the minimum available).
If t, use the maximum decoration available.
If a number, use that level of decoration (or if not available the maximum).
If a list, each element should be a cons pair of the form (MAJOR-MODE . LEVEL),
where MAJOR-MODE is a symbol or t (meaning the default).  For example:
 ((c-mode . t) (c++-mode . 2) (t . 1))
means use the maximum decoration available for buffers in C mode, level 2
decoration for buffers in C++ mode, and level 1 decoration otherwise."
  :type '(choice (const :tag "default" nil)
                 (const :tag "maximum" t)
                 (integer :tag "level" 1)
                 (repeat :menu-tag "mode specific" :tag "mode specific"
                         :value ((t . t))
                         (cons :tag "Instance"
                               (radio :tag "Mode"
                                      (const :tag "all" t)
                                      (symbol :tag "name"))
                               (radio :tag "Decoration"
                                      (const :tag "default" nil)
                                      (const :tag "maximum" t)
                                      (integer :tag "level" 1)))))
  :group 'font-lock)

(defcustom font-lock-verbose 0
  "*If non-nil, means show status messages for buffer fontification.
If a number, only buffers greater than this size have fontification messages."
  :type '(choice (const :tag "never" nil)
                 (other :tag "always" t)
                 (integer :tag "size"))
  :group 'font-lock)


;; Originally these variable values were face names such as `bold' etc.
;; Now we create our own faces, but we keep these variables for compatibility
;; and they give users another mechanism for changing face appearance.
;; We now allow a FACENAME in `font-lock-keywords' to be any expression that
;; returns a face.  So the easiest thing is to continue using these variables,
;; rather than sometimes evaling FACENAME and sometimes not.  sm.
(defvar font-lock-comment-face          'font-lock-comment-face
  "Face name to use for comments.")

(defvar font-lock-string-face           'font-lock-string-face
  "Face name to use for strings.")

(defvar font-lock-doc-face              'font-lock-doc-face
  "Face name to use for documentation.")

(defvar font-lock-keyword-face          'font-lock-keyword-face
  "Face name to use for keywords.")

(defvar font-lock-builtin-face          'font-lock-builtin-face
  "Face name to use for builtins.")

(defvar font-lock-function-name-face    'font-lock-function-name-face
  "Face name to use for function names.")

(defvar font-lock-variable-name-face    'font-lock-variable-name-face
  "Face name to use for variable names.")

(defvar font-lock-type-face             'font-lock-type-face
  "Face name to use for type and class names.")

(defvar font-lock-constant-face         'font-lock-constant-face
  "Face name to use for constant and label names.")

(defvar font-lock-warning-face          'font-lock-warning-face
  "Face name to use for things that should stand out.")

(defvar font-lock-reference-face        'font-lock-constant-face
  "This variable is obsolete.  Use `font-lock-constant-face'.")

;; Fontification variables:

(defvar font-lock-keywords nil
  "A list of the keywords to highlight.
Each element should have one of these forms:

 MATCHER
 (MATCHER . MATCH)
 (MATCHER . FACENAME)
 (MATCHER . HIGHLIGHT)
 (MATCHER HIGHLIGHT ...)
 (eval . FORM)

where MATCHER can be either the regexp to search for, or the function name to
call to make the search (called with one argument, the limit of the search) and
return non-nil if it succeeds (and set `match-data' appropriately).
MATCHER regexps can be generated via the function `regexp-opt'.

FORM is an expression, whose value should be a keyword element, evaluated when
the keyword is (first) used in a buffer.  This feature can be used to provide a
keyword that can only be generated when Font Lock mode is actually turned on.

HIGHLIGHT should be either MATCH-HIGHLIGHT or MATCH-ANCHORED.

For highlighting single items, for example each instance of the word \"foo\",
typically only MATCH-HIGHLIGHT is required.
However, if an item or (typically) items are to be highlighted following the
instance of another item (the anchor), for example each instance of the
word \"bar\" following the word \"anchor\" then MATCH-ANCHORED may be required.

MATCH-HIGHLIGHT should be of the form:

 (MATCH FACENAME OVERRIDE LAXMATCH)

MATCH is the subexpression of MATCHER to be highlighted.  FACENAME is an
expression whose value is the face name to use.  Face default attributes
can be modified via \\[customize].  Instead of a face, FACENAME can
evaluate to a property list of the form (face VAL1 PROP2 VAL2 PROP3 VAL3 ...)
in which case all the listed text-properties will be set rather than
just `face'.  In such a case, you will most likely want to put those
properties in `font-lock-extra-managed-props' or to override
`font-lock-unfontify-region-function'.

OVERRIDE and LAXMATCH are flags.  If OVERRIDE is t, existing fontification can
be overwritten.  If `keep', only parts not already fontified are highlighted.
If `prepend' or `append', existing fontification is merged with the new, in
which the new or existing fontification, respectively, takes precedence.
If LAXMATCH is non-nil, no error is signaled if there is no MATCH in MATCHER.

For example, an element of the form highlights (if not already highlighted):

 \"\\\\\\=<foo\\\\\\=>\"                discrete occurrences of \"foo\" in the value of the
                        variable `font-lock-keyword-face'.
 (\"fu\\\\(bar\\\\)\" . 1)      substring \"bar\" within all occurrences of \"fubar\" in
                        the value of `font-lock-keyword-face'.
 (\"fubar\" . fubar-face)       Occurrences of \"fubar\" in the value of `fubar-face'.
 (\"foo\\\\|bar\" 0 foo-bar-face t)
                        occurrences of either \"foo\" or \"bar\" in the value
                        of `foo-bar-face', even if already highlighted.
 (fubar-match 1 fubar-face)
                        the first subexpression within all occurrences of
                        whatever the function `fubar-match' finds and matches
                        in the value of `fubar-face'.

MATCH-ANCHORED should be of the form:

 (MATCHER PRE-MATCH-FORM POST-MATCH-FORM MATCH-HIGHLIGHT ...)

where MATCHER is a regexp to search for or the function name to call to make
the search, as for MATCH-HIGHLIGHT above, but with one exception; see below.
PRE-MATCH-FORM and POST-MATCH-FORM are evaluated before the first, and after
the last, instance MATCH-ANCHORED's MATCHER is used.  Therefore they can be
used to initialise before, and cleanup after, MATCHER is used.  Typically,
PRE-MATCH-FORM is used to move to some position relative to the original
MATCHER, before starting with MATCH-ANCHORED's MATCHER.  POST-MATCH-FORM might
be used to move, before resuming with MATCH-ANCHORED's parent's MATCHER.

For example, an element of the form highlights (if not already highlighted):

 (\"\\\\\\=<anchor\\\\\\=>\" (0 anchor-face) (\"\\\\\\=<item\\\\\\=>\" nil nil (0 item-face)))

 discrete occurrences of \"anchor\" in the value of `anchor-face', and subsequent
 discrete occurrences of \"item\" (on the same line) in the value of `item-face'.
 (Here PRE-MATCH-FORM and POST-MATCH-FORM are nil.  Therefore \"item\" is
 initially searched for starting from the end of the match of \"anchor\", and
 searching for subsequent instance of \"anchor\" resumes from where searching
 for \"item\" concluded.)

The above-mentioned exception is as follows.  The limit of the MATCHER search
defaults to the end of the line after PRE-MATCH-FORM is evaluated.
However, if PRE-MATCH-FORM returns a position greater than the position after
PRE-MATCH-FORM is evaluated, that position is used as the limit of the search.
It is generally a bad idea to return a position greater than the end of the
line, i.e., cause the MATCHER search to span lines.

These regular expressions can match text which spans lines, although
it is better to avoid it if possible since updating them while editing
text is slower, and it is not guaranteed to be always correct when using
support modes like jit-lock or lazy-lock.

This variable is set by major modes via the variable `font-lock-defaults'.
Be careful when composing regexps for this list; a poorly written pattern can
dramatically slow things down!")

;; This variable is used by mode packages that support Font Lock mode by
;; defining their own keywords to use for `font-lock-keywords'.  (The mode
;; command should make it buffer-local and set it to provide the set up.)
(defvar font-lock-defaults nil
  "Defaults for Font Lock mode specified by the major mode.
Defaults should be of the form:

 (KEYWORDS KEYWORDS-ONLY CASE-FOLD SYNTAX-ALIST SYNTAX-BEGIN ...)

KEYWORDS may be a symbol (a variable or function whose value is the keywords to
use for fontification) or a list of symbols.  If KEYWORDS-ONLY is non-nil,
syntactic fontification (strings and comments) is not performed.
If CASE-FOLD is non-nil, the case of the keywords is ignored when fontifying.
If SYNTAX-ALIST is non-nil, it should be a list of cons pairs of the form
\(CHAR-OR-STRING . STRING) used to set the local Font Lock syntax table, for
keyword and syntactic fontification (see `modify-syntax-entry').

If SYNTAX-BEGIN is non-nil, it should be a function with no args used to move
backwards outside any enclosing syntactic block, for syntactic fontification.
Typical values are `beginning-of-line' (i.e., the start of the line is known to
be outside a syntactic block), or `beginning-of-defun' for programming modes or
`backward-paragraph' for textual modes (i.e., the mode-dependent function is
known to move outside a syntactic block).  If nil, the beginning of the buffer
is used as a position outside of a syntactic block, in the worst case.

These item elements are used by Font Lock mode to set the variables
`font-lock-keywords', `font-lock-keywords-only',
`font-lock-keywords-case-fold-search', `font-lock-syntax-table' and
`font-lock-beginning-of-syntax-function', respectively.

Further item elements are alists of the form (VARIABLE . VALUE) and are in no
particular order.  Each VARIABLE is made buffer-local before set to VALUE.

Currently, appropriate variables include `font-lock-mark-block-function'.
If this is non-nil, it should be a function with no args used to mark any
enclosing block of text, for fontification via \\[font-lock-fontify-block].
Typical values are `mark-defun' for programming modes or `mark-paragraph' for
textual modes (i.e., the mode-dependent function is known to put point and mark
around a text block relevant to that mode).

Other variables include that for syntactic keyword fontification,
`font-lock-syntactic-keywords'
and those for buffer-specialised fontification functions,
`font-lock-fontify-buffer-function', `font-lock-unfontify-buffer-function',
`font-lock-fontify-region-function', `font-lock-unfontify-region-function',
`font-lock-inhibit-thing-lock' and `font-lock-maximum-size'.")
;;;###autoload
(make-variable-buffer-local 'font-lock-defaults)

;; This variable is used where font-lock.el itself supplies the keywords.
(defvar font-lock-defaults-alist
  (let (;; We use `beginning-of-defun', rather than nil, for SYNTAX-BEGIN.
        ;; Thus the calculation of the cache is usually faster but not
        ;; infallible, so we risk mis-fontification.  sm.
        (c-mode-defaults
         '((c-font-lock-keywords c-font-lock-keywords-1
            c-font-lock-keywords-2 c-font-lock-keywords-3)
           nil nil ((?_ . "w")) beginning-of-defun
           (font-lock-mark-block-function . mark-defun)))
        (c++-mode-defaults
         '((c++-font-lock-keywords c++-font-lock-keywords-1
            c++-font-lock-keywords-2 c++-font-lock-keywords-3)
           nil nil ((?_ . "w")) beginning-of-defun
           (font-lock-mark-block-function . mark-defun)))
        (objc-mode-defaults
         '((objc-font-lock-keywords objc-font-lock-keywords-1
            objc-font-lock-keywords-2 objc-font-lock-keywords-3)
           nil nil ((?_ . "w") (?$ . "w")) nil
           (font-lock-mark-block-function . mark-defun)))
        (java-mode-defaults
         '((java-font-lock-keywords java-font-lock-keywords-1
            java-font-lock-keywords-2 java-font-lock-keywords-3)
           nil nil ((?_ . "w") (?$ . "w")) nil
           (font-lock-mark-block-function . mark-defun)))
        (lisp-mode-defaults
         '((lisp-font-lock-keywords
            lisp-font-lock-keywords-1 lisp-font-lock-keywords-2)
           nil nil (("+-*/.<>=!?$%_&~^:" . "w")) beginning-of-defun
           (font-lock-mark-block-function . mark-defun))))
    (list
     (cons 'c-mode                      c-mode-defaults)
     (cons 'c++-mode                    c++-mode-defaults)
     (cons 'objc-mode                   objc-mode-defaults)
     (cons 'java-mode                   java-mode-defaults)
     (cons 'emacs-lisp-mode             lisp-mode-defaults)
     (cons 'lisp-mode                   lisp-mode-defaults)
     (cons 'lisp-interaction-mode       lisp-mode-defaults)))
  "Alist of fall-back Font Lock defaults for major modes.

This variable should not be used any more.
Set the buffer-local `font-lock-keywords' in the major mode instead.

Each item should be a list of the form:

 (MAJOR-MODE . FONT-LOCK-DEFAULTS)

where MAJOR-MODE is a symbol and FONT-LOCK-DEFAULTS is a list of default
settings.  See the variable `font-lock-defaults', which takes precedence.")
(make-obsolete-variable 'font-lock-defaults-alist 'font-lock-defaults)

(defvar font-lock-keywords-alist nil
  "*Alist of `font-lock-keywords' local to a `major-mode'.
This is normally set via `font-lock-add-keywords' and
`font-lock-remove-keywords'.")

(defvar font-lock-removed-keywords-alist nil
  "*Alist of `font-lock-keywords' removed from `major-mode'.
This is normally set via `font-lock-add-keywords' and
`font-lock-remove-keywords'.")

(defvar font-lock-keywords-only nil
  "*Non-nil means Font Lock should not fontify comments or strings.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-keywords-case-fold-search nil
  "*Non-nil means the patterns in `font-lock-keywords' are case-insensitive.
This is normally set via `font-lock-defaults'.")
(make-variable-buffer-local 'font-lock-keywords-case-fold-search)

(defvar font-lock-syntactically-fontified 0
  "Point up to which `font-lock-syntactic-keywords' has been applied.
If nil, this is ignored, in which case the syntactic fontification may
sometimes be slightly incorrect.")
(make-variable-buffer-local 'font-lock-syntactically-fontified)

(defvar font-lock-syntactic-face-function
  (lambda (state)
    (if (nth 3 state) font-lock-string-face font-lock-comment-face))
  "Function to determine which face to use when fontifying syntactically.
The function is called with a single parameter (the state as returned by
`parse-partial-sexp' at the beginning of the region to highlight) and
should return a face.")

(defvar font-lock-syntactic-keywords nil
  "A list of the syntactic keywords to highlight.
Can be the list or the name of a function or variable whose value is the list.
See `font-lock-keywords' for a description of the form of this list;
the differences are listed below.  MATCH-HIGHLIGHT should be of the form:

 (MATCH SYNTAX OVERRIDE LAXMATCH)

where SYNTAX can be a string (as taken by `modify-syntax-entry'), a syntax
table, a cons cell (as returned by `string-to-syntax') or an expression whose
value is such a form.  OVERRIDE cannot be `prepend' or `append'.

For example, an element of the form highlights syntactically:

 (\"\\\\$\\\\(#\\\\)\" 1 \".\")

 a hash character when following a dollar character, with a SYNTAX of
 \".\" (meaning punctuation syntax).  Assuming that the buffer syntax table does
 specify hash characters to have comment start syntax, the element will only
 highlight hash characters that do not follow dollar characters as comments
 syntactically.

 (\"\\\\('\\\\).\\\\('\\\\)\"
  (1 \"\\\"\")
  (2 \"\\\"\"))

 both single quotes which surround a single character, with a SYNTAX of
 \"\\\"\" (meaning string quote syntax).  Assuming that the buffer syntax table
 does not specify single quotes to have quote syntax, the element will only
 highlight single quotes of the form 'c' as strings syntactically.
 Other forms, such as foo'bar or 'fubar', will not be highlighted as strings.

This is normally set via `font-lock-defaults'.")

(defvar font-lock-syntax-table nil
  "Non-nil means use this syntax table for fontifying.
If this is nil, the major mode's syntax table is used.
This is normally set via `font-lock-defaults'.")

;; If this is nil, we only use the beginning of the buffer if we can't use
;; `font-lock-cache-position' and `font-lock-cache-state'.
(defvar font-lock-beginning-of-syntax-function nil
  "*Non-nil means use this function to move back outside of a syntactic block.
When called with no args it should leave point at the beginning of any
enclosing syntactic block.
If this is nil, the beginning of the buffer is used (in the worst case).
This is normally set via `font-lock-defaults'.")

(defvar font-lock-mark-block-function nil
  "*Non-nil means use this function to mark a block of text.
When called with no args it should leave point at the beginning of any
enclosing textual block and mark at the end.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-fontify-buffer-function 'font-lock-default-fontify-buffer
  "Function to use for fontifying the buffer.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-unfontify-buffer-function 'font-lock-default-unfontify-buffer
  "Function to use for unfontifying the buffer.
This is used when turning off Font Lock mode.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-fontify-region-function 'font-lock-default-fontify-region
  "Function to use for fontifying a region.
It should take two args, the beginning and end of the region, and an optional
third arg VERBOSE.  If non-nil, the function should print status messages.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-unfontify-region-function 'font-lock-default-unfontify-region
  "Function to use for unfontifying a region.
It should take two args, the beginning and end of the region.
This is normally set via `font-lock-defaults'.")

(defvar font-lock-inhibit-thing-lock nil
  "List of Font Lock mode related modes that should not be turned on.
Currently, valid mode names are `fast-lock-mode', `jit-lock-mode' and
`lazy-lock-mode'.  This is normally set via `font-lock-defaults'.")

(defvar font-lock-multiline nil
  "Whether font-lock should cater to multiline keywords.
If nil, don't try to handle multiline patterns.
If t, always handle multiline patterns.
If `undecided', don't try to handle multiline patterns until you see one.
Major/minor modes can set this variable if they know which option applies.")

(defvar font-lock-fontified nil)        ; Whether we have fontified the buffer.

;; Font Lock mode.

(eval-when-compile
  ;;
  ;; We don't do this at the top-level as we only use non-autoloaded macros.
  (require 'cl)
  ;;
  ;; Borrowed from lazy-lock.el.
  ;; We use this to preserve or protect things when modifying text properties.
  (defmacro save-buffer-state (varlist &rest body)
    "Bind variables according to VARLIST and eval BODY restoring buffer state."
    `(let* ,(append varlist
                    '((modified (buffer-modified-p)) (buffer-undo-list t)
                      (inhibit-read-only t) (inhibit-point-motion-hooks t)
                      (inhibit-modification-hooks t)
                      deactivate-mark buffer-file-name buffer-file-truename))
       ,@body
       (when (and (not modified) (buffer-modified-p))
         (set-buffer-modified-p nil))))
  (put 'save-buffer-state 'lisp-indent-function 1)
  (def-edebug-spec save-buffer-state let)
  ;;
  ;; Shut up the byte compiler.
  (defvar font-lock-face-attributes))   ; Obsolete but respected if set.

;;;###autoload
(define-minor-mode font-lock-mode
  "Toggle Font Lock mode.
With arg, turn Font Lock mode off if and only if arg is a non-positive
number; if arg is nil, toggle Font Lock mode; anything else turns Font
Lock on.
\(Font Lock is also known as \"syntax highlighting\".)

When Font Lock mode is enabled, text is fontified as you type it:

 - Comments are displayed in `font-lock-comment-face';
 - Strings are displayed in `font-lock-string-face';
 - Certain other expressions are displayed in other faces according to the
   value of the variable `font-lock-keywords'.

To customize the faces (colors, fonts, etc.) used by Font Lock for
fontifying different parts of buffer text, use \\[customize-face].

You can enable Font Lock mode in any major mode automatically by turning on in
the major mode's hook.  For example, put in your ~/.emacs:

 (add-hook 'c-mode-hook 'turn-on-font-lock)

Alternatively, you can use Global Font Lock mode to automagically turn on Font
Lock mode in buffers whose major mode supports it and whose major mode is one
of `font-lock-global-modes'.  For example, put in your ~/.emacs:

 (global-font-lock-mode t)

There are a number of support modes that may be used to speed up Font Lock mode
in various ways, specified via the variable `font-lock-support-mode'.  Where
major modes support different levels of fontification, you can use the variable
`font-lock-maximum-decoration' to specify which level you generally prefer.
When you turn Font Lock mode on/off the buffer is fontified/defontified, though
fontification occurs only if the buffer is less than `font-lock-maximum-size'.

For example, to specify that Font Lock mode use use Lazy Lock mode as a support
mode and use maximum levels of fontification, put in your ~/.emacs:

 (setq font-lock-support-mode 'lazy-lock-mode)
 (setq font-lock-maximum-decoration t)

To add your own highlighting for some major mode, and modify the highlighting
selected automatically via the variable `font-lock-maximum-decoration', you can
use `font-lock-add-keywords'.

To fontify a buffer, without turning on Font Lock mode and regardless of buffer
size, you can use \\[font-lock-fontify-buffer].

To fontify a block (the function or paragraph containing point, or a number of
lines around point), perhaps because modification on the current line caused
syntactic change on other lines, you can use \\[font-lock-fontify-block].

See the variable `font-lock-defaults-alist' for the Font Lock mode default
settings.  You can set your own default settings for some mode, by setting a
buffer local value for `font-lock-defaults', via its mode hook."
  nil nil nil
  ;; Don't turn on Font Lock mode if we don't have a display (we're running a
  ;; batch job) or if the buffer is invisible (the name starts with a space).
  (when (or noninteractive (eq (aref (buffer-name) 0) ?\ ))
    (setq font-lock-mode nil))

  ;; Turn on Font Lock mode.
  (when font-lock-mode
    (add-hook 'after-change-functions 'font-lock-after-change-function nil t)
    (font-lock-set-defaults)
    (font-lock-turn-on-thing-lock)
    ;; Fontify the buffer if we have to.
    (let ((max-size (font-lock-value-in-major-mode font-lock-maximum-size)))
      (cond (font-lock-fontified
             nil)
            ((or (null max-size) (> max-size (buffer-size)))
             (font-lock-fontify-buffer))
            (font-lock-verbose
             (message "Fontifying %s...buffer size greater than font-lock-maximum-size"
                      (buffer-name))))))
  ;; Turn off Font Lock mode.
  (unless font-lock-mode
    (remove-hook 'after-change-functions 'font-lock-after-change-function t)
    (font-lock-unfontify-buffer)
    (font-lock-turn-off-thing-lock)
    (font-lock-unset-defaults)))

;;;###autoload
(defun turn-on-font-lock ()
  "Turn on Font Lock mode (only if the terminal can display it)."
  (unless font-lock-mode
    (font-lock-mode)))

;;;###autoload
(defun font-lock-add-keywords (mode keywords &optional append)
  "Add highlighting KEYWORDS for MODE.
MODE should be a symbol, the major mode command name, such as `c-mode'
or nil.  If nil, highlighting keywords are added for the current buffer.
KEYWORDS should be a list; see the variable `font-lock-keywords'.
By default they are added at the beginning of the current highlighting list.
If optional argument APPEND is `set', they are used to replace the current
highlighting list.  If APPEND is any other non-nil value, they are added at the
end of the current highlighting list.

For example:

 (font-lock-add-keywords 'c-mode
  '((\"\\\\\\=<\\\\(FIXME\\\\):\" 1 font-lock-warning-face prepend)
    (\"\\\\\\=<\\\\(and\\\\|or\\\\|not\\\\)\\\\\\=>\" . font-lock-keyword-face)))

adds two fontification patterns for C mode, to fontify `FIXME:' words, even in
comments, and to fontify `and', `or' and `not' words as keywords.

When used from an elisp package (such as a minor mode), it is recommended
to use nil for MODE (and place the call in a loop or on a hook) to avoid
subtle problems due to details of the implementation.

Note that some modes have specialised support for additional patterns, e.g.,
see the variables `c-font-lock-extra-types', `c++-font-lock-extra-types',
`objc-font-lock-extra-types' and `java-font-lock-extra-types'."
  (cond (mode
         ;; If MODE is non-nil, add the KEYWORDS and APPEND spec to
         ;; `font-lock-keywords-alist' so `font-lock-set-defaults' uses them.
         (let ((spec (cons keywords append)) cell)
           (if (setq cell (assq mode font-lock-keywords-alist))
               (if (eq append 'set)
                   (setcdr cell (list spec))
                 (setcdr cell (append (cdr cell) (list spec))))
             (push (list mode spec) font-lock-keywords-alist)))
         ;; Make sure that `font-lock-removed-keywords-alist' does not
         ;; contain the new keywords.
         (font-lock-update-removed-keyword-alist mode keywords append))
        (t
         ;; Otherwise set or add the keywords now.
         (font-lock-set-defaults)
         (if (eq append 'set)
             (setq font-lock-keywords keywords)
           (font-lock-remove-keywords nil keywords) ;to avoid duplicates
           (let ((old (if (eq (car-safe font-lock-keywords) t)
                          (cdr font-lock-keywords)
                        font-lock-keywords)))
             (setq font-lock-keywords (if append
                                          (append old keywords)
                                        (append keywords old))))))))

(defun font-lock-update-removed-keyword-alist (mode keywords append)
  ;; Update `font-lock-removed-keywords-alist' when adding new
  ;; KEYWORDS to MODE.
  ;;
  ;; When font-lock is enabled first all keywords in the list
  ;; `font-lock-keywords-alist' are added, then all keywords in the
  ;; list `font-lock-removed-keywords-alist' are removed.  If a
  ;; keyword was once added, removed, and then added again it must be
  ;; removed from the removed-keywords list.  Otherwise the second add
  ;; will not take effect.
  (let ((cell (assq mode font-lock-removed-keywords-alist)))
    (if cell
        (if (eq append 'set)
            ;; A new set of keywords is defined.  Forget all about
            ;; our old keywords that should be removed.
            (setq font-lock-removed-keywords-alist
                  (delq cell font-lock-removed-keywords-alist))
          ;; Delete all previously removed keywords.
          (dolist (kword keywords)
            (setcdr cell (delete kword (cdr cell))))
          ;; Delete the mode cell if empty.
          (if (null (cdr cell))
              (setq font-lock-removed-keywords-alist
                    (delq cell font-lock-removed-keywords-alist)))))))

;; Written by Anders Lindgren <andersl@andersl.com>.
;;
;; Case study:
;; (I)  The keywords are removed from a major mode.
;;      In this case the keyword could be local (i.e. added earlier by
;;      `font-lock-add-keywords'), global, or both.
;;
;;      (a) In the local case we remove the keywords from the variable
;;          `font-lock-keywords-alist'.
;;
;;      (b) The actual global keywords are not known at this time.
;;          All keywords are added to `font-lock-removed-keywords-alist',
;;          when font-lock is enabled those keywords are removed.
;;
;;      Note that added keywords are taken out of the list of removed
;;      keywords.  This ensure correct operation when the same keyword
;;      is added and removed several times.
;;
;; (II) The keywords are removed from the current buffer.
;;;###autoload
(defun font-lock-remove-keywords (mode keywords)
  "Remove highlighting KEYWORDS for MODE.

MODE should be a symbol, the major mode command name, such as `c-mode'
or nil.  If nil, highlighting keywords are removed for the current buffer.

When used from an elisp package (such as a minor mode), it is recommended
to use nil for MODE (and place the call in a loop or on a hook) to avoid
subtle problems due to details of the implementation."
  (cond (mode
         ;; Remove one keyword at the time.
         (dolist (keyword keywords)
           (let ((top-cell (assq mode font-lock-keywords-alist)))
             ;; If MODE is non-nil, remove the KEYWORD from
             ;; `font-lock-keywords-alist'.
             (when top-cell
               (dolist (keyword-list-append-pair (cdr top-cell))
                 ;; `keywords-list-append-pair' is a cons with a list of
                 ;; keywords in the car top-cell and the original append
                 ;; argument in the cdr top-cell.
                 (setcar keyword-list-append-pair
                         (delete keyword (car keyword-list-append-pair))))
               ;; Remove keyword list/append pair when the keyword list
               ;; is empty and append doesn't specify `set'.  (If it
               ;; should be deleted then previously deleted keywords
               ;; would appear again.)
               (let ((cell top-cell))
                 (while (cdr cell)
                   (if (and (null (car (car (cdr cell))))
                            (not (eq (cdr (car (cdr cell))) 'set)))
                       (setcdr cell (cdr (cdr cell)))
                     (setq cell (cdr cell)))))
               ;; Final cleanup, remove major mode cell if last keyword
               ;; was deleted.
               (if (null (cdr top-cell))
                   (setq font-lock-keywords-alist
                         (delq top-cell font-lock-keywords-alist))))
             ;; Remember the keyword in case it is not local.
             (let ((cell (assq mode font-lock-removed-keywords-alist)))
               (if cell
                   (unless (member keyword (cdr cell))
                     (nconc cell (list keyword)))
                 (push (cons mode (list keyword))
                       font-lock-removed-keywords-alist))))))
        (t
         ;; Otherwise remove it immediately.
         (font-lock-set-defaults)
         (setq font-lock-keywords (copy-sequence font-lock-keywords))
         (dolist (keyword keywords)
           (setq font-lock-keywords
                 (delete keyword
                         ;; The keywords might be compiled.
                         (delete (font-lock-compile-keyword keyword)
                                 font-lock-keywords)))))))

;;; Global Font Lock mode.

;; A few people have hassled in the past for a way to make it easier to turn on
;; Font Lock mode, without the user needing to know for which modes s/he has to
;; turn it on, perhaps the same way hilit19.el/hl319.el does.  I've always
;; balked at that way, as I see it as just re-moulding the same problem in
;; another form.  That is; some person would still have to keep track of which
;; modes (which may not even be distributed with Emacs) support Font Lock mode.
;; The list would always be out of date.  And that person might have to be me.

;; Implementation.
;;
;; In a previous discussion the following hack came to mind.  It is a gross
;; hack, but it generally works.  We use the convention that major modes start
;; by calling the function `kill-all-local-variables', which in turn runs
;; functions on the hook variable `change-major-mode-hook'.  We attach our
;; function `font-lock-change-major-mode' to that hook.  Of course, when this
;; hook is run, the major mode is in the process of being changed and we do not
;; know what the final major mode will be.  So, `font-lock-change-major-mode'
;; only (a) notes the name of the current buffer, and (b) adds our function
;; `turn-on-font-lock-if-enabled' to the hook variables `find-file-hooks' and
;; `post-command-hook' (for buffers that are not visiting files).  By the time
;; the functions on the first of these hooks to be run are run, the new major
;; mode is assumed to be in place.  This way we get a Font Lock function run
;; when a major mode is turned on, without knowing major modes or their hooks.
;;
;; Naturally this requires that (a) major modes run `kill-all-local-variables',
;; as they are supposed to do, and (b) the major mode is in place after the
;; file is visited or the command that ran `kill-all-local-variables' has
;; finished, whichever the sooner.  Arguably, any major mode that does not
;; follow the convension (a) is broken, and I can't think of any reason why (b)
;; would not be met (except `gnudoit' on non-files).  However, it is not clean.
;;
;; Probably the cleanest solution is to have each major mode function run some
;; hook, e.g., `major-mode-hook', but maybe implementing that change is
;; impractical.  I am personally against making `setq' a macro or be advised,
;; or have a special function such as `set-major-mode', but maybe someone can
;; come up with another solution?

;; User interface.
;;
;; Although Global Font Lock mode is a pseudo-mode, I think that the user
;; interface should conform to the usual Emacs convention for modes, i.e., a
;; command to toggle the feature (`global-font-lock-mode') with a variable for
;; finer control of the mode's behaviour (`font-lock-global-modes').
;;
;; The feature should not be enabled by loading font-lock.el, since other
;; mechanisms for turning on Font Lock mode, such as M-x font-lock-mode RET or
;; (add-hook 'c-mode-hook 'turn-on-font-lock), would cause Font Lock mode to be
;; turned on everywhere.  That would not be intuitive or informative because
;; loading a file tells you nothing about the feature or how to control it.  It
;; would also be contrary to the Principle of Least Surprise.  sm.

(defcustom font-lock-global-modes t
  "*Modes for which Font Lock mode is automagically turned on.
Global Font Lock mode is controlled by the command `global-font-lock-mode'.
If nil, means no modes have Font Lock mode automatically turned on.
If t, all modes that support Font Lock mode have it automatically turned on.
If a list, it should be a list of `major-mode' symbol names for which Font Lock
mode should be automatically turned on.  The sense of the list is negated if it
begins with `not'.  For example:
 (c-mode c++-mode)
means that Font Lock mode is turned on for buffers in C and C++ modes only."
  :type '(choice (const :tag "none" nil)
                 (const :tag "all" t)
                 (set :menu-tag "mode specific" :tag "modes"
                      :value (not)
                      (const :tag "Except" not)
                      (repeat :inline t (symbol :tag "mode"))))
  :group 'font-lock)

(defun turn-on-font-lock-if-enabled ()
  (when (and (or font-lock-defaults
                 (assq major-mode font-lock-defaults-alist))
             (or (eq font-lock-global-modes t)
                 (if (eq (car-safe font-lock-global-modes) 'not)
                     (not (memq major-mode (cdr font-lock-global-modes)))
                   (memq major-mode font-lock-global-modes))))
    (let (inhibit-quit)
      (turn-on-font-lock))))

;;;###autoload
(easy-mmode-define-global-mode
 global-font-lock-mode font-lock-mode turn-on-font-lock-if-enabled
 :extra-args (dummy))

;;; End of Global Font Lock mode.

;;; Font Lock Support mode.

;; This is the code used to interface font-lock.el with any of its add-on
;; packages, and provide the user interface.  Packages that have their own
;; local buffer fontification functions (see below) may have to call
;; `font-lock-after-fontify-buffer' and/or `font-lock-after-unfontify-buffer'
;; themselves.

(defcustom font-lock-support-mode 'jit-lock-mode
  "*Support mode for Font Lock mode.
Support modes speed up Font Lock mode by being choosy about when fontification
occurs.  Known support modes are Fast Lock mode (symbol `fast-lock-mode'),
Lazy Lock mode (symbol `lazy-lock-mode'), and Just-in-time Lock mode (symbol
`jit-lock-mode'.  See those modes for more info.
If nil, means support for Font Lock mode is never performed.
If a symbol, use that support mode.
If a list, each element should be of the form (MAJOR-MODE . SUPPORT-MODE),
where MAJOR-MODE is a symbol or t (meaning the default).  For example:
 ((c-mode . fast-lock-mode) (c++-mode . fast-lock-mode) (t . lazy-lock-mode))
means that Fast Lock mode is used to support Font Lock mode for buffers in C or
C++ modes, and Lazy Lock mode is used to support Font Lock mode otherwise.

The value of this variable is used when Font Lock mode is turned on."
  :type '(choice (const :tag "none" nil)
                 (const :tag "fast lock" fast-lock-mode)
                 (const :tag "lazy lock" lazy-lock-mode)
                 (const :tag "jit lock" jit-lock-mode)
                 (repeat :menu-tag "mode specific" :tag "mode specific"
                         :value ((t . jit-lock-mode))
                         (cons :tag "Instance"
                               (radio :tag "Mode"
                                      (const :tag "all" t)
                                      (symbol :tag "name"))
                               (radio :tag "Support"
                                      (const :tag "none" nil)
                                      (const :tag "fast lock" fast-lock-mode)
                                      (const :tag "lazy lock" lazy-lock-mode)
                                      (const :tag "JIT lock" jit-lock-mode)))
                         ))
  :version "21.1"
  :group 'font-lock)

(defvar fast-lock-mode nil)
(defvar lazy-lock-mode nil)
(defvar jit-lock-mode nil)

(defun font-lock-turn-on-thing-lock ()
  (let ((thing-mode (font-lock-value-in-major-mode font-lock-support-mode)))
    (cond ((eq thing-mode 'fast-lock-mode)
           (fast-lock-mode t))
          ((eq thing-mode 'lazy-lock-mode)
           (lazy-lock-mode t))
          ((eq thing-mode 'jit-lock-mode)
           ;; Prepare for jit-lock
           (remove-hook 'after-change-functions
                        'font-lock-after-change-function t)
           (set (make-local-variable 'font-lock-fontify-buffer-function)
                'jit-lock-refontify)
           ;; Don't fontify eagerly (and don't abort is the buffer is large).
           (set (make-local-variable 'font-lock-fontified) t)
           ;; Use jit-lock.
           (jit-lock-register 'font-lock-fontify-region
                              (not font-lock-keywords-only))))))

(defun font-lock-turn-off-thing-lock ()
  (cond (fast-lock-mode
         (fast-lock-mode -1))
        (jit-lock-mode
         (jit-lock-unregister 'font-lock-fontify-region)
         ;; Reset local vars to the non-jit-lock case.
         (kill-local-variable 'font-lock-fontify-buffer-function))
        (lazy-lock-mode
         (lazy-lock-mode -1))))

(defun font-lock-after-fontify-buffer ()
  (cond (fast-lock-mode
         (fast-lock-after-fontify-buffer))
        ;; Useless now that jit-lock intercepts font-lock-fontify-buffer.  -sm
        ;; (jit-lock-mode
        ;;  (jit-lock-after-fontify-buffer))
        (lazy-lock-mode
         (lazy-lock-after-fontify-buffer))))

(defun font-lock-after-unfontify-buffer ()
  (cond (fast-lock-mode
         (fast-lock-after-unfontify-buffer))
        ;; Useless as well.  It's only called when:
        ;; - turning off font-lock: it does not matter if we leave spurious
        ;;   `fontified' text props around since jit-lock-mode is also off.
        ;; - font-lock-default-fontify-buffer fails: this is not run
        ;;   any more anyway.   -sm
        ;;
        ;; (jit-lock-mode
        ;;  (jit-lock-after-unfontify-buffer))
        (lazy-lock-mode
         (lazy-lock-after-unfontify-buffer))))

;;; End of Font Lock Support mode.

;;; Fontification functions.

;; Rather than the function, e.g., `font-lock-fontify-region' containing the
;; code to fontify a region, the function runs the function whose name is the
;; value of the variable, e.g., `font-lock-fontify-region-function'.  Normally,
;; the value of this variable is, e.g., `font-lock-default-fontify-region'
;; which does contain the code to fontify a region.  However, the value of the
;; variable could be anything and thus, e.g., `font-lock-fontify-region' could
;; do anything.  The indirection of the fontification functions gives major
;; modes the capability of modifying the way font-lock.el fontifies.  Major
;; modes can modify the values of, e.g., `font-lock-fontify-region-function',
;; via the variable `font-lock-defaults'.
;;
;; For example, Rmail mode sets the variable `font-lock-defaults' so that
;; font-lock.el uses its own function for buffer fontification.  This function
;; makes fontification be on a message-by-message basis and so visiting an
;; RMAIL file is much faster.  A clever implementation of the function might
;; fontify the headers differently than the message body.  (It should, and
;; correspondingly for Mail mode, but I can't be bothered to do the work.  Can
;; you?)  This hints at a more interesting use...
;;
;; Languages that contain text normally contained in different major modes
;; could define their own fontification functions that treat text differently
;; depending on its context.  For example, Perl mode could arrange that here
;; docs are fontified differently than Perl code.  Or Yacc mode could fontify
;; rules one way and C code another.  Neat!
;;
;; A further reason to use the fontification indirection feature is when the
;; default syntactual fontification, or the default fontification in general,
;; is not flexible enough for a particular major mode.  For example, perhaps
;; comments are just too hairy for `font-lock-fontify-syntactically-region' to
;; cope with.  You need to write your own version of that function, e.g.,
;; `hairy-fontify-syntactically-region', and make your own version of
;; `hairy-fontify-region' call that function before calling
;; `font-lock-fontify-keywords-region' for the normal regexp fontification
;; pass.  And Hairy mode would set `font-lock-defaults' so that font-lock.el
;; would call your region fontification function instead of its own.  For
;; example, TeX modes could fontify {\foo ...} and \bar{...}  etc. multi-line
;; directives correctly and cleanly.  (It is the same problem as fontifying
;; multi-line strings and comments; regexps are not appropriate for the job.)

;;;###autoload
(defun font-lock-fontify-buffer ()
  "Fontify the current buffer the way the function `font-lock-mode' would."
  (interactive)
  (let ((font-lock-verbose (or font-lock-verbose (interactive-p))))
    (funcall font-lock-fontify-buffer-function)))

(defun font-lock-unfontify-buffer ()
  (funcall font-lock-unfontify-buffer-function))

(defun font-lock-fontify-region (beg end &optional loudly)
  (funcall font-lock-fontify-region-function beg end loudly))

(defun font-lock-unfontify-region (beg end)
  (funcall font-lock-unfontify-region-function beg end))

(defun font-lock-default-fontify-buffer ()
  (let ((verbose (if (numberp font-lock-verbose)
                     (> (buffer-size) font-lock-verbose)
                   font-lock-verbose)))
    (with-temp-message
        (when verbose
          (format "Fontifying %s..." (buffer-name)))
      ;; Make sure we have the right `font-lock-keywords' etc.
      (unless font-lock-mode
        (font-lock-set-defaults))
      ;; Make sure we fontify etc. in the whole buffer.
      (save-restriction
        (widen)
        (condition-case nil
            (save-excursion
              (save-match-data
                (font-lock-fontify-region (point-min) (point-max) verbose)
                (font-lock-after-fontify-buffer)
                (setq font-lock-fontified t)))
          ;; We don't restore the old fontification, so it's best to unfontify.
          (quit (font-lock-unfontify-buffer))))
      ;; Make sure we undo `font-lock-keywords' etc.
      (unless font-lock-mode
        (font-lock-unset-defaults)))))

(defun font-lock-default-unfontify-buffer ()
  ;; Make sure we unfontify etc. in the whole buffer.
  (save-restriction
    (widen)
    (font-lock-unfontify-region (point-min) (point-max))
    (font-lock-after-unfontify-buffer)
    (setq font-lock-fontified nil)))

(defun font-lock-default-fontify-region (beg end loudly)
  (save-buffer-state
      ((parse-sexp-lookup-properties font-lock-syntactic-keywords)
       (old-syntax-table (syntax-table)))
    (unwind-protect
        (save-restriction
          (widen)
          ;; Use the fontification syntax table, if any.
          (when font-lock-syntax-table
            (set-syntax-table font-lock-syntax-table))
          ;; check to see if we should expand the beg/end area for
          ;; proper multiline matches
          (when (and font-lock-multiline
                     (> beg (point-min))
                     (get-text-property (1- beg) 'font-lock-multiline))
            ;; We are just after or in a multiline match.
            (setq beg (or (previous-single-property-change
                           beg 'font-lock-multiline)
                          (point-min)))
            (goto-char beg)
            (setq beg (line-beginning-position)))
          (when font-lock-multiline
            (setq end (or (text-property-any end (point-max)
                                             'font-lock-multiline nil)
                          (point-max))))
          (goto-char end)
          (setq end (line-beginning-position 2))
          ;; Now do the fontification.
          (font-lock-unfontify-region beg end)
          (when font-lock-syntactic-keywords
            (font-lock-fontify-syntactic-keywords-region beg end))
          (unless font-lock-keywords-only
            (font-lock-fontify-syntactically-region beg end loudly))
          (font-lock-fontify-keywords-region beg end loudly))
      ;; Clean up.
      (set-syntax-table old-syntax-table))))

;; The following must be rethought, since keywords can override fontification.
;      ;; Now scan for keywords, but not if we are inside a comment now.
;      (or (and (not font-lock-keywords-only)
;              (let ((state (parse-partial-sexp beg end nil nil
;                                               font-lock-cache-state)))
;                (or (nth 4 state) (nth 7 state))))
;         (font-lock-fontify-keywords-region beg end))

(defun font-lock-default-unfontify-region (beg end)
  (font-lock-kill-shade-in-region beg end)
  (save-buffer-state nil
    (remove-text-properties beg end
                            (if font-lock-syntactic-keywords
                                '(face nil syntax-table nil font-lock-multiline nil)
                              '(face nil font-lock-multiline nil)))))

;; Called when any modification is made to buffer text.
(defun font-lock-after-change-function (beg end old-len)
  (let ((inhibit-point-motion-hooks t))
    (save-excursion
      (save-match-data
        ;; Rescan between start of lines enclosing the region.
        (font-lock-fontify-region
         (progn (goto-char beg) (beginning-of-line) (point))
         (progn (goto-char end) (forward-line 1) (point)))))))

(defun font-lock-fontify-block (&optional arg)
  "Fontify some lines the way `font-lock-fontify-buffer' would.
The lines could be a function or paragraph, or a specified number of lines.
If ARG is given, fontify that many lines before and after point, or 16 lines if
no ARG is given and `font-lock-mark-block-function' is nil.
If `font-lock-mark-block-function' non-nil and no ARG is given, it is used to
delimit the region to fontify."
  (interactive "P")
  (let ((inhibit-point-motion-hooks t) font-lock-beginning-of-syntax-function
        deactivate-mark)
    ;; Make sure we have the right `font-lock-keywords' etc.
    (if (not font-lock-mode) (font-lock-set-defaults))
    (save-excursion
      (save-match-data
        (condition-case error-data
            (if (or arg (not font-lock-mark-block-function))
                (let ((lines (if arg (prefix-numeric-value arg) 16)))
                  (font-lock-fontify-region
                   (save-excursion (forward-line (- lines)) (point))
                   (save-excursion (forward-line lines) (point))))
              (funcall font-lock-mark-block-function)
              (font-lock-fontify-region (point) (mark)))
          ((error quit) (message "Fontifying block...%s" error-data)))))))

(define-key facemenu-keymap "\M-g" 'font-lock-fontify-block)

;;; End of Fontification functions.

;;; Additional text property functions.

;; The following text property functions should be builtins.  This means they
;; should be written in C and put with all the other text property functions.
;; In the meantime, those that are used by font-lock.el are defined in Lisp
;; below and given a `font-lock-' prefix.  Those that are not used are defined
;; in Lisp below and commented out.  sm.

(defun font-lock-prepend-text-property (start end prop value &optional object)
  "Prepend to one property of the text from START to END.
Arguments PROP and VALUE specify the property and value to prepend to the value
already in place.  The resulting property values are always lists.
Optional argument OBJECT is the string or buffer containing the text."
  (let ((val (if (listp value) value (list value))) next prev)
    (while (/= start end)
      (setq next (next-single-property-change start prop object end)
            prev (get-text-property start prop object))
      (put-text-property start next prop
                         (append val (if (listp prev) prev (list prev)))
                         object)
      (setq start next))))

(defun font-lock-append-text-property (start end prop value &optional object)
  "Append to one property of the text from START to END.
Arguments PROP and VALUE specify the property and value to append to the value
already in place.  The resulting property values are always lists.
Optional argument OBJECT is the string or buffer containing the text."
  (let ((val (if (listp value) value (list value))) next prev)
    (while (/= start end)
      (setq next (next-single-property-change start prop object end)
            prev (get-text-property start prop object))
      (put-text-property start next prop
                         (append (if (listp prev) prev (list prev)) val)
                         object)
      (setq start next))))

(defun font-lock-fillin-text-property (start end prop value &optional object)
  "Fill in one property of the text from START to END.
Arguments PROP and VALUE specify the property and value to put where none are
already in place.  Therefore existing property values are not overwritten.
Optional argument OBJECT is the string or buffer containing the text."
  (let ((start (text-property-any start end prop nil object)) next)
    (while start
      (setq next (next-single-property-change start prop object end))
      (put-text-property start next prop value object)
      (setq start (text-property-any next end prop nil object)))))

;; For completeness: this is to `remove-text-properties' as `put-text-property'
;; is to `add-text-properties', etc.
;(defun remove-text-property (start end property &optional object)
;  "Remove a property from text from START to END.
;Argument PROPERTY is the property to remove.
;Optional argument OBJECT is the string or buffer containing the text.
;Return t if the property was actually removed, nil otherwise."
;  (remove-text-properties start end (list property) object))

;; For consistency: maybe this should be called `remove-single-property' like
;; `next-single-property-change' (not `next-single-text-property-change'), etc.
;(defun remove-single-text-property (start end prop value &optional object)
;  "Remove a specific property value from text from START to END.
;Arguments PROP and VALUE specify the property and value to remove.  The
;resulting property values are not equal to VALUE nor lists containing VALUE.
;Optional argument OBJECT is the string or buffer containing the text."
;  (let ((start (text-property-not-all start end prop nil object)) next prev)
;    (while start
;      (setq next (next-single-property-change start prop object end)
;           prev (get-text-property start prop object))
;      (cond ((and (symbolp prev) (eq value prev))
;            (remove-text-property start next prop object))
;           ((and (listp prev) (memq value prev))
;            (let ((new (delq value prev)))
;              (cond ((null new)
;                     (remove-text-property start next prop object))
;                    ((= (length new) 1)
;                     (put-text-property start next prop (car new) object))
;                    (t
;                     (put-text-property start next prop new object))))))
;      (setq start (text-property-not-all next end prop nil object)))))

;;; End of Additional text property functions.

;;; Syntactic regexp fontification functions.

;; These syntactic keyword pass functions are identical to those keyword pass
;; functions below, with the following exceptions; (a) they operate on
;; `font-lock-syntactic-keywords' of course, (b) they are all `defun' as speed
;; is less of an issue, (c) eval of property value does not occur JIT as speed
;; is less of an issue, (d) OVERRIDE cannot be `prepend' or `append' as it
;; makes no sense for `syntax-table' property values, (e) they do not do it
;; LOUDLY as it is not likely to be intensive.

(defun font-lock-apply-syntactic-highlight (highlight)
  "Apply HIGHLIGHT following a match.
HIGHLIGHT should be of the form MATCH-HIGHLIGHT,
see `font-lock-syntactic-keywords'."
  (let* ((match (nth 0 highlight))
         (start (match-beginning match)) (end (match-end match))
         (value (nth 1 highlight))
         (override (nth 2 highlight)))
    (when (and (consp value) (not (numberp (car value))))
      (setq value (eval value)))
    (when (stringp value) (setq value (string-to-syntax value)))
    (cond ((not start)
           ;; No match but we might not signal an error.
           (or (nth 3 highlight)
               (error "No match %d in highlight %S" match highlight)))
          ((not override)
           ;; Cannot override existing fontification.
           (or (text-property-not-all start end 'syntax-table nil)
               (put-text-property start end 'syntax-table value)))
          ((eq override t)
           ;; Override existing fontification.
           (put-text-property start end 'syntax-table value))
          ((eq override 'keep)
           ;; Keep existing fontification.
           (font-lock-fillin-text-property start end 'syntax-table value)))))

(defun font-lock-fontify-syntactic-anchored-keywords (keywords limit)
  "Fontify according to KEYWORDS until LIMIT.
KEYWORDS should be of the form MATCH-ANCHORED, see `font-lock-keywords',
LIMIT can be modified by the value of its PRE-MATCH-FORM."
  (let ((matcher (nth 0 keywords)) (lowdarks (nthcdr 3 keywords)) highlights
        ;; Evaluate PRE-MATCH-FORM.
        (pre-match-value (eval (nth 1 keywords))))
    ;; Set LIMIT to value of PRE-MATCH-FORM or the end of line.
    (if (and (numberp pre-match-value) (> pre-match-value (point)))
        (setq limit pre-match-value)
      (setq limit (line-end-position)))
    (save-match-data
      ;; Find an occurrence of `matcher' before `limit'.
      (while (if (stringp matcher)
                 (re-search-forward matcher limit t)
               (funcall matcher limit))
        ;; Apply each highlight to this instance of `matcher'.
        (setq highlights lowdarks)
        (while highlights
          (font-lock-apply-syntactic-highlight (car highlights))
          (setq highlights (cdr highlights)))))
    ;; Evaluate POST-MATCH-FORM.
    (eval (nth 2 keywords))))

(defun font-lock-fontify-syntactic-keywords-region (start end)
  "Fontify according to `font-lock-syntactic-keywords' between START and END.
START should be at the beginning of a line."
  ;; Ensure the beginning of the file is properly syntactic-fontified.
  (when (and font-lock-syntactically-fontified
             (< font-lock-syntactically-fontified start))
    (setq start (max font-lock-syntactically-fontified (point-min)))
    (setq font-lock-syntactically-fontified end))
  ;; If `font-lock-syntactic-keywords' is a symbol, get the real keywords.
  (when (symbolp font-lock-syntactic-keywords)
    (setq font-lock-syntactic-keywords (font-lock-eval-keywords
                                        font-lock-syntactic-keywords)))
  ;; If `font-lock-syntactic-keywords' is not compiled, compile it.
  (unless (eq (car font-lock-syntactic-keywords) t)
    (setq font-lock-syntactic-keywords (font-lock-compile-keywords
                                        font-lock-syntactic-keywords)))
  ;; Get down to business.
  (let ((case-fold-search font-lock-keywords-case-fold-search)
        (keywords (cdr font-lock-syntactic-keywords))
        keyword matcher highlights)
    (while keywords
      ;; Find an occurrence of `matcher' from `start' to `end'.
      (setq keyword (car keywords) matcher (car keyword))
      (goto-char start)
      (while (if (stringp matcher)
                 (re-search-forward matcher end t)
               (funcall matcher end))
        ;; Apply each highlight to this instance of `matcher', which may be
        ;; specific highlights or more keywords anchored to `matcher'.
        (setq highlights (cdr keyword))
        (while highlights
          (if (numberp (car (car highlights)))
              (font-lock-apply-syntactic-highlight (car highlights))
            (font-lock-fontify-syntactic-anchored-keywords (car highlights)
                                                           end))
          (setq highlights (cdr highlights))))
      (setq keywords (cdr keywords)))))

;;; End of Syntactic regexp fontification functions.

;;; Syntactic fontification functions.

;; These record the parse state at a particular position, always the start of a
;; line.  Used to make `font-lock-fontify-syntactically-region' faster.
;; Previously, `font-lock-cache-position' was just a buffer position.  However,
;; under certain situations, this occasionally resulted in mis-fontification.
;; I think the "situations" were deletion with Lazy Lock mode's deferral.  sm.
(defvar font-lock-cache-state nil)
(defvar font-lock-cache-position nil)

(defvar depth-to-color (list "#ffeeee" "#ffffdd" "#ffffcc" "#ffffbb" "#ffffaa" "#ffff99" "#ffff88" "#ffff77" "#ffff66" "#ffff55" "#ffff44" "#ffff33" "#ffff22"))

(setq depth-cols (make-vector 100 0))
(setq max-depth 0)
(setq depth-to-color
          (list 
;          "#ffeeee" "#fff6ee" "#ffffee" "#f6ffee" "#eefff6" "#eefff6"
;          "#eeffff" "#eef6ff" "#eeeeff" "#f6eeff" "#ffeeff" "#fff6ff"
;           "#ffdddd" "#ffeedd" "#ffffdd" "#eeffdd" "#ddffdd" "#ddffee"
;           "#ddffff" "#ddeeff" "#ddddff" "#eeddff" "#ffddff" "#ffeeff"
           "#ffcccc" "#ffe7cc" "#ffffcc" "#e7ffdd" "#ccffcc" "#ccffe7"
           "#ccffff" "#cce7ff" "#ccccff" "#e7ccff" "#ffccff" "#ffe7ff"
           "#ffbbbb" "#ffddbb" "#ffffbb" "#ddbbff" "#bbffbb" "#ccffcc"
           "#bbffff" "#bbddff" "#bbbbff" "#ddccff" "#ffbbff" "#ffddff"))

(setq depth-to-color
      (list 
       "#ffeeee" "#ffffee" "#eeffee" "#eeffff" "#eeeeff" "#ffeeff"
       "#ffdddd" "#ffffdd" "#ddffdd" "#ddffff" "#ddddff" "#ffddff"
       "#ffcccc" "#ffffcc" "#ccffcc" "#ccffff" "#ccccff" "#ffccff"
       "#ffbbbb" "#ffffbb" "#bbffbb" "#bbffff" "#bbbbff" "#ffbbff"
       "#ffaaaa" "#ffffaa" "#aaffaa" "#aaffff" "#aaaaff" "#ffaaff"
       "#ff9999" "#ffff99" "#99ff99" "#99ffff" "#9999ff" "#ff99ff"
       "#ff8888" "#ffff88" "#88ff88" "#88ffff" "#8888ff" "#ff88ff"
       "#ff7777" "#ffff77" "#77ff77" "#77ffff" "#7777ff" "#ff77ff"))


'(red (orange (yellow (yellowgreen (green (bluegreen (cyan (cyanblue (blue (purple (foo (bar
  (red (orange (yellow (yellowgreen (green (bluegreen (cyan (cyanblue (blue (purple (foo (bar
   (red (orange (yellow (yellowgreen (green (bluegreen (cyan (cyanblue (blue (purple (foo (bar

))))))))))))))))))))))))))))))))))))

(defun font-lock-apply-shade (from to depth addline)
  (when (> depth 0)
    (let ((my-overlay (make-overlay from to)) face)
      (overlay-put my-overlay 'category 'font-lock-shade)
      ;; setting priority negative isa gainst the emacs docs but has
      ;; to be here so mouse hilighting shows up
      (overlay-put my-overlay 'priority -1)
      (overlay-put my-overlay 'evaporate t)
      (setq face (list :background (nth (- depth 1) depth-to-color)))
      (when addline
;		(overlay-put my-overlay 'display '((margin nil) "|"))
;       (overlay-put my-overlay 'before-string "|")
        (setq face (append face (list :foreground 'red)))
        (setq face (append face (list :stipple '(6 1 " "))))
        )
;       (setq face (append face (list :foreground (nth (+ 12 (- depth 1)) depth-to-color))))
      (overlay-put my-overlay 'face face)
;      (message (concat "Adding shade depth " (number-to-string depth) " from " (number-to-string from) " to " (number-to-string to)))
      )
    ))

(defun font-lock-apply-shade-with-line (from to depth)
  (if nil
      (progn
        (when (> (- to from) 0)
          (font-lock-apply-shade from (+ from 1) depth t)
          (when (> (- to from) 1)
            (font-lock-apply-shade (+ from 1) to depth nil))))
    (font-lock-apply-shade from to depth nil)))
	 

(defun font-lock-kill-shade-in-region (start end)
  (let ((overlays (reverse (overlays-in start end))))
    (while (not (null overlays))
      (let ((overlay (car overlays)))
        (when (eq (overlay-get overlay 'category) 'font-lock-shade)
          (let ((ostart (overlay-start overlay)) (oend (overlay-end overlay)))
            (if (>= ostart start)
                (if (<= oend end)
                    (delete-overlay overlay)
                  (move-overlay overlay end oend))
              (move-overlay overlay ostart start)))))
      (setq overlays (cdr overlays)))))

(defun font-lock-shade-region (depth start end)
  (message (concat "Shading region " (number-to-string start) "-" (number-to-string end)))
  (save-excursion
    (save-restriction
      (narrow-to-region start end)
      (goto-char start)
      (let ((eol 0))
        (while (< eol end)
          (let (bol last beg (curdepth 0))
            (setq beg (line-beginning-position))
            (beginning-of-line-text)
            (setq bol (point))
            (goto-char beg)
            (setq last beg)
            (while (and (< beg bol))
              (when (and (< curdepth max-depth) (>= (current-column) (aref depth-cols curdepth)))
                (font-lock-apply-shade-with-line last beg curdepth)
;                (while (>= (current-column) (aref depth-cols curdepth))
                  (setq curdepth (+ 1 curdepth))
;)
                 (setq last beg))
              (forward-char)
              (setq beg (point)))
            (if (< last beg)
                (font-lock-apply-shade-with-line last beg curdepth)))
          (let (beg beg-hilit bolc)
            (beginning-of-line-text)
            (setq beg (point))
            (setq bolc (current-column))
            (setq beg-hilit beg)
            (setq eol (line-end-position))
            (while (< beg eol)
              (let (parenpos next-paren next-hilit paren-type)
                (setq parenpos (search-forward-regexp "\\(\\s(\\)\\|\\(\\s)\\)" eol 'move-to-end))
                (setq next-paren (point))
                (setq parentype
                      (if (null parenpos)
                          0
                        (if (null (match-beginning 1))
                            (if (null (match-beginning 2))
                                0
                              -1)
                          1)))
                (if (= parentype 1)
                    (progn
                      (setq next-hilit (- next-paren 1))
                      (aset depth-cols depth bolc ))
                  (setq next-hilit next-paren))
                (font-lock-apply-shade beg-hilit next-hilit depth nil)
                (setq depth (+ depth parentype))
                (setq max-depth depth)
                (setq beg next-paren)
                (setq beg-hilit next-hilit)))
            (forward-line)))))))


(defun font-lock-fontify-syntactically-region (start end &optional loudly)
   "Put proper face on each string and comment between START and END.
START should be at the beginning of a line."
  (let ((cache (marker-position font-lock-cache-position))
        state face beg)
    (if loudly (message "Fontifying %s... (syntactically...)" (buffer-name)))
    (goto-char start)
    ;;
    ;; Find the state at the `beginning-of-line' before `start'.
    (if (eq start cache)
        ;; Use the cache for the state of `start'.
        (setq state font-lock-cache-state)
      ;; Find the state of `start'.
      (if (null font-lock-beginning-of-syntax-function)
           ;; Use the state at the previous cache position, if any, or
          ;; otherwise calculate from `point-min'.
          (if (or (null cache) (< start cache))
              (setq state (parse-partial-sexp (point-min) start))
            (setq state (parse-partial-sexp cache start nil nil
                                            font-lock-cache-state)))
        ;; Call the function to move outside any syntactic block.
        (funcall font-lock-beginning-of-syntax-function)
        (setq state (parse-partial-sexp (point) start)))
      ;; Cache the state and position of `start'.
      (setq font-lock-cache-state state)
      (set-marker font-lock-cache-position start))
        
    ;; ADDED:
    (font-lock-shade-region (nth 0 state) start end)
    ;;
    ;; If the region starts inside a string or comment, show the extent of it.
    (when (or (nth 3 state) (nth 4 state))
      (setq face (funcall font-lock-syntactic-face-function state) beg (point))
      (setq state (parse-partial-sexp (point) end nil nil state 'syntax-table))
      (put-text-property beg (point) 'face face))
    ;;
    ;; Find each interesting place between here and `end'.
    (while (and (< (point) end)
                (progn
                  (setq state (parse-partial-sexp (point) end nil nil state
                                                  'syntax-table))
                  (or (nth 3 state) (nth 4 state))))
      (setq face (funcall font-lock-syntactic-face-function state)
            beg (nth 8 state))
      (setq state (parse-partial-sexp (point) end nil nil state 'syntax-table))
      (put-text-property beg (point) 'face face))))

;;; End of Syntactic fontification functions.

;;; Keyword regexp fontification functions.

(defsubst font-lock-apply-highlight (highlight)
  "Apply HIGHLIGHT following a match.
HIGHLIGHT should be of the form MATCH-HIGHLIGHT, see `font-lock-keywords'."
  (let* ((match (nth 0 highlight))
         (start (match-beginning match)) (end (match-end match))
         (override (nth 2 highlight)))
    (cond ((not start)
           ;; No match but we might not signal an error.
           (or (nth 3 highlight)
               (error "No match %d in highlight %S" match highlight)))
          ((not override)
           ;; Cannot override existing fontification.
           (or (text-property-not-all start end 'face nil)
               (put-text-property start end 'face (eval (nth 1 highlight)))))
          ((eq override t)
           ;; Override existing fontification.
           (put-text-property start end 'face (eval (nth 1 highlight))))
          ((eq override 'prepend)
           ;; Prepend to existing fontification.
           (font-lock-prepend-text-property start end 'face (eval (nth 1 highlight))))
          ((eq override 'append)
           ;; Append to existing fontification.
           (font-lock-append-text-property start end 'face (eval (nth 1 highlight))))
          ((eq override 'keep)
           ;; Keep existing fontification.
           (font-lock-fillin-text-property start end 'face (eval (nth 1 highlight)))))))

(defsubst font-lock-fontify-anchored-keywords (keywords limit)
  "Fontify according to KEYWORDS until LIMIT.
KEYWORDS should be of the form MATCH-ANCHORED, see `font-lock-keywords',
LIMIT can be modified by the value of its PRE-MATCH-FORM."
  (let ((matcher (nth 0 keywords)) (lowdarks (nthcdr 3 keywords)) highlights
        (lead-start (match-beginning 0))
        ;; Evaluate PRE-MATCH-FORM.
        (pre-match-value (eval (nth 1 keywords))))
    ;; Set LIMIT to value of PRE-MATCH-FORM or the end of line.
    (if (not (and (numberp pre-match-value) (> pre-match-value (point))))
        (setq limit (line-end-position))
      (setq limit pre-match-value)
      (when (and font-lock-multiline (>= limit (line-beginning-position 2)))
        ;; this is a multiline anchored match
        ;; (setq font-lock-multiline t)
        (put-text-property (if (= limit (line-beginning-position 2))
                               (1- limit)
                             (min lead-start (point)))
                           limit
                           'font-lock-multiline t)))
    (save-match-data
      ;; Find an occurrence of `matcher' before `limit'.
      (while (and (< (point) limit)
                  (if (stringp matcher)
                      (re-search-forward matcher limit t)
                    (funcall matcher limit)))
        ;; Apply each highlight to this instance of `matcher'.
        (setq highlights lowdarks)
        (while highlights
          (font-lock-apply-highlight (car highlights))
          (setq highlights (cdr highlights)))))
    ;; Evaluate POST-MATCH-FORM.
    (eval (nth 2 keywords))))

(defun font-lock-fontify-keywords-region (start end &optional loudly)
  "Fontify according to `font-lock-keywords' between START and END.
START should be at the beginning of a line."
  (unless (eq (car font-lock-keywords) t)
    (setq font-lock-keywords (font-lock-compile-keywords font-lock-keywords)))
  (let ((case-fold-search font-lock-keywords-case-fold-search)
        (keywords (cdr font-lock-keywords))
        (bufname (buffer-name)) (count 0)
        keyword matcher highlights)
    ;;
    ;; Fontify each item in `font-lock-keywords' from `start' to `end'.
    (while keywords
      (if loudly (message "Fontifying %s... (regexps..%s)" bufname
                          (make-string (incf count) ?.)))
      ;;
      ;; Find an occurrence of `matcher' from `start' to `end'.
      (setq keyword (car keywords) matcher (car keyword))
      (goto-char start)
      (while (and (< (point) end)
                  (if (stringp matcher)
                      (re-search-forward matcher end t)
                    (funcall matcher end)))
        (when (and font-lock-multiline
                   (>= (point)
                       (save-excursion (goto-char (match-beginning 0))
                                       (forward-line 1) (point))))
          ;; this is a multiline regexp match
          ;; (setq font-lock-multiline t)
          (put-text-property (if (= (point)
                                    (save-excursion
                                      (goto-char (match-beginning 0))
                                      (forward-line 1) (point)))
                                 (1- (point))
                               (match-beginning 0))
                             (point)
                             'font-lock-multiline t))
        ;; Apply each highlight to this instance of `matcher', which may be
        ;; specific highlights or more keywords anchored to `matcher'.
        (setq highlights (cdr keyword))
        (while highlights
          (if (numberp (car (car highlights)))
              (font-lock-apply-highlight (car highlights))
            (font-lock-fontify-anchored-keywords (car highlights) end))
          (setq highlights (cdr highlights))))
      (setq keywords (cdr keywords)))))

;;; End of Keyword regexp fontification functions.

;; Various functions.

(defun font-lock-compile-keywords (keywords)
  "Compile KEYWORDS into the form (t KEYWORD ...).
Here KEYWORD is of the form (MATCHER HIGHLIGHT ...) as shown in the
`font-lock-keywords' doc string."
  (if (eq (car-safe keywords) t)
      keywords
    (cons t (mapcar 'font-lock-compile-keyword keywords))))

(defun font-lock-compile-keyword (keyword)
  (cond ((nlistp keyword)                       ; MATCHER
         (list keyword '(0 font-lock-keyword-face)))
        ((eq (car keyword) 'eval)               ; (eval . FORM)
         (font-lock-compile-keyword (eval (cdr keyword))))
        ((eq (car-safe (cdr keyword)) 'quote)   ; (MATCHER . 'FORM)
         ;; If FORM is a FACENAME then quote it.  Otherwise ignore the quote.
         (if (symbolp (nth 2 keyword))
             (list (car keyword) (list 0 (cdr keyword)))
           (font-lock-compile-keyword (cons (car keyword) (nth 2 keyword)))))
        ((numberp (cdr keyword))                ; (MATCHER . MATCH)
         (list (car keyword) (list (cdr keyword) 'font-lock-keyword-face)))
        ((symbolp (cdr keyword))                ; (MATCHER . FACENAME)
         (list (car keyword) (list 0 (cdr keyword))))
        ((nlistp (nth 1 keyword))               ; (MATCHER . HIGHLIGHT)
         (list (car keyword) (cdr keyword)))
        (t                                      ; (MATCHER HIGHLIGHT ...)
         keyword)))

(defun font-lock-eval-keywords (keywords)
  "Evalulate KEYWORDS if a function (funcall) or variable (eval) name."
  (if (listp keywords)
      keywords
    (font-lock-eval-keywords (if (fboundp keywords)
                                 (funcall keywords)
                               (eval keywords)))))

(defun font-lock-value-in-major-mode (alist)
  "Return value in ALIST for `major-mode', or ALIST if it is not an alist.
Structure is ((MAJOR-MODE . VALUE) ...) where MAJOR-MODE may be t."
  (if (consp alist)
      (cdr (or (assq major-mode alist) (assq t alist)))
    alist))

(defun font-lock-choose-keywords (keywords level)
  "Return LEVELth element of KEYWORDS.
A LEVEL of nil is equal to a LEVEL of 0, a LEVEL of t is equal to
\(1- (length KEYWORDS))."
  (cond ((not (and (listp keywords) (symbolp (car keywords))))
         keywords)
        ((numberp level)
         (or (nth level keywords) (car (reverse keywords))))
        ((eq level t)
         (car (reverse keywords)))
        (t
         (car keywords))))

(defvar font-lock-set-defaults nil)     ; Whether we have set up defaults.

(defun font-lock-set-defaults ()
  "Set fontification defaults appropriately for this mode.
Sets various variables using `font-lock-defaults' (or, if nil, using
`font-lock-defaults-alist') and `font-lock-maximum-decoration'."
  ;; Set fontification defaults iff not previously set.
  (unless font-lock-set-defaults
    (set (make-local-variable 'font-lock-set-defaults)          t)
    (set (make-local-variable 'font-lock-cache-state)           nil)
    (set (make-local-variable 'font-lock-cache-position)        (make-marker))
    (make-local-variable 'font-lock-fontified)
    (make-local-variable 'font-lock-multiline)
    (let* ((defaults (or font-lock-defaults
                         (cdr (assq major-mode font-lock-defaults-alist))))
           (keywords
            (font-lock-choose-keywords (nth 0 defaults)
             (font-lock-value-in-major-mode font-lock-maximum-decoration)))
           (local (cdr (assq major-mode font-lock-keywords-alist)))
           (removed-keywords
            (cdr-safe (assq major-mode font-lock-removed-keywords-alist))))
      ;; Regexp fontification?
      (set (make-local-variable 'font-lock-keywords)
           (font-lock-compile-keywords (font-lock-eval-keywords keywords)))
      ;; Local fontification?
      (while local
        (font-lock-add-keywords nil (car (car local)) (cdr (car local)))
        (setq local (cdr local)))
      (when removed-keywords
        (font-lock-remove-keywords nil removed-keywords))
      ;; Syntactic fontification?
      (when (nth 1 defaults)
        (set (make-local-variable 'font-lock-keywords-only) t))
      ;; Case fold during regexp fontification?
      (when (nth 2 defaults)
        (set (make-local-variable 'font-lock-keywords-case-fold-search) t))
      ;; Syntax table for regexp and syntactic fontification?
      (when (nth 3 defaults)
        (let ((slist (nth 3 defaults)))
          (set (make-local-variable 'font-lock-syntax-table)
               (copy-syntax-table (syntax-table)))
          (while slist
            ;; The character to modify may be a single CHAR or a STRING.
            (let ((chars (if (numberp (car (car slist)))
                             (list (car (car slist)))
                           (mapcar 'identity (car (car slist)))))
                  (syntax (cdr (car slist))))
              (while chars
                (modify-syntax-entry (car chars) syntax font-lock-syntax-table)
                (setq chars (cdr chars)))
              (setq slist (cdr slist))))))
      ;; Syntax function for syntactic fontification?
      (when (nth 4 defaults)
        (set (make-local-variable 'font-lock-beginning-of-syntax-function)
             (nth 4 defaults)))
      ;; Variable alist?
      (dolist (x (nthcdr 5 defaults))
        (let ((variable (car x)) (value (cdr x)))
          (unless (boundp variable)
            (set variable nil))         ;why ?
          (set (make-local-variable variable) value))))))

(defun font-lock-unset-defaults ()
  "Unset fontification defaults.  See function `font-lock-set-defaults'."
  (setq font-lock-set-defaults                  nil
        font-lock-keywords                      nil
        font-lock-keywords-only                 nil
        font-lock-keywords-case-fold-search     nil
        font-lock-syntax-table                  nil
        font-lock-beginning-of-syntax-function  nil)
  (let* ((defaults (or font-lock-defaults
                       (cdr (assq major-mode font-lock-defaults-alist))))
         (alist (nthcdr 5 defaults)))
    (while alist
      (set (car (car alist)) (default-value (car (car alist))))
      (setq alist (cdr alist)))))

;;; Colour etc. support.

;; Originally face attributes were specified via `font-lock-face-attributes'.
;; Users then changed the default face attributes by setting that variable.
;; However, we try and be back-compatible and respect its value if set except
;; for faces where M-x customize has been used to save changes for the face.
(when (boundp 'font-lock-face-attributes)
  (let ((face-attributes font-lock-face-attributes))
    (while face-attributes
      (let* ((face-attribute (pop face-attributes))
             (face (car face-attribute)))
        ;; Rustle up a `defface' SPEC from a `font-lock-face-attributes' entry.
        (unless (get face 'saved-face)
          (let ((foreground (nth 1 face-attribute))
                (background (nth 2 face-attribute))
                (bold-p (nth 3 face-attribute))
                (italic-p (nth 4 face-attribute))
                (underline-p (nth 5 face-attribute))
                face-spec)
            (when foreground
              (setq face-spec (cons ':foreground (cons foreground face-spec))))
            (when background
              (setq face-spec (cons ':background (cons background face-spec))))
            (when bold-p
              (setq face-spec (append '(:bold t) face-spec)))
            (when italic-p
              (setq face-spec (append '(:italic t) face-spec)))
            (when underline-p
              (setq face-spec (append '(:underline t) face-spec)))
            (custom-declare-face face (list (list t face-spec)) nil)))))))

;; But now we do it the custom way.  Note that `defface' will not overwrite any
;; faces declared above via `custom-declare-face'.
(defface font-lock-comment-face
  '((((type tty pc) (class color) (background light)) (:foreground "red"))
    (((type tty pc) (class color) (background dark)) (:foreground "red1"))
    (((class grayscale) (background light))
     (:foreground "DimGray" :bold t :italic t))
    (((class grayscale) (background dark))
     (:foreground "LightGray" :bold t :italic t))
    (((class color) (background light)) (:foreground "Firebrick"))
    (((class color) (background dark)) (:foreground "chocolate1"))
    (t (:bold t :italic t)))
  "Font Lock mode face used to highlight comments."
  :group 'font-lock-highlighting-faces)

(defface font-lock-string-face
  '((((type tty) (class color)) (:foreground "green"))
    (((class grayscale) (background light)) (:foreground "DimGray" :italic t))
    (((class grayscale) (background dark)) (:foreground "LightGray" :italic t))
    (((class color) (background light)) (:foreground "RosyBrown"))
    (((class color) (background dark)) (:foreground "LightSalmon"))
    (t (:italic t)))
  "Font Lock mode face used to highlight strings."
  :group 'font-lock-highlighting-faces)

(defface font-lock-doc-face
  '((t :inherit font-lock-string-face))
  "Font Lock mode face used to highlight documentation."
  :group 'font-lock-highlighting-faces)

(defface font-lock-keyword-face
  '((((type tty) (class color)) (:foreground "cyan" :weight bold))
    (((class grayscale) (background light)) (:foreground "LightGray" :bold t))
    (((class grayscale) (background dark)) (:foreground "DimGray" :bold t))
    (((class color) (background light)) (:foreground "Purple"))
    (((class color) (background dark)) (:foreground "Cyan"))
    (t (:bold t)))
  "Font Lock mode face used to highlight keywords."
  :group 'font-lock-highlighting-faces)

(defface font-lock-builtin-face
  '((((type tty) (class color)) (:foreground "blue" :weight light))
    (((class grayscale) (background light)) (:foreground "LightGray" :bold t))
    (((class grayscale) (background dark)) (:foreground "DimGray" :bold t))
    (((class color) (background light)) (:foreground "Orchid"))
    (((class color) (background dark)) (:foreground "LightSteelBlue"))
    (t (:bold t)))
  "Font Lock mode face used to highlight builtins."
  :group 'font-lock-highlighting-faces)

(defface font-lock-function-name-face
  '((((type tty) (class color)) (:foreground "blue" :weight bold))
    (((class color) (background light)) (:foreground "Blue"))
    (((class color) (background dark)) (:foreground "LightSkyBlue"))
    (t (:inverse-video t :bold t)))
  "Font Lock mode face used to highlight function names."
  :group 'font-lock-highlighting-faces)

(defface font-lock-variable-name-face
  '((((type tty) (class color)) (:foreground "yellow" :weight light))
    (((class grayscale) (background light))
     (:foreground "Gray90" :bold t :italic t))
    (((class grayscale) (background dark))
     (:foreground "DimGray" :bold t :italic t))
    (((class color) (background light)) (:foreground "DarkGoldenrod"))
    (((class color) (background dark)) (:foreground "LightGoldenrod"))
    (t (:bold t :italic t)))
  "Font Lock mode face used to highlight variable names."
  :group 'font-lock-highlighting-faces)

(defface font-lock-type-face
  '((((type tty) (class color)) (:foreground "green"))
    (((class grayscale) (background light)) (:foreground "Gray90" :bold t))
    (((class grayscale) (background dark)) (:foreground "DimGray" :bold t))
    (((class color) (background light)) (:foreground "ForestGreen"))
    (((class color) (background dark)) (:foreground "PaleGreen"))
    (t (:bold t :underline t)))
  "Font Lock mode face used to highlight type and classes."
  :group 'font-lock-highlighting-faces)

(defface font-lock-constant-face
  '((((type tty) (class color)) (:foreground "magenta"))
    (((class grayscale) (background light))
     (:foreground "LightGray" :bold t :underline t))
    (((class grayscale) (background dark))
     (:foreground "Gray50" :bold t :underline t))
    (((class color) (background light)) (:foreground "CadetBlue"))
    (((class color) (background dark)) (:foreground "Aquamarine"))
    (t (:bold t :underline t)))
  "Font Lock mode face used to highlight constants and labels."
  :group 'font-lock-highlighting-faces)

(defface font-lock-warning-face
  '((((type tty) (class color)) (:foreground "red"))
    (((class color) (background light)) (:foreground "Red" :bold t))
    (((class color) (background dark)) (:foreground "Pink" :bold t))
    (t (:inverse-video t :bold t)))
  "Font Lock mode face used to highlight warnings."
  :group 'font-lock-highlighting-faces)

;;; End of Colour etc. support.

;;; Menu support.

;; This section of code is commented out because Emacs does not have real menu
;; buttons.  (We can mimic them by putting "( ) " or "(X) " at the beginning of
;; the menu entry text, but with Xt it looks both ugly and embarrassingly
;; amateur.)  If/When Emacs gets real menus buttons, put in menu-bar.el after
;; the entry for "Text Properties" something like:
;;
;; (define-key menu-bar-edit-menu [font-lock]
;;   (cons "Syntax Highlighting" font-lock-menu))
;;
;; and remove a single ";" from the beginning of each line in the rest of this
;; section.  Probably the mechanism for telling the menu code what are menu
;; buttons and when they are on or off needs tweaking.  I have assumed that the
;; mechanism is via `menu-toggle' and `menu-selected' symbol properties.  sm.

;;;;###autoload
;(progn
;  ;; Make the Font Lock menu.
;  (defvar font-lock-menu (make-sparse-keymap "Syntax Highlighting"))
;  ;; Add the menu items in reverse order.
;  (define-key font-lock-menu [fontify-less]
;    '("Less In Current Buffer" . font-lock-fontify-less))
;  (define-key font-lock-menu [fontify-more]
;    '("More In Current Buffer" . font-lock-fontify-more))
;  (define-key font-lock-menu [font-lock-sep]
;    '("--"))
;  (define-key font-lock-menu [font-lock-mode]
;    '("In Current Buffer" . font-lock-mode))
;  (define-key font-lock-menu [global-font-lock-mode]
;    '("In All Buffers" . global-font-lock-mode)))
;
;;;;###autoload
;(progn
;  ;; We put the appropriate `menu-enable' etc. symbol property values on when
;  ;; font-lock.el is loaded, so we don't need to autoload the three variables.
;  (put 'global-font-lock-mode 'menu-toggle t)
;  (put 'font-lock-mode 'menu-toggle t)
;  (put 'font-lock-fontify-more 'menu-enable '(identity))
;  (put 'font-lock-fontify-less 'menu-enable '(identity)))
;
;;; Put the appropriate symbol property values on now.  See above.
;(put 'global-font-lock-mode 'menu-selected 'global-font-lock-mode)
;(put 'font-lock-mode 'menu-selected 'font-lock-mode)
;(put 'font-lock-fontify-more 'menu-enable '(nth 2 font-lock-fontify-level))
;(put 'font-lock-fontify-less 'menu-enable '(nth 1 font-lock-fontify-level))
;
;(defvar font-lock-fontify-level nil)   ; For less/more fontification.
;
;(defun font-lock-fontify-level (level)
;  (let ((font-lock-maximum-decoration level))
;    (when font-lock-mode
;      (font-lock-mode))
;    (font-lock-mode)
;    (when font-lock-verbose
;      (message "Fontifying %s... level %d" (buffer-name) level))))
;
;(defun font-lock-fontify-less ()
;  "Fontify the current buffer with less decoration.
;See `font-lock-maximum-decoration'."
;  (interactive)
;  ;; Check in case we get called interactively.
;  (if (nth 1 font-lock-fontify-level)
;      (font-lock-fontify-level (1- (car font-lock-fontify-level)))
;    (error "No less decoration")))
;
;(defun font-lock-fontify-more ()
;  "Fontify the current buffer with more decoration.
;See `font-lock-maximum-decoration'."
;  (interactive)
;  ;; Check in case we get called interactively.
;  (if (nth 2 font-lock-fontify-level)
;      (font-lock-fontify-level (1+ (car font-lock-fontify-level)))
;    (error "No more decoration")))
;
;;; This should be called by `font-lock-set-defaults'.
;(defun font-lock-set-menu ()
;  ;; Activate less/more fontification entries if there are multiple levels for
;  ;; the current buffer.  Sets `font-lock-fontify-level' to be of the form
;  ;; (CURRENT-LEVEL IS-LOWER-LEVEL-P IS-HIGHER-LEVEL-P) for menu activation.
;  (let ((keywords (or (nth 0 font-lock-defaults)
;                     (nth 1 (assq major-mode font-lock-defaults-alist))))
;       (level (font-lock-value-in-major-mode font-lock-maximum-decoration)))
;    (make-local-variable 'font-lock-fontify-level)
;    (if (or (symbolp keywords) (= (length keywords) 1))
;       (font-lock-unset-menu)
;      (cond ((eq level t)
;            (setq level (1- (length keywords))))
;           ((or (null level) (zerop level))
;            ;; The default level is usually, but not necessarily, level 1.
;            (setq level (- (length keywords)
;                           (length (member (eval (car keywords))
;                                           (mapcar 'eval (cdr keywords))))))))
;      (setq font-lock-fontify-level (list level (> level 1)
;                                         (< level (1- (length keywords))))))))
;
;;; This should be called by `font-lock-unset-defaults'.
;(defun font-lock-unset-menu ()
;  ;; Deactivate less/more fontification entries.
;  (setq font-lock-fontify-level nil))

;;; End of Menu support.

;;; Various regexp information shared by several modes.
;;; Information specific to a single mode should go in its load library.

;; Font Lock support for C, C++, Objective-C and Java modes will one day be in
;; some cc-font.el (and required by cc-mode.el).  However, the below function
;; should stay in font-lock.el, since it is used by other libraries.  sm.

(defun font-lock-match-c-style-declaration-item-and-skip-to-next (limit)
  "Match, and move over, any declaration/definition item after point.
Matches after point, but ignores leading whitespace and `*' characters.
Does not move further than LIMIT.

The expected syntax of a declaration/definition item is `word' (preceded by
optional whitespace and `*' characters and proceeded by optional whitespace)
optionally followed by a `('.  Everything following the item (but belonging to
it) is expected to by skip-able by `scan-sexps', and items are expected to be
separated with a `,' and to be terminated with a `;'.

Thus the regexp matches after point:    word (
                                        ^^^^ ^
Where the match subexpressions are:       1  2

The item is delimited by (match-beginning 1) and (match-end 1).
If (match-beginning 2) is non-nil, the item is followed by a `('.

This function could be MATCHER in a MATCH-ANCHORED `font-lock-keywords' item."
  (when (looking-at "[ \t*]*\\(\\sw+\\)[ \t]*\\((\\)?")
    (save-match-data
      (condition-case nil
          (save-restriction
            ;; Restrict to the end of line, currently guaranteed to be LIMIT.
            (narrow-to-region (point-min) limit)
            (goto-char (match-end 1))
            ;; Move over any item value, etc., to the next item.
            (while (not (looking-at "[ \t]*\\(\\(,\\)\\|;\\|$\\)"))
              (goto-char (or (scan-sexps (point) 1) (point-max))))
            (goto-char (match-end 2)))
        (error t)))))

;; Lisp.

(defconst lisp-font-lock-keywords-1
  (eval-when-compile
    (list
     ;;
     ;; Definitions.
     (list (concat "(\\(def\\("
                   ;; Function declarations.
                   "\\(advice\\|varalias\\|alias\\|generic\\|macro\\*?\\|method\\|"
                   "setf\\|subst\\*?\\|un\\*?\\|"
                   "ine-\\(condition\\|\\(?:derived\\|minor\\)-mode\\|"
                   "method-combination\\|setf-expander\\|skeleton\\|widget\\|"
                   "function\\|\\(compiler\\|modify\\|symbol\\)-macro\\)\\)\\|"
                   ;; Variable declarations.
                   "\\(const\\(ant\\)?\\|custom\\|face\\|parameter\\|var\\)\\|"
                   ;; Structure declarations.
                   "\\(class\\|group\\|package\\|struct\\|type\\)"
                   "\\)\\)\\>"
                   ;; Any whitespace and defined object.
                   "[ \t'\(]*"
                   "\\(setf[ \t]+\\sw+)\\|\\sw+\\)?")
           '(1 font-lock-keyword-face)
           '(9 (cond ((match-beginning 3) font-lock-function-name-face)
                     ((match-beginning 6) font-lock-variable-name-face)
                     (t font-lock-type-face))
               nil t))
     ;;
     ;; Emacs Lisp autoload cookies.
     '("^;;;###\\(autoload\\)" 1 font-lock-warning-face prepend)
     ))
  "Subdued level highlighting for Lisp modes.")

(defconst lisp-font-lock-keywords-2
  (append lisp-font-lock-keywords-1
   (eval-when-compile
     (list
      ;;
      ;; Control structures.  Emacs Lisp forms.
      (cons (concat
             "(" (regexp-opt
                  '("cond" "if" "while" "let" "let*"
                    "prog" "progn" "progv" "prog1" "prog2" "prog*"
                    "inline" "lambda" "save-restriction" "save-excursion"
                    "save-window-excursion" "save-selected-window"
                    "save-match-data" "save-current-buffer" "unwind-protect"
                    "condition-case" "track-mouse"
                    "eval-after-load" "eval-and-compile" "eval-when-compile"
                    "eval-when"
                    "with-current-buffer" "with-electric-help"
                    "with-output-to-string" "with-output-to-temp-buffer"
                    "with-temp-buffer" "with-temp-file" "with-temp-message"
                    "with-timeout") t)
             "\\>")
            1)
      ;;
      ;; Control structures.  Common Lisp forms.
      (cons (concat
             "(" (regexp-opt
                  '("when" "unless" "case" "ecase" "typecase" "etypecase"
                    "ccase" "ctypecase" "handler-case" "handler-bind"
                    "restart-bind" "restart-case" "in-package"
                    "cerror" "break" "ignore-errors"
                    "loop" "do" "do*" "dotimes" "dolist" "the" "locally"
                    "proclaim" "declaim" "declare" "symbol-macrolet"
                    "lexical-let" "lexical-let*" "flet" "labels" "compiler-let"
                    "destructuring-bind" "macrolet" "tagbody" "block"
                    "return" "return-from") t)
             "\\>")
            1)
      ;;
      ;; Exit/Feature symbols as constants.
      (list (concat "(\\(catch\\|throw\\|featurep\\|provide\\|require\\)\\>"
                    "[ \t']*\\(\\sw+\\)?")
            '(1 font-lock-keyword-face)
            '(2 font-lock-constant-face nil t))
      ;;
      ;; Erroneous structures.
      '("(\\(abort\\|assert\\|error\\|signal\\)\\>" 1 font-lock-warning-face)
      ;;
      ;; Words inside \\[] tend to be for `substitute-command-keys'.
      '("\\\\\\\\\\[\\(\\sw+\\)]" 1 font-lock-constant-face prepend)
      ;;
      ;; Words inside `' tend to be symbol names.
      '("`\\(\\sw\\sw+\\)'" 1 font-lock-constant-face prepend)
      ;;
      ;; Constant values.
      '("\\<:\\sw\\sw+\\>" 0 font-lock-builtin-face)
      ;;
      ;; ELisp and CLisp `&' keywords as types.
      '("\\&\\sw+\\>" . font-lock-type-face)
      ;;
      ;; CL `with-' and `do-' constructs
      '("(\\(\\(do-\\|with-\\)\\(\\s_\\|\\w\\)*\\)" 1 font-lock-keyword-face)
      )))
  "Gaudy level highlighting for Lisp modes.")

(defvar lisp-font-lock-keywords lisp-font-lock-keywords-1
  "Default expressions to highlight in Lisp modes.")

;;; User choices.

;; These provide a means to fontify types not defined by the language.  Those
;; types might be the user's own or they might be generally accepted and used.
;; Generally accepted types are used to provide default variable values.

(define-widget 'font-lock-extra-types-widget 'radio
  "Widget `:type' for members of the custom group `font-lock-extra-types'.
Members should `:load' the package `font-lock' to use this widget."
  :args '((const :tag "none" nil)
          (repeat :tag "types" regexp)))

(defcustom c-font-lock-extra-types '("FILE" "\\sw+_t" "Lisp_Object")
  "*List of extra types to fontify in C mode.
Each list item should be a regexp not containing word-delimiters.
For example, a value of (\"FILE\" \"\\\\sw+_t\") means the word FILE and words
ending in _t are treated as type names.

The value of this variable is used when Font Lock mode is turned on."
  :type 'font-lock-extra-types-widget
  :group 'font-lock-extra-types)

(defcustom c++-font-lock-extra-types
  '("\\sw+_t"
    "\\([iof]\\|str\\)+stream\\(buf\\)?" "ios"
    "string" "rope"
    "list" "slist"
    "deque" "vector" "bit_vector"
    "set" "multiset"
    "map" "multimap"
    "hash\\(_\\(m\\(ap\\|ulti\\(map\\|set\\)\\)\\|set\\)\\)?"
    "stack" "queue" "priority_queue"
    "type_info"
    "iterator" "const_iterator" "reverse_iterator" "const_reverse_iterator"
    "reference" "const_reference")
  "*List of extra types to fontify in C++ mode.
Each list item should be a regexp not containing word-delimiters.
For example, a value of (\"string\") means the word string is treated as a type
name.

The value of this variable is used when Font Lock mode is turned on."
  :type 'font-lock-extra-types-widget
  :group 'font-lock-extra-types)

(defcustom objc-font-lock-extra-types '("Class" "BOOL" "IMP" "SEL")
  "*List of extra types to fontify in Objective-C mode.
Each list item should be a regexp not containing word-delimiters.
For example, a value of (\"Class\" \"BOOL\" \"IMP\" \"SEL\") means the words
Class, BOOL, IMP and SEL are treated as type names.

The value of this variable is used when Font Lock mode is turned on."
  :type 'font-lock-extra-types-widget
  :group 'font-lock-extra-types)

(defcustom java-font-lock-extra-types
  '("[A-Z\300-\326\330-\337]\\sw*[a-z]\\sw*")
  "*List of extra types to fontify in Java mode.
Each list item should be a regexp not containing word-delimiters.
For example, a value of (\"[A-Z\300-\326\330-\337]\\\\sw*[a-z]\\\\sw*\") means capitalised
words (and words conforming to the Java id spec) are treated as type names.

The value of this variable is used when Font Lock mode is turned on."
  :type 'font-lock-extra-types-widget
  :group 'font-lock-extra-types)

;;; C.

;; [Murmur murmur murmur] Maestro, drum-roll please...  [Murmur murmur murmur.]
;; Ahem.  [Murmur murmur murmur] Lay-dees an Gennel-men.  [Murmur murmur shhh!]
;; I am most proud and humbly honoured today [murmur murmur cough] to present
;; to you good people, the winner of the Second Millennium Award for The Most
;; Hairy Language Syntax.  [Ahhh!]  All rise please.  [Shuffle shuffle
;; shuffle.]  And a round of applause please.  For...  The C Language!  [Roar.]
;;
;; Thank you...  You are too kind...  It is with a feeling of great privilege
;; and indeed emotion [sob] that I accept this award.  It has been a long hard
;; road.  But we know our destiny.  And our future.  For we must not rest.
;; There are more tokens to overload, more shoehorn, more methodologies.  But
;; more is a plus!  [Ha ha ha.]  And more means plus!  [Ho ho ho.]  The future
;; is C++!  [Ohhh!]  The Third Millennium Award...  Will be ours!  [Roar.]

(defconst c-font-lock-keywords-1 nil
  "Subdued level highlighting for C mode.")

(defconst c-font-lock-keywords-2 nil
  "Medium level highlighting for C mode.
See also `c-font-lock-extra-types'.")

(defconst c-font-lock-keywords-3 nil
  "Gaudy level highlighting for C mode.
See also `c-font-lock-extra-types'.")

(let* ((c-keywords
        (eval-when-compile
          (regexp-opt '("break" "continue" "do" "else" "for" "if" "return"
                        "switch" "while" "sizeof"
                        ;; Type related, but we don't do anything special.
                        "typedef" "extern" "auto" "register" "static"
                        "volatile" "const"
                        ;; Dan Nicolaescu <done@gnu.org> says this is new.
                        "restrict"))))
       (c-type-specs
        (eval-when-compile
          (regexp-opt '("enum" "struct" "union"))))
       (c-type-specs-depth
        (regexp-opt-depth c-type-specs))
       (c-type-names
        `(mapconcat 'identity
          (cons
           ,(eval-when-compile
              (regexp-opt
               '("char" "short" "int" "long" "signed" "unsigned"
                 "float" "double" "void" "complex")))
           c-font-lock-extra-types)
          "\\|"))
       (c-type-names-depth
        `(regexp-opt-depth ,c-type-names))
       (c-preprocessor-directives
        (eval-when-compile
          (regexp-opt
           '("define"  "elif" "else" "endif" "error" "file" "if" "ifdef"
             "ifndef" "include" "line" "pragma" "undef"))))
       (c-preprocessor-directives-depth
        (regexp-opt-depth c-preprocessor-directives)))
 (setq c-font-lock-keywords-1
  (list
   ;;
   ;; These are all anchored at the beginning of line for speed.
   ;; Note that `c++-font-lock-keywords-1' depends on `c-font-lock-keywords-1'.
   ;;
   ;; Fontify function name definitions (GNU style; without type on line).
   '("^\\(\\sw+\\)[ \t]*(" 1 font-lock-function-name-face)
   ;;
   ;; Fontify error directives.
   '("^#[ \t]*error[ \t]+\\(.+\\)" 1 font-lock-warning-face prepend)
   ;;
   ;; Fontify filenames in #include <...> preprocessor directives as strings.
   '("^#[ \t]*\\(import\\|include\\)[ \t]*\\(<[^>\"\n]*>?\\)"
     2 font-lock-string-face)
   ;;
   ;; Fontify function macro names.
   '("^#[ \t]*define[ \t]+\\(\\sw+\\)(" 1 font-lock-function-name-face)
   ;;
   ;; Fontify symbol names in #elif or #if ... defined preprocessor directives.
   '("^#[ \t]*\\(elif\\|if\\)\\>"
     ("\\<\\(defined\\)\\>[ \t]*(?\\(\\sw+\\)?" nil nil
      (1 font-lock-builtin-face) (2 font-lock-variable-name-face nil t)))
   ;;
   ;; Fontify otherwise as symbol names, and the preprocessor directive names.
   (list
    (concat "^#[ \t]*\\(" c-preprocessor-directives
            "\\)\\>[ \t!]*\\(\\sw+\\)?")
    '(1 font-lock-builtin-face)
    (list (+ 2 c-preprocessor-directives-depth)
          'font-lock-variable-name-face nil t))))

 (setq c-font-lock-keywords-2
  (append c-font-lock-keywords-1
   (list
    ;;
    ;; Simple regexps for speed.
    ;;
    ;; Fontify all type names.
    `(eval .
      (cons (concat "\\<\\(" ,c-type-names "\\)\\>") 'font-lock-type-face))
    ;;
    ;; Fontify all builtin keywords (except case, default and goto; see below).
    (concat "\\<\\(" c-keywords "\\|" c-type-specs "\\)\\>")
    ;;
    ;; Fontify case/goto keywords and targets, and case default/goto tags.
    '("\\<\\(case\\|goto\\)\\>"
      (1 font-lock-keyword-face)
      ("\\(-[0-9]+\\|\\sw+\\)"
       ;; Return limit of search.
       (save-excursion (skip-chars-forward "^:\n") (point))
       nil
       (1 font-lock-constant-face nil t)))
    ;; Anders Lindgren <andersl@andersl.com> points out that it is quicker to
    ;; use MATCH-ANCHORED to effectively anchor the regexp on the left.
    ;; This must come after the one for keywords and targets.
    '(":" ("^[ \t]*\\(\\sw+\\)[ \t]*:[ \t]*$"
           (beginning-of-line) (end-of-line)
           (1 font-lock-constant-face)))
    )))

 (setq c-font-lock-keywords-3
  (append c-font-lock-keywords-2
   ;;
   ;; More complicated regexps for more complete highlighting for types.
   ;; We still have to fontify type specifiers individually, as C is so hairy.
   (list
    ;;
    ;; Fontify all storage types, plus their items.
    `(eval .
      (list (concat "\\<\\(" ,c-type-names "\\)\\>"
                    "\\([ \t*&]+\\sw+\\>\\)*")
            ;; Fontify each declaration item.
            (list 'font-lock-match-c-style-declaration-item-and-skip-to-next
                  ;; Start with point after all type specifiers.
                  (list 'goto-char (list 'or
                                         (list 'match-beginning
                                               (+ ,c-type-names-depth 2))
                                         '(match-end 1)))
                  ;; Finish with point after first type specifier.
                  '(goto-char (match-end 1))
                  ;; Fontify as a variable or function name.
                  '(1 (if (match-beginning 2)
                          font-lock-function-name-face
                        font-lock-variable-name-face)))))
    ;;
    ;; Fontify all storage specs and types, plus their items.
    `(eval .
      (list (concat "\\<\\(" ,c-type-specs "\\)\\>"
                    "[ \t]*\\(\\sw+\\)?")
          (list 1 'font-lock-keyword-face)
          (list ,(+ c-type-specs-depth 2) 'font-lock-type-face nil t)
          (list 'font-lock-match-c-style-declaration-item-and-skip-to-next
                  nil 
                  ;; Finish with point after the variable name if
                  ;; there is one.
                  `(if (match-end 2) 
                       (goto-char (match-end 2)))
                  ;; Fontify as a variable or function name.
                  '(1 (if (match-beginning 2)
                          font-lock-function-name-face
                        font-lock-variable-name-face) nil t))))
    ;;
    ;; Fontify structures, or typedef names, plus their items.
    '("\\(}\\)[ \t*]*\\sw"
      (font-lock-match-c-style-declaration-item-and-skip-to-next
       (goto-char (match-end 1)) nil
       (1 font-lock-type-face)))
    ;;
    ;; Fontify anything at beginning of line as a declaration or definition.
    '("^\\(\\sw+\\)\\>\\([ \t*]+\\sw+\\>\\)*"
      (1 font-lock-type-face)
      (font-lock-match-c-style-declaration-item-and-skip-to-next
       (goto-char (or (match-beginning 2) (match-end 1))) nil
       (1 (if (match-beginning 2)
              font-lock-function-name-face
            font-lock-variable-name-face))))
    )))
 )

(defvar c-font-lock-keywords c-font-lock-keywords-1
  "Default expressions to highlight in C mode.
See also `c-font-lock-extra-types'.")

;;; C++.

(defconst c++-font-lock-keywords-1 nil
  "Subdued level highlighting for C++ mode.")

(defconst c++-font-lock-keywords-2 nil
  "Medium level highlighting for C++ mode.
See also `c++-font-lock-extra-types'.")

(defconst c++-font-lock-keywords-3 nil
  "Gaudy level highlighting for C++ mode.
See also `c++-font-lock-extra-types'.")

(defun font-lock-match-c++-style-declaration-item-and-skip-to-next (limit)
  ;; Regexp matches after point:                word<word>::word (
  ;;                                            ^^^^ ^^^^   ^^^^ ^
  ;; Where the match subexpressions are:          1    3      5  6
  ;;
  ;; Item is delimited by (match-beginning 1) and (match-end 1).
  ;; If (match-beginning 3) is non-nil, that part of the item incloses a `<>'.
  ;; If (match-beginning 5) is non-nil, that part of the item follows a `::'.
  ;; If (match-beginning 6) is non-nil, the item is followed by a `('.
  (when (looking-at (eval-when-compile
                      (concat
                       ;; Skip any leading whitespace.
                       "[ \t*&]*"
                       ;; This is `c++-type-spec' from below.  (Hint hint!)
                       "\\(\\sw+\\)"                            ; The instance?
                       "\\([ \t]*<\\([^>\n]+\\)[ \t*&]*>\\)?"   ; Or template?
                       "\\([ \t]*::[ \t*~]*\\(\\sw+\\)\\)*"     ; Or member?
                       ;; Match any trailing parenthesis.
                       "[ \t]*\\((\\)?")))
    (save-match-data
      (condition-case nil
          (save-restriction
            ;; Restrict to the end of line, currently guaranteed to be LIMIT.
            (narrow-to-region (point-min) limit)
            (goto-char (match-end 1))
            ;; Move over any item value, etc., to the next item.
            (while (not (looking-at "[ \t]*\\(\\(,\\)\\|;\\|$\\)"))
              (goto-char (or (scan-sexps (point) 1) (point-max))))
            (goto-char (match-end 2)))
        (error t)))))

(defun font-lock-match-c++-structor-declaration (limit)
  ;; Match C++ constructors and destructors inside class declarations.
  (let ((res nil)
        (regexp (concat "^\\s-+\\(\\(virtual\\|explicit\\)\\s-+\\)*~?\\(\\<"
                        (mapconcat 'identity
                                   c++-font-lock-extra-types "\\|")
                        "\\>\\)\\s-*("
                        ;; Don't match function pointer declarations, e.g.:
                        ;;    Foo (*fptr)();
                        "\\s-*[^*( \t]")))
    (while (progn (setq res (re-search-forward regexp limit t))
                  (and res
                       (save-excursion
                         (beginning-of-line)
                         (save-match-data
                           (not (vectorp (c-at-toplevel-p))))))))
    res))

(let* ((c++-keywords
        (eval-when-compile
          (regexp-opt
           '("break" "continue" "do" "else" "for" "if" "return" "switch"
             "while" "asm" "catch" "delete" "new" "sizeof" "this" "throw" "try"
             "typeid"
             ;; Branko Cibej <branko.cibej@hermes.si> says this is new.
             "export"
             ;; Mark Mitchell <mmitchell@usa.net> says these are new.
             "mutable" "explicit"
             ;; Alain Picard <ap@abelard.apana.org.au> suggests treating these
             ;; as keywords not types.
             "typedef" "template"
             "extern" "auto" "register" "const" "volatile" "static"
             "inline" "friend" "virtual"
             ;; Standard C++ operator names.
             "and" "and_eq" "bitand" "bitor" "compl" "not" "not_eq"
             "or" "or_eq" "xor" "xor_eq"))))
       (c++-operators
        (eval-when-compile
          (regexp-opt
           ;; Taken from Stroustrup, minus keywords otherwise fontified.
           '("+" "-" "*" "/" "%" "^" "&" "|" "~" "!" "=" "<" ">" "+=" "-="
             "*=" "/=" "%=" "^=" "&=" "|=" "<<" ">>" ">>=" "<<=" "==" "!="
             "<=" ">=" "&&" "||" "++" "--" "->*" "," "->" "[]" "()"))))
       (c++-type-specs
        (eval-when-compile
          (regexp-opt
           '("class" "public" "private" "protected" "typename"
             "struct" "union" "enum" "namespace" "using"
             ;; Eric Hopper <hopper@omnifarious.mn.org> says these are new.
             "static_cast" "dynamic_cast" "const_cast" "reinterpret_cast") t)))
       (c++-type-specs-depth
        (regexp-opt-depth c++-type-specs))
       (c++-type-names
        `(mapconcat 'identity
          (cons
           ,(eval-when-compile
              (regexp-opt
               '("signed" "unsigned" "short" "long"
                 "int" "char" "float" "double" "void"
                 "bool" "complex")))
           c++-font-lock-extra-types)
          "\\|"))
       (c++-type-names-depth `(regexp-opt-depth ,c++-type-names))
       ;;
       ;; A brave attempt to match templates following a type and/or match
       ;; class membership.  See and sync the above function
       ;; `font-lock-match-c++-style-declaration-item-and-skip-to-next'.
       (c++-type-suffix (concat "\\([ \t]*<\\([^>\n]+\\)[ \t*&]*>\\)?"
                                "\\([ \t]*::[ \t*~]*\\(\\sw+\\)\\)*"))
       (c++-type-suffix-depth (regexp-opt-depth c++-type-suffix))
       ;; If the string is a type, it may be followed by the cruft above.
       (c++-type-spec (concat "\\(\\sw+\\)\\>" c++-type-suffix))
       (c++-type-spec-depth (regexp-opt-depth c++-type-spec))
       ;;
       ;; Parenthesis depth of user-defined types not forgetting their cruft.
       (c++-type-depth `(regexp-opt-depth
                         (concat ,c++-type-names ,c++-type-suffix)))
       )
 (setq c++-font-lock-keywords-1
  (append
   ;;
   ;; The list `c-font-lock-keywords-1' less that for function names.
   (cdr c-font-lock-keywords-1)
   (list
    ;;
    ;; Fontify function name definitions, possibly incorporating class names.
    (list (concat "^" c++-type-spec "[ \t]*(")
          '(1 (if (or (match-beginning 2) (match-beginning 4))
                  font-lock-type-face
                font-lock-function-name-face))
          '(3 font-lock-type-face nil t)
          '(5 font-lock-function-name-face nil t))
    )))

 (setq c++-font-lock-keywords-2
  (append c++-font-lock-keywords-1
   (list
    ;;
    ;; The list `c-font-lock-keywords-2' for C++ plus operator overloading.
    `(eval .
      (cons (concat "\\<\\(" ,c++-type-names "\\)\\>")
            'font-lock-type-face))
    ;;
    ;; Fontify operator overloading.
    (list (concat "\\<\\(operator\\)\\>[ \t]*\\(" c++-operators "\\)?")
          '(1 font-lock-keyword-face)
          '(2 font-lock-builtin-face nil t))
    ;;
    ;; Fontify case/goto keywords and targets, and case default/goto tags.
    '("\\<\\(case\\|goto\\)\\>"
      (1 font-lock-keyword-face)
      ("\\(-[0-9]+\\|\\sw+\\)[ \t]*\\(::\\)?"
       ;; Return limit of search.
       (save-excursion
         (while (progn
                  (skip-chars-forward "^:\n")
                  (looking-at "::"))
           (forward-char 2))
         (point))
       nil
       (1 (if (match-beginning 2)
              font-lock-type-face
            font-lock-constant-face) nil t)))
    ;; This must come after the one for keywords and targets.
    '(":" ("^[ \t]*\\(\\sw+\\)[ \t]*:\\($\\|[^:]\\)"
           (beginning-of-line) (end-of-line)
           (1 font-lock-constant-face)))
    ;;
    ;; Fontify other builtin keywords.
    (concat "\\<\\(" c++-keywords "\\|" c++-type-specs "\\)\\>")
    ;;
    ;; Eric Hopper <hopper@omnifarious.mn.org> says `true' and `false' are new.
    '("\\<\\(false\\|true\\)\\>" . font-lock-constant-face)
    )))

 (setq c++-font-lock-keywords-3
  (append c++-font-lock-keywords-2
   ;;
   ;; More complicated regexps for more complete highlighting for types.
   (list
    ;;
    ;; Fontify all storage classes and type specifiers, plus their items.
    `(eval .
      (list (concat "\\<\\(" ,c++-type-names "\\)\\>" ,c++-type-suffix
                    "\\([ \t*&]+" ,c++-type-spec "\\)*")
            ;; The name of any template type.
            (list (+ ,c++-type-names-depth 3) 'font-lock-type-face nil t)
            ;; Fontify each declaration item.
            (list 'font-lock-match-c++-style-declaration-item-and-skip-to-next
                  ;; Start with point after all type specifiers.
                  (list 'goto-char (list 'or (list 'match-beginning
                                                   (+ ,c++-type-depth 2))
                                         '(match-end 1)))
                  ;; Finish with point after first type specifier.
                  '(goto-char (match-end 1))
                  ;; Fontify as a variable or function name.
                  '(1 (cond ((or (match-beginning 2) (match-beginning 4))
                             font-lock-type-face)
                            ((and (match-beginning 6) (c-at-toplevel-p))
                             font-lock-function-name-face)
                            (t
                             font-lock-variable-name-face)))
                  '(3 font-lock-type-face nil t)
                  '(5 (if (match-beginning 6)
                          font-lock-function-name-face
                        font-lock-variable-name-face) nil t))))
    ;;
    ;; Fontify all storage specs and types, plus their items.
    `(eval .
      (list (concat "\\<" ,c++-type-specs "\\>" ,c++-type-suffix
                    "[ \t]*\\(" ,c++-type-spec "\\)?")
            ;; The name of any template type.
            (list ,(+ c++-type-specs-depth 2) 'font-lock-type-face nil t)
            ;; The name of any type.
            (list (+ ,c++-type-specs-depth ,c++-type-suffix-depth 2)
                  'font-lock-type-face nil t)
            ;; Fontify each declaration item.
            (list 'font-lock-match-c++-style-declaration-item-and-skip-to-next
                  ;; Start with point after all type specifiers.
                  nil
                  ;; Finish with point after first type specifier.
                  nil
                  ;; Fontify as a variable or function name.
                  '(1 (cond ((or (match-beginning 2) (match-beginning 4))
                             font-lock-type-face)
                            ((and (match-beginning 6) (c-at-toplevel-p))
                             font-lock-function-name-face)
                            (t
                             font-lock-variable-name-face)))
                  '(3 font-lock-type-face nil t)
                  '(5 (if (match-beginning 6)
                          font-lock-function-name-face
                        font-lock-variable-name-face) nil t))
            ))
    ;;
    ;; Fontify structures, or typedef names, plus their items.
    '("\\(}\\)[ \t*]*\\sw"
      (font-lock-match-c++-style-declaration-item-and-skip-to-next
       (goto-char (match-end 1)) nil
       (1 font-lock-type-face)))
    ;;
    ;; Fontify anything at beginning of line as a declaration or definition.
    (list (concat "^\\(" c++-type-spec "[ \t*&]*\\)+")
          '(font-lock-match-c++-style-declaration-item-and-skip-to-next
            (goto-char (match-beginning 1))
            (goto-char (match-end 1))
            (1 (cond ((or (match-beginning 2) (match-beginning 4))
                      font-lock-type-face)
                     ((match-beginning 6) font-lock-function-name-face)
                     (t font-lock-variable-name-face)))
            (3 font-lock-type-face nil t)
            (5 (if (match-beginning 6)
                   font-lock-function-name-face
                 font-lock-variable-name-face) nil t)))
    ;;
    ;; Fontify constructors and destructors inside class declarations.
    '(font-lock-match-c++-structor-declaration
      (3 font-lock-function-name-face t))
    )))
 )

(defvar c++-font-lock-keywords c++-font-lock-keywords-1
  "Default expressions to highlight in C++ mode.
See also `c++-font-lock-extra-types'.")

;;; Objective-C.

(defconst objc-font-lock-keywords-1 nil
  "Subdued level highlighting for Objective-C mode.")

(defconst objc-font-lock-keywords-2 nil
  "Medium level highlighting for Objective-C mode.
See also `objc-font-lock-extra-types'.")

(defconst objc-font-lock-keywords-3 nil
  "Gaudy level highlighting for Objective-C mode.
See also `objc-font-lock-extra-types'.")

;; Regexps written with help from Stephen Peters <speters@us.oracle.com> and
;; Jacques Duthen Prestataire <duthen@cegelec-red.fr>.
(let* ((objc-keywords
        (eval-when-compile
          (regexp-opt '("break" "continue" "do" "else" "for" "if" "return"
                        "switch" "while" "sizeof" "self" "super"
                        "typedef" "auto" "extern" "static"
                        "volatile" "const"))))
       (objc-type-specs
        (eval-when-compile
          (regexp-opt
           '("register" "struct" "union" "enum"
             "oneway" "in" "out" "inout" "bycopy" "byref") t)))
       (objc-type-specs-depth
        (regexp-opt-depth objc-type-specs))
       (objc-type-names
        `(mapconcat 'identity
          (cons
           ,(eval-when-compile
              (regexp-opt
               '("signed" "unsigned" "short" "long"
                 "int" "char" "float" "double" "void"
                 "id")))
           objc-font-lock-extra-types)
          "\\|"))
       (objc-type-names-depth
        `(regexp-opt-depth ,objc-type-names))
       )
 (setq objc-font-lock-keywords-1
  (append
   ;;
   ;; The list `c-font-lock-keywords-1' less that for function names.
   (cdr c-font-lock-keywords-1)
   (list
    ;;
    ;; Fontify compiler directives.
    '("@\\(\\sw+\\)\\>"
      (1 font-lock-keyword-face)
      ("\\=[ \t:<,]*\\(\\sw+\\)" nil nil
       (1 font-lock-type-face)))
    ;;
    ;; Fontify method names and arguments.  Oh Lordy!
    ;; First, on the same line as the function declaration.
    '("^[+-][ \t]*\\(PRIVATE\\>\\)?[ \t]*\\(([^)\n]+)\\)?[ \t]*\\(\\sw+\\)"
      (1 font-lock-keyword-face nil t)
      (3 font-lock-function-name-face)
      ("\\=[ \t]*\\(\\sw+\\)?:[ \t]*\\(([^)\n]+)\\)?[ \t]*\\(\\sw+\\)"
       nil nil
       (1 font-lock-function-name-face nil t)
       (3 font-lock-variable-name-face)))
    ;; Second, on lines following the function declaration.
    '(":" ("^[ \t]*\\(\\sw+\\)?:[ \t]*\\(([^)\n]+)\\)?[ \t]*\\(\\sw+\\)"
           (beginning-of-line) (end-of-line)
           (1 font-lock-function-name-face nil t)
           (3 font-lock-variable-name-face)))
    )))

 (setq objc-font-lock-keywords-2
  (append objc-font-lock-keywords-1
   (list
    ;;
    ;; Simple regexps for speed.
    ;;
    ;; Fontify all type specifiers.
    `(eval .
      (cons (concat "\\<\\(" ,objc-type-names "\\)\\>")
            'font-lock-type-face))
    ;;
    ;; Fontify all builtin keywords (except case, default and goto; see below).
    (concat "\\<\\(" objc-keywords "\\|" objc-type-specs "\\)\\>")
    ;;
    ;; Fontify case/goto keywords and targets, and case default/goto tags.
    '("\\<\\(case\\|goto\\)\\>[ \t]*\\(-?\\sw+\\)?"
      (1 font-lock-keyword-face) (2 font-lock-constant-face nil t))
    ;; Fontify tags iff sole statement on line, otherwise we detect selectors.
    ;; This must come after the one for keywords and targets.
    '(":" ("^[ \t]*\\(\\sw+\\)[ \t]*:[ \t]*$"
           (beginning-of-line) (end-of-line)
           (1 font-lock-constant-face)))
    ;;
    ;; Fontify null object pointers.
    '("\\<[Nn]il\\>" . font-lock-constant-face)
    )))

 (setq objc-font-lock-keywords-3
  (append objc-font-lock-keywords-2
   ;;
   ;; More complicated regexps for more complete highlighting for types.
   ;; We still have to fontify type specifiers individually, as C is so hairy.
   (list
    ;;
    ;; Fontify all storage classes and type specifiers, plus their items.
    `(eval .
      (list (concat "\\<\\(" ,objc-type-names "\\)\\>"
                    "\\([ \t*&]+\\sw+\\>\\)*")
            ;; Fontify each declaration item.
            (list 'font-lock-match-c-style-declaration-item-and-skip-to-next
                  ;; Start with point after all type specifiers.
                  (list 'goto-char
                        (list 'or (list 'match-beginning
                                        (+ ,objc-type-names-depth 2))
                              '(match-end 1)))
                  ;; Finish with point after first type specifier.
                  '(goto-char (match-end 1))
                  ;; Fontify as a variable or function name.
                  '(1 (if (match-beginning 2)
                          font-lock-function-name-face
                        font-lock-variable-name-face)))))
    ;;
    ;; Fontify all storage specs and types, plus their items.
    `(eval .
      (list (concat "\\<\\(" ,objc-type-specs "[ \t]*\\)+\\>"
                    "[ \t]*\\(\\sw+\\)?")
            ;; The name of any type.
            (list ,(+ objc-type-specs-depth 2) 'font-lock-type-face nil t)
            ;; Fontify each declaration item.
            (list 'font-lock-match-c++-style-declaration-item-and-skip-to-next
                  nil nil
                  ;; Fontify as a variable or function name.
                  '(1 (if (match-beginning 2)
                          font-lock-function-name-face
                        font-lock-variable-name-face)))
            ))
    ;;
    ;; Fontify structures, or typedef names, plus their items.
    '("\\(}\\)[ \t*]*\\sw"
      (font-lock-match-c-style-declaration-item-and-skip-to-next
       (goto-char (match-end 1)) nil
       (1 font-lock-type-face)))
    ;;
    ;; Fontify anything at beginning of line as a declaration or definition.
    '("^\\(\\sw+\\)\\>\\([ \t*]+\\sw+\\>\\)*"
      (1 font-lock-type-face)
      (font-lock-match-c-style-declaration-item-and-skip-to-next
       (goto-char (or (match-beginning 2) (match-end 1))) nil
       (1 (if (match-beginning 2)
              font-lock-function-name-face
            font-lock-variable-name-face))))
    )))
 )

(defvar objc-font-lock-keywords objc-font-lock-keywords-1
  "Default expressions to highlight in Objective-C mode.
See also `objc-font-lock-extra-types'.")

;;; Java.

(defconst java-font-lock-keywords-1 nil
  "Subdued level highlighting for Java mode.")

(defconst java-font-lock-keywords-2 nil
  "Medium level highlighting for Java mode.
See also `java-font-lock-extra-types'.")

(defconst java-font-lock-keywords-3 nil
  "Gaudy level highlighting for Java mode.
See also `java-font-lock-extra-types'.")

;; Regexps written with help from Fred White <fwhite@bbn.com>,
;; Anders Lindgren <andersl@andersl.com> and Carl Manning <caroma@ai.mit.edu>.
(let* ((java-keywords
        (eval-when-compile
          (regexp-opt
           '("catch" "do" "else" "super" "this" "finally" "for" "if"
             ;; Anders Lindgren <andersl@andersl.com> says these have gone.
             ;; "cast" "byvalue" "future" "generic" "operator" "var"
             ;; "inner" "outer" "rest"
             "implements" "extends" "throws" "instanceof" "new"
             "interface" "return" "switch" "throw" "try" "while"))))
       ;;
       ;; Classes immediately followed by an object name.
       (java-type-names
        `(mapconcat 'identity
          (cons
           ,(eval-when-compile
              (regexp-opt '("boolean" "char" "byte" "short" "int" "long"
                            "float" "double" "void")))
           java-font-lock-extra-types)
          "\\|"))
       (java-type-names-depth `(regexp-opt-depth ,java-type-names))
       ;;
       ;; These are eventually followed by an object name.
       (java-type-specs
        (eval-when-compile
          (regexp-opt
           '("abstract" "const" "final" "synchronized" "transient" "static"
             ;; Anders Lindgren <andersl@andersl.com> says this has gone.
             ;; "threadsafe"
             "volatile" "public" "private" "protected" "native"
             ;; Carl Manning <caroma@ai.mit.edu> says this is new.
             "strictfp"))))
       )
 (setq java-font-lock-keywords-1
  (list
   ;;
   ;; Fontify class names.
   '("\\<\\(class\\)\\>[ \t]*\\(\\sw+\\)?"
     (1 font-lock-keyword-face) (2 font-lock-type-face nil t))
   ;;
   ;; Fontify package names in import directives.
   '("\\<\\(import\\|package\\)\\>[ \t]*\\(\\sw+\\)?"
     (1 font-lock-keyword-face)
     (2 font-lock-constant-face nil t)
     ("\\=\\.\\(\\*\\|\\sw+\\)" nil nil
      (1 font-lock-constant-face nil t)))
   ))

 (setq java-font-lock-keywords-2
  (append java-font-lock-keywords-1
   (list
    ;;
    ;; Fontify class names.
    `(eval .
      (cons (concat "\\<\\(" ,java-type-names "\\)\\>[^.]")
            '(1 font-lock-type-face)))
    ;;
    ;; Fontify all builtin keywords (except below).
    (concat "\\<\\(" java-keywords "\\|" java-type-specs "\\)\\>")
    ;;
    ;; Fontify keywords and targets, and case default/goto tags.
    (list "\\<\\(break\\|case\\|continue\\|goto\\)\\>[ \t]*\\(-?\\sw+\\)?"
          '(1 font-lock-keyword-face) '(2 font-lock-constant-face nil t))
    ;; This must come after the one for keywords and targets.
    '(":" ("^[ \t]*\\(\\sw+\\)[ \t]*:[ \t]*$"
           (beginning-of-line) (end-of-line)
           (1 font-lock-constant-face)))
    ;;
    ;; Fontify all constants.
    '("\\<\\(false\\|null\\|true\\)\\>" . font-lock-constant-face)
    ;;
    ;; Javadoc tags within comments.
    (list
     (concat "@\\("
             "author\\|deprecated\\|exception"
             "\\|link\\|return\\|see\\|serial\\|serialData\\|serialField"
             "\\|since\\|throws"
             "\\|version"
             "\\)\\>")
     '(1 font-lock-constant-face prepend))
    '("@\\(param\\)\\>[ \t]*\\(\\sw+\\)?"
      (1 font-lock-constant-face prepend)
      (2 font-lock-variable-name-face prepend t))
    '("@\\(exception\\|throws\\)\\>[ \t]*\\(\\S-+\\)?"
      (1 font-lock-constant-face prepend)
      (2 font-lock-type-face prepend t))
    )))

 (setq java-font-lock-keywords-3
  (append java-font-lock-keywords-2
   ;;
   ;; More complicated regexps for more complete highlighting for types.
   ;; We still have to fontify type specifiers individually, as Java is hairy.
   (list
    ;;
    ;; Fontify random types immediately followed by an item or items.
    `(eval .
      (list (concat "\\<\\(" ,java-type-names "\\)\\>"
                    "\\([ \t]*\\[[ \t]*\\]\\)*"
                    "\\([ \t]*\\sw\\)")
            ;; Fontify each declaration item.
            (list 'font-lock-match-c-style-declaration-item-and-skip-to-next
                  ;; Start and finish with point after the type specifier.
                  (list 'goto-char (list 'match-beginning
                                         (+ ,java-type-names-depth 3)))
                  (list 'goto-char (list 'match-beginning
                                         (+ ,java-type-names-depth 3)))
                  ;; Fontify as a variable or function name.
                  '(1 (if (match-beginning 2)
                          font-lock-function-name-face
                        font-lock-variable-name-face)))))
    ;;
    ;; Fontify those that are eventually followed by an item or items.
    (list (concat "\\<\\(" java-type-specs "\\)\\>"
                  "\\([ \t]+\\sw+\\>"
                  "\\([ \t]*\\[[ \t]*\\]\\)*"
                  "\\)*")
          ;; Fontify each declaration item.
          '(font-lock-match-c-style-declaration-item-and-skip-to-next
            ;; Start with point after all type specifiers.
            (goto-char (or (match-beginning 5) (match-end 1)))
            ;; Finish with point after first type specifier.
            (goto-char (match-end 1))
            ;; Fontify as a variable or function name.
            (1 (if (match-beginning 2)
                   font-lock-function-name-face
                 font-lock-variable-name-face))))
    )))
 )

(defvar java-font-lock-keywords java-font-lock-keywords-1
  "Default expressions to highlight in Java mode.
See also `java-font-lock-extra-types'.")

;; Provide ourselves:

(provide 'font-lock)

(when (eq font-lock-support-mode 'jit-lock-mode)
  (require 'jit-lock))

;;; font-lock.el ends here

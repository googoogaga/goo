;;; proto.el --- Proto editing mode.
;;;  Adapted from scheme.el.

;; Author: Greg Sullivan <gregs@ai.mit.edu>
;;	$Id$	
;; Keywords: languages, lisp

;;; Commentary:

;;; Code:

(require 'lisp-mode)

(defvar proto-mode-syntax-table nil "")
(if (not proto-mode-syntax-table)
    (let ((i     0)
	  (table (copy-syntax-table lisp-mode-syntax-table)))
      ;; let's just use Lisp's syntax for now...
      (setq proto-mode-syntax-table table)
      (modify-syntax-entry ?| "_   " table)
      (modify-syntax-entry ?- "w   " proto-mode-syntax-table)))

(defvar proto-mode-abbrev-table nil "")
(define-abbrev-table 'proto-mode-abbrev-table ())

(defvar proto-imenu-generic-expression
  '((nil
     "^\\s-*(def\\s-+\\(\\sw+\\)" 1)
    ("Variables"
     "^\\s-*(dv\\s-+\\(\\sw+\\)" 1)
    ("Functions"
     "^\\s-*(df\\s-+\\(\\sw+\\)" 1)
    ("Methods"
     "^\\s-*(dm\\s-+\\(\\sw+\\)" 1)
    ("Generics"
     "^\\s-*(dg\\s-+\\(\\sw+\\)" 1)
    ("Syntax"
     "^\\s-*(ds\\s-+\\(\\sw+\\)" 1))
  "Imenu generic expression for Proto mode.  See `imenu-generic-expression'.")

(defun proto-mode-variables ()
  (lisp-mode-variables nil)		; use lisp to start with
  (set-syntax-table proto-mode-syntax-table)
  (make-local-variable 'imenu-generic-expression)
  (setq imenu-generic-expression proto-imenu-generic-expression)
  (make-local-variable 'imenu-syntax-alist)
  (setq imenu-syntax-alist '(("+-*/.<>=?!$%_&~^:" . "w")))
  (make-local-variable 'imenu-case-fold-search)
  (setq imenu-case-fold-search nil)
  (imenu-add-menubar-index)
  (make-local-variable 'lisp-indent-function)
  (set lisp-indent-function 'proto-indent-function)
  (make-local-variable 'indent-tabs-mode)
  (setq indent-tabs-mode nil)
  (make-local-variable 'font-lock-defaults)
  (setq font-lock-defaults
        '((proto-font-lock-keywords	; by default, same as proto-font-lock-keywords-1
	   proto-font-lock-keywords-1	
	   proto-font-lock-keywords-2)
          nil				; keywords-only: nil-> fontify strings * comments too
	  t				; case-fold : t -> ignore case of keywords
	  (("+-*/.<>=!?$%_&~^:" . "w"))	; syntax-alist : ???
	  beginning-of-defun
          (font-lock-mark-block-function . mark-defun))))

(defvar proto-mode-line-process "")

(defvar proto-mode-map nil
  "Keymap for Proto mode.
All commands in `lisp-mode-shared-map' are inherited by this map.")

(if proto-mode-map
    ()
  (let ((map (make-sparse-keymap "Proto")))
    (setq proto-mode-map (make-sparse-keymap))
	(set-keymap-parent proto-mode-map 
					   (if (< emacs-major-version 21)
						   shared-lisp-mode-map
						   lisp-mode-shared-map))
    (define-key proto-mode-map [menu-bar] (make-sparse-keymap))
    (define-key proto-mode-map [menu-bar proto]	; map is for menu
      (cons "Proto" map))
    (define-key map [run-proto] '("Run Inferior Proto" . run-proto))
    (define-key map [uncomment-region]
      '("Uncomment Out Region" . (lambda (beg end)
                                   (interactive "r")
                                   (comment-region beg end '(4)))))
    (define-key map [comment-region] '("Comment Out Region" . comment-region))
    (define-key map [indent-region] '("Indent Region" . indent-region))
    (define-key map [indent-line] '("Indent Line" . lisp-indent-line))
    (put 'comment-region 'menu-enable 'mark-active)
    (put 'uncomment-region 'menu-enable 'mark-active)
    (put 'indent-region 'menu-enable 'mark-active)))

;;;###autoload
(defun proto-mode ()
  "Major mode for editing Proto code.
Editing commands are similar to those of lisp-mode.

In addition, if an inferior Proto process is running, some additional
commands will be defined, for evaluating expressions and controlling
the interpreter, and the state of the process will be displayed in the
modeline of all Proto buffers.  The names of commands that interact
with the Proto process start with \"xproto-\".  For more information
see the documentation for xproto-interaction-mode.

Commands:
Delete converts tabs to spaces as it moves back.
Blank lines separate paragraphs.  Semicolons start comments.
\\{proto-mode-map}
Entry to this mode calls the value of proto-mode-hook
if that value is non-nil."
  (interactive)
  (kill-all-local-variables)
  (proto-mode-initialize)
  (proto-mode-variables)
  (run-hooks 'proto-mode-hook))

(defun proto-mode-initialize ()
  (use-local-map proto-mode-map)
  (setq major-mode 'proto-mode)
  (setq mode-name "Proto"))


(defgroup proto nil
  "Editing Proto code"
  :group 'lisp)

(defcustom proto-mode-hook nil
  "Normal hook (list of functions) run when entering proto-mode.
See `run-hooks'."
  :type 'hook
  :group 'proto)

(defconst proto-font-lock-keywords-1
  (eval-when-compile
    (list
     '("(\\(dv\\|df\\|def\\sw*\\|dm\\|dg\\|dp\\|dc\\|dl\\)\\s-+\\(\\sw+\\)"
       (1 font-lock-keyword-face)
       (2 font-lock-function-name-face nil t))
     '("^\\s-*(\\(dss?\\)" . 1)))
  "Subdued expressions to highlight in Proto modes.")

(defconst proto-font-lock-keywords-2
  (append proto-font-lock-keywords-1
   (eval-when-compile
     (list
      (cons
       (concat
	"(" (regexp-opt
	     '("if" "seq" "set" "fun" "loc" "lab"
	       "fin" "try" "sig" "isa" "slot" "ct" "expand"
	       "quote" "rep" "mif" "and" "or" "unless" "when"
	       "incf" "decf" "inc" "dec" "case" "select" "for" "let"
	       "collecting" "collect" "use" "export" "need-implementation"
	       "ct-also" "pushf" "popf" "dlet") t)
	"\\>") 1)
      '("\\(#t\\|#f\\|=>\\)" . font-lock-keyword-face)
      ;; David Fox <fox@graphics.cs.nyu.edu> for SOS/STklos class specifiers.
      '("\\<<\\sw+>\\>" . font-lock-type-face))))
  "Gaudy expressions to highlight in Proto modes.")

(defvar proto-font-lock-keywords proto-font-lock-keywords-1
  "Default expressions to highlight in Proto modes.")

(defvar calculate-lisp-indent-last-sexp)

;; Copied from lisp-indent-function, but with gets of
;; proto-indent-{function,hook}.
(defun proto-indent-function (indent-point state)
  (let ((normal-indent (current-column)))
    (goto-char (1+ (elt state 1)))
    (parse-partial-sexp (point) calculate-lisp-indent-last-sexp 0 t)
    (if (and (elt state 2)
             (not (looking-at "\\sw\\|\\s_")))
        ;; car of form doesn't seem to be a a symbol
        (progn
          (if (not (> (save-excursion (forward-line 1) (point))
                      calculate-lisp-indent-last-sexp))
              (progn (goto-char calculate-lisp-indent-last-sexp)
                     (beginning-of-line)
                     (parse-partial-sexp (point)
					 calculate-lisp-indent-last-sexp 0 t)))
          ;; Indent under the list or under the first sexp on the same
          ;; line as calculate-lisp-indent-last-sexp.  Note that first
          ;; thing on that line has to be complete sexp since we are
          ;; inside the innermost containing sexp.
          (backward-prefix-chars)
          (current-column))
      (let ((function (buffer-substring (point)
					(progn (forward-sexp 1) (point))))
	    method)
	(setq method (or (get (intern-soft function) 'proto-indent-function)
			 (get (intern-soft function) 'proto-indent-hook)))
	(message "got %s for method for %s" method function)
	(cond ((and (stringp method) (string= method "define")) ; new for proto
	       (lisp-indent-defform state indent-point))
	      ((integerp method)
	       (lisp-indent-specform method state
				     indent-point normal-indent))
	      (method
		(funcall method state indent-point normal-indent)))))))

;;; Let is different in Proto

(defun would-be-symbol (string)
  (not (string-equal (substring string 0 1) "(")))

(defun next-sexp-as-string ()
  ;; Assumes that protected by a save-excursion
  (forward-sexp 1)
  (let ((the-end (point)))
    (backward-sexp 1)
    (buffer-substring (point) the-end)))

;; This is correct but too slow.
;; The one below works almost always.
;;(defun proto-let-indent (state indent-point)
;;  (if (would-be-symbol (next-sexp-as-string))
;;      (proto-indent-specform 2 state indent-point)
;;      (proto-indent-specform 1 state indent-point)))

(defun proto-let-indent (state indent-point normal-indent)
  (skip-chars-forward " \t")
  (if (looking-at "[-a-zA-Z0-9+*/?!@$%^&_:~]")
      (lisp-indent-specform 2 state indent-point normal-indent)
    (lisp-indent-specform 1 state indent-point normal-indent)))

;; (put 'begin 'proto-indent-function 0), say, causes begin to be indented
;; like defun if the first form is placed on the next line, otherwise
;; it is indented like any other form (i.e. forms line up under first).

;; (gregs) The number can be thought of as how many "required" expressions 
;; are consumed before "normal" indentation happens.

(put 'seq 'proto-indent-function 0)
(put 'fun 'proto-indent-function 1)
(put 'loc 'proto-indent-function 1)
(put 'let 'proto-indent-function 'proto-let-indent)
(put 'dlet 'proto-indent-function 'proto-let-indent)
(put 'fin 'proto-indent-function 0)
(put 'try 'proto-indent-function 1)
(put 'unless 'proto-indent-function 1)
(put 'when 'proto-indent-function 1)
(put 'cond 'proto-indent-function 0)
(put 'case 'proto-indent-function 1)
(put 'case-by 'proto-indent-function 2)
(put 'match 'proto-indent-function 2)
(put 'ct 'proto-indent-function 0)
(put 'ct-also 'proto-indent-function 0)
(put 'seq 'proto-indent-function 0)
(put 'for 'proto-indent-function 1)
(put 'lab 'proto-indent-function 1)
(put 'esc 'proto-indent-function 1)
(put 'rep 'proto-indent-function 2)
(put 'collecting 'proto-indent-function 1)
(put 'use 'proto-indent-function 1)
(put 'export 'proto-indent-function 0)
(put 'need-implementation 'proto-indent-function 0)
(put 'new 'proto-indent-function 1)
;;; deprecated
(put 'isa 'proto-indent-function 1)
(put 'select 'proto-indent-function 1)
(put 'blk 'proto-indent-function 1)
(put 'itr 'proto-indent-function 'proto-let-indent)
(put 'mon 'proto-indent-function 1)

;; defining forms:
(put 'dv 'proto-indent-function "define")
(put 'df 'proto-indent-function "define")
(put 'dp 'proto-indent-function "define")
(put 'dl 'proto-indent-function "define")
(put 'dm 'proto-indent-function "define")
(put 'dg 'proto-indent-function "define")
(put 'ds 'proto-indent-function "define")
(put 'dss 'proto-indent-function "define")
;;; deprecated
(put 'def 'proto-indent-function "define")


(setq auto-mode-alist
      (cons '("\\.proto\\'" . proto-mode)
	    auto-mode-alist))

(provide 'proto)

;;; proto.el ends here


;;; goo.el --- Goo editing mode.
;;;  Adapted from scheme.el.

;; Author: Greg Sullivan <gregs@ai.mit.edu>
;;	$Id$	
;; Keywords: languages, lisp

;;; Commentary:

;;; Code:

(require 'lisp-mode)

(defvar goo-mode-syntax-table nil "")
(if (not goo-mode-syntax-table)
    (let ((i     0)
	  (table (copy-syntax-table lisp-mode-syntax-table)))
      ;; let's just use Lisp's syntax for now...
      (setq goo-mode-syntax-table table)
      (modify-syntax-entry ?| "_   " table)
      ;; (modify-syntax-entry ?- "w   " goo-mode-syntax-table)
      ))

(defvar goo-mode-abbrev-table nil "")
(define-abbrev-table 'goo-mode-abbrev-table ())

(defvar goo-imenu-generic-expression
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
  "Imenu generic expression for Goo mode.  See `imenu-generic-expression'.")

(defun goo-mode-variables ()
  (lisp-mode-variables nil)		; use lisp to start with
  (set-syntax-table goo-mode-syntax-table)
  (make-local-variable 'imenu-generic-expression)
  (setq imenu-generic-expression goo-imenu-generic-expression)
  (make-local-variable 'imenu-syntax-alist)
  (setq imenu-syntax-alist '(("+-*/.<>=?!$%_&~^:" . "w")))
  (make-local-variable 'imenu-case-fold-search)
  (setq imenu-case-fold-search nil)
  (imenu-add-menubar-index)
  (make-local-variable 'lisp-indent-function)
  (set lisp-indent-function 'goo-indent-function)
  (make-local-variable 'indent-tabs-mode)
  (setq indent-tabs-mode nil)
  (make-local-variable 'font-lock-defaults)
  (setq font-lock-defaults
        '((goo-font-lock-keywords	; by default, same as goo-font-lock-keywords-1
	   goo-font-lock-keywords-1	
	   goo-font-lock-keywords-2)
          nil				; keywords-only: nil-> fontify strings * comments too
	  t				; case-fold : t -> ignore case of keywords
	  (("+-*/.<>=!?$%_&~^:" . "w"))	; syntax-alist : ???
	  beginning-of-defun
          (font-lock-mark-block-function . mark-defun))))

(defvar goo-mode-line-process "")

(defvar goo-mode-map nil
  "Keymap for Goo mode.
All commands in `lisp-mode-shared-map' are inherited by this map.")

(if goo-mode-map
    ()
  (let ((map (make-sparse-keymap "Goo")))
    (setq goo-mode-map (make-sparse-keymap))
	(set-keymap-parent goo-mode-map 
					   (if (< emacs-major-version 21)
						   shared-lisp-mode-map
						   lisp-mode-shared-map))
    (define-key goo-mode-map [menu-bar] (make-sparse-keymap))
    (define-key goo-mode-map [menu-bar goo]	; map is for menu
      (cons "Goo" map))
    (define-key map [run-goo] '("Run Inferior Goo" . run-goo))
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
(defun goo-mode ()
  "Major mode for editing Goo code.
Editing commands are similar to those of lisp-mode.

In addition, if an inferior Goo process is running, some additional
commands will be defined, for evaluating expressions and controlling
the interpreter, and the state of the process will be displayed in the
modeline of all Goo buffers.  The names of commands that interact
with the Goo process start with \"xgoo-\".  For more information
see the documentation for xgoo-interaction-mode.

Commands:
Delete converts tabs to spaces as it moves back.
Blank lines separate paragraphs.  Semicolons start comments.
\\{goo-mode-map}
Entry to this mode calls the value of goo-mode-hook
if that value is non-nil."
  (interactive)
  (kill-all-local-variables)
  (goo-mode-initialize)
  (goo-mode-variables)
  (run-hooks 'goo-mode-hook))

(defun goo-mode-initialize ()
  (use-local-map goo-mode-map)
  (setq major-mode 'goo-mode)
  (setq mode-name "Goo"))


(defgroup goo nil
  "Editing Goo code"
  :group 'lisp)

(defcustom goo-mode-hook nil
  "Normal hook (list of functions) run when entering goo-mode.
See `run-hooks'."
  :type 'hook
  :group 'goo)

(defconst goo-font-lock-keywords-1
  (eval-when-compile
    (list
     '("(\\(dv\\|df\\|def\\sw*\\|dm\\|dg\\|dp\\|dc\\|dl\\)\\s-+\\(\\sw+\\)"
       (1 font-lock-keyword-face)
       (2 font-lock-function-name-face nil t))
     '("^\\s-*(\\(dss?\\)" . 1)))
  "Subdued expressions to highlight in Goo modes.")

(defconst goo-font-lock-keywords-2
  (append goo-font-lock-keywords-1
   (eval-when-compile
     (list
      (cons
       (concat
	"(" (regexp-opt
	     '("if" "seq" "set" "fun" "loc" "lab"
	       "fin" "try" "sig" "isa" "slot" "ct" "expand"
	       "quote" "rep" "mif" "and" "or" "unless" "when"
	       "incf" "decf" "inc" "dec" "case" "select" "for" "let"
	       "packing" "pack" "use" "export" "need-implementation"
	       "ct-also" "pushf" "popf" "dlet") t)
	"\\>") 1)
      '("\\(#t\\|#f\\|=>\\)" . font-lock-keyword-face)
      ;; David Fox <fox@graphics.cs.nyu.edu> for SOS/STklos class specifiers.
      '("\\<<\\sw+>\\>" . font-lock-type-face))))
  "Gaudy expressions to highlight in Goo modes.")

(defvar goo-font-lock-keywords goo-font-lock-keywords-1
  "Default expressions to highlight in Goo modes.")

(defvar calculate-lisp-indent-last-sexp)

;; Copied from lisp-indent-function, but with gets of
;; goo-indent-{function,hook}.
(defun goo-indent-function (indent-point state)
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
	(setq method (or (get (intern-soft function) 'goo-indent-function)
			 (get (intern-soft function) 'goo-indent-hook)))
	(message "got %s for method for %s" method function)
	(cond ((and (stringp method) (string= method "define")) ; new for goo
	       (lisp-indent-defform state indent-point))
	      ((integerp method)
	       (lisp-indent-specform method state
				     indent-point normal-indent))
	      (method
		(funcall method state indent-point normal-indent)))))))

;;; Let is different in Goo

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
;;(defun goo-let-indent (state indent-point)
;;  (if (would-be-symbol (next-sexp-as-string))
;;      (goo-indent-specform 2 state indent-point)
;;      (goo-indent-specform 1 state indent-point)))

(defun goo-let-indent (state indent-point normal-indent)
  (skip-chars-forward " \t")
  (if (looking-at "[-a-zA-Z0-9+*/?!@$%^&_:~]")
      (lisp-indent-specform 2 state indent-point normal-indent)
    (lisp-indent-specform 1 state indent-point normal-indent)))

;; (put 'begin 'goo-indent-function 0), say, causes begin to be indented
;; like defun if the first form is placed on the next line, otherwise
;; it is indented like any other form (i.e. forms line up under first).

;; (gregs) The number can be thought of as how many "required" expressions 
;; are consumed before "normal" indentation happens.

(put 'seq 'goo-indent-function 0)
(put 'fun 'goo-indent-function 1)
(put 'loc 'goo-indent-function 1)
(put 'let 'goo-indent-function 'goo-let-indent)
(put 'dlet 'goo-indent-function 'goo-let-indent)
(put 'fin 'goo-indent-function 0)
(put 'try 'goo-indent-function 1)
(put 'unless 'goo-indent-function 1)
(put 'when 'goo-indent-function 1)
(put 'cond 'goo-indent-function 0)
(put 'case 'goo-indent-function 1)
(put 'case-by 'goo-indent-function 2)
(put 'match 'goo-indent-function 2)
(put 'ct 'goo-indent-function 0)
(put 'ct-also 'goo-indent-function 0)
(put 'seq 'goo-indent-function 0)
(put 'for 'goo-indent-function 1)
(put 'lab 'goo-indent-function 1)
(put 'esc 'goo-indent-function 1)
(put 'rep 'goo-indent-function 2)
(put 'packing 'goo-indent-function 1)
(put 'use 'goo-indent-function 1)
(put 'export 'goo-indent-function 0)
(put 'need-implementation 'goo-indent-function 0)
(put 'new 'goo-indent-function 1)
;;; deprecated
(put 'isa 'goo-indent-function 1)
(put 'select 'goo-indent-function 1)
(put 'blk 'goo-indent-function 1)
(put 'itr 'goo-indent-function 'goo-let-indent)
(put 'mon 'goo-indent-function 1)

;; defining forms:
(put 'dv 'goo-indent-function "define")
(put 'df 'goo-indent-function "define")
(put 'dp 'goo-indent-function "define")
(put 'dl 'goo-indent-function "define")
(put 'dm 'goo-indent-function "define")
(put 'dg 'goo-indent-function "define")
(put 'ds 'goo-indent-function "define")
(put 'dss 'goo-indent-function "define")
;;; deprecated
(put 'def 'goo-indent-function "define")


(setq auto-mode-alist
      (cons '("\\.goo\\'" . goo-mode)
	    auto-mode-alist))

(provide 'goo)

;;; goo.el ends here


;;; goo-shell.el --- goo process in a buffer. 
;;  Adapted from cmuscheme.el.

;; Author: Greg Sullivan <gregs@ai.mit.edu>  January, 2001.

;;; Commentary:
;;
;;  Add the following to your .emacs:
;;   (autoload 'goo-mode "goo" "Major mode for editing Goo source." t)
;;   (autoload 'run-goo  "goo-shell" "Run an inferior Goo process." t)
;;   (setq auto-mode-alist
;;         (cons '("\\.goo\\'" . goo-mode)
;;	      auto-mode-alist))
;;   (setq goo-program-name "C:/goo/goo.exe") ; or whatever

;;; Code:

(require 'goo)
(require 'comint)

(defgroup goo-shell nil
  "Run a goo process in a buffer."
  :group 'lisp)

;;; INFERIOR GOO MODE STUFF
;;;============================================================================

(defcustom inferior-goo-mode-hook nil
  "*Hook for customising inferior-goo mode."
  :type 'hook
  :group 'goo-shell)

(defvar inferior-goo-mode-map nil)

(cond ((not inferior-goo-mode-map)
       (setq inferior-goo-mode-map
	     (copy-keymap comint-mode-map))
       (define-key inferior-goo-mode-map "\M-\C-x" ;gnu convention
	           'goo-send-definition)
       (define-key inferior-goo-mode-map "\C-x\C-e" 'goo-send-last-sexp)
       (define-key inferior-goo-mode-map "\C-c\C-l" 'goo-load-file)
       (define-key inferior-goo-mode-map "\C-c\C-k" 'goo-compile-file)))

;; Install the process communication commands in the goo-mode keymap.
(define-key goo-mode-map "\M-\C-x" 'goo-send-definition);gnu convention
(define-key goo-mode-map "\C-x\C-e" 'goo-send-last-sexp);gnu convention
(define-key goo-mode-map "\C-c\C-e" 'goo-send-definition)
(define-key goo-mode-map "\C-c\M-e" 'goo-send-definition-and-go)
(define-key goo-mode-map "\C-c\C-r" 'goo-send-region)
(define-key goo-mode-map "\C-c\M-r" 'goo-send-region-and-go)
(define-key goo-mode-map "\C-c\M-c" 'goo-compile-definition)
(define-key goo-mode-map "\C-c\C-c" 'goo-compile-definition-and-go)
(define-key goo-mode-map "\C-c\C-z" 'switch-to-goo)
(define-key goo-mode-map "\C-c\C-l" 'goo-load-file)
(define-key goo-mode-map "\C-c\C-k" 'goo-compile-file) ;k for "kompile"

(let ((map (lookup-key goo-mode-map [menu-bar goo])))
  (define-key map [separator-eval] '("--"))
  (define-key map [compile-file]
    '("Compile Goo File" . goo-compile-file))
  (define-key map [load-file]
    '("Load Goo File" . goo-load-file))
  (define-key map [switch]
    '("Switch to Goo" . switch-to-goo))
  (define-key map [com-def-go]
    '("Compile Definitiion & Go" . goo-compile-definition-and-go))
  (define-key map [com-def]
    '("Compile Definitiion" . goo-compile-definition))
  (define-key map [send-def-go]
    '("Evaluate Last Definition & Go" . goo-send-definition-and-go))
  (define-key map [send-def]
    '("Evaluate Last Definition" . goo-send-definition))
  (define-key map [send-region-go]
    '("Evaluate Region & Go" . goo-send-region-and-go))
  (define-key map [send-region]
    '("Evaluate Region" . goo-send-region))
  (define-key map [send-sexp]
    '("Evaluate Last S-expression" . goo-send-last-sexp))
)

(defvar goo-buffer)

(defun inferior-goo-mode ()
  "Major mode for interacting with an inferior Goo process.

The following commands are available:
\\{inferior-goo-mode-map}

A Goo process can be fired up with M-x run-goo.

Customisation: Entry to this mode runs the hooks on comint-mode-hook and
inferior-goo-mode-hook (in that order).

You can send text to the inferior Goo process from other buffers containing
Goo source.  
    switch-to-goo switches the current buffer to the Goo process buffer.
    goo-send-definition sends the current definition to the Goo process.
    goo-compile-definition compiles the current definition.
    goo-send-region sends the current region to the Goo process.
    goo-compile-region compiles the current region.

    goo-send-definition-and-go, goo-compile-definition-and-go,
        goo-send-region-and-go, and goo-compile-region-and-go
        switch to the Goo process buffer after sending their text.
For information on running multiple processes in multiple buffers, see
documentation for variable goo-buffer.

Commands:
Return after the end of the process' output sends the text from the 
    end of process to point.
Return before the end of the process' output copies the sexp ending at point
    to the end of the process' output, and sends it.
Delete converts tabs to spaces as it moves back.
Tab indents for Goo; with argument, shifts rest
    of expression rigidly with the current line.
C-M-q does Tab on each line starting within following expression.
Paragraphs are separated only by blank lines.  Semicolons start comments.
If you accidentally suspend your process, use \\[comint-continue-subjob]
to continue it."
  (interactive)
  (comint-mode)
  ;; Customise in inferior-goo-mode-hook
  ;; (setq comint-prompt-regexp "^[^>\n]*>+ *")
  (setq comint-prompt-regexp "^[^<=\n]*<= *")
  (goo-mode-variables)
  (setq major-mode 'inferior-goo-mode)
  (setq mode-name "Goo Shell")
  (setq mode-line-process '(":%s"))
  (use-local-map inferior-goo-mode-map)
  (setq comint-input-filter (function goo-input-filter))
  (setq comint-get-old-input (function goo-get-old-input))
  (run-hooks 'inferior-goo-mode-hook))

(defcustom inferior-goo-filter-regexp "\\`\\s *\\S ?\\S ?\\s *\\'"
  "*Input matching this regexp are not saved on the history list.
Defaults to a regexp ignoring all inputs of 0, 1, or 2 letters."
  :type 'regexp
  :group 'goo-shell)

(defun goo-input-filter (str)
  "Don't save anything matching inferior-goo-filter-regexp"
  (not (string-match inferior-goo-filter-regexp str)))

(defun goo-get-old-input ()
  "Snarf the sexp ending at point"
  (save-excursion
    (let ((end (point)))
      (backward-sexp)
      (buffer-substring (point) end))))

(defun goo-args-to-list (string)
  (let ((where (string-match "[ \t]" string)))
    (cond ((null where) (list string))
	  ((not (= where 0))
	   (cons (substring string 0 where)
		 (goo-args-to-list (substring string (+ 1 where)
						 (length string)))))
	  (t (let ((pos (string-match "[^ \t]" string)))
	       (if (null pos)
		   nil
		 (goo-args-to-list (substring string pos
						 (length string)))))))))

(defcustom goo-program-name "goo"
  "*Program invoked by the run-goo command"
  :type 'string
  :group 'goo-shell)

;;;###autoload
(defun run-goo (cmd)
  "Run an inferior Goo process, input and output via buffer *goo*.
If there is a process already running in `*goo*', switch to that buffer.
With argument, allows you to edit the command line (default is value
of `goo-program-name').  Runs the hooks `inferior-goo-mode-hook'
\(after the `comint-mode-hook' is run).
\(Type \\[describe-mode] in the process buffer for a list of commands.)"

  (interactive (list (if current-prefix-arg
			 (read-string "Run Goo: " goo-program-name)
			 goo-program-name)))
  (if (not (comint-check-proc "*goo*"))
      (let ((cmdlist (goo-args-to-list cmd)))
	(set-buffer (apply 'make-comint "goo" (car cmdlist)
			   nil (cdr cmdlist)))
	(inferior-goo-mode)))
  (setq goo-program-name cmd)
  (setq goo-buffer "*goo*")
  (pop-to-buffer "*goo*"))
;;;###autoload (add-hook 'same-window-buffer-names "*goo*")

(defun goo-send-region (start end)
  "Send the current region to the inferior Goo process."
  (interactive "r")
  (comint-send-region (goo-proc) start end)
  (comint-send-string (goo-proc) "\n"))

(defun goo-send-definition ()
  "Send the current definition to the inferior Goo process."
  (interactive)
  (save-excursion
   (end-of-defun)
   (let ((end (point)))
     (beginning-of-defun)
     (goo-send-region (point) end))))

(defun goo-send-last-sexp ()
  "Send the previous sexp to the inferior Goo process."
  (interactive)
  (goo-send-region (save-excursion (backward-sexp) (point)) (point)))

(defcustom goo-compile-exp-command "(compile '%s)"
  "*Template for issuing commands to compile arbitrary Goo expressions."
  :type 'string
  :group 'goo-shell)

(defun goo-compile-region (start end)
  "Compile the current region in the inferior Goo process.
\(A BEGIN is wrapped around the region: (BEGIN <region>))"
  (interactive "r")
  (comint-send-string (goo-proc) (format goo-compile-exp-command
					    (format "(begin %s)"
						    (buffer-substring start end))))
  (comint-send-string (goo-proc) "\n"))

(defun goo-compile-definition ()
  "Compile the current definition in the inferior Goo process."
  (interactive)
  (save-excursion
   (end-of-defun)
   (let ((end (point)))
     (beginning-of-defun)
     (goo-compile-region (point) end))))

(defun switch-to-goo (eob-p)
  "Switch to the goo process buffer.
With argument, positions cursor at end of buffer."
  (interactive "P")
  (if (get-buffer goo-buffer)
      (pop-to-buffer goo-buffer)
      (error "No current process buffer. See variable goo-buffer."))
  (cond (eob-p
	 (push-mark)
	 (goto-char (point-max)))))

(defun goo-send-region-and-go (start end)
  "Send the current region to the inferior Goo process.
Then switch to the process buffer."
  (interactive "r")
  (goo-send-region start end)
  (switch-to-goo t))

(defun goo-send-definition-and-go ()
  "Send the current definition to the inferior Goo. 
Then switch to the process buffer."
  (interactive)
  (goo-send-definition)
  (switch-to-goo t))

(defun goo-compile-definition-and-go ()
  "Compile the current definition in the inferior Goo. 
Then switch to the process buffer."
  (interactive)
  (goo-compile-definition)
  (switch-to-goo t))

(defun goo-compile-region-and-go (start end)
  "Compile the current region in the inferior Goo. 
Then switch to the process buffer."
  (interactive "r")
  (goo-compile-region start end)
  (switch-to-goo t))

(defcustom goo-source-modes '(goo-mode)
  "*Used to determine if a buffer contains Goo source code.
If it's loaded into a buffer that is in one of these major modes, it's
considered a goo source file by goo-load-file and goo-compile-file.
Used by these commands to determine defaults."
  :type '(repeat function)
  :group 'goo-shell)

(defvar goo-prev-l/c-dir/file nil
  "Caches the last (directory . file) pair.
Caches the last pair used in the last goo-load-file or
goo-compile-file command. Used for determining the default in the 
next one.")

(defun goo-load-file (file-name)
  "Load a Goo file into the inferior Goo process."
  (interactive (comint-get-source "Load Goo file: " goo-prev-l/c-dir/file
				  goo-source-modes t)) ; T because LOAD 
                                                          ; needs an exact name
  (comint-check-source file-name) ; Check to see if buffer needs saved.
  (setq goo-prev-l/c-dir/file (cons (file-name-directory    file-name)
				       (file-name-nondirectory file-name)))
  (comint-send-string (goo-proc) (concat "(load \""
					    file-name
					    "\"\)\n")))

(defun goo-compile-file (file-name)
  "Compile a Goo file in the inferior Goo process."
  (interactive (comint-get-source "Compile Goo file: "
				  goo-prev-l/c-dir/file
				  goo-source-modes
				  nil)) ; NIL because COMPILE doesn't
                                        ; need an exact name.
  (comint-check-source file-name) ; Check to see if buffer needs saved.
  (setq goo-prev-l/c-dir/file (cons (file-name-directory    file-name)
				       (file-name-nondirectory file-name)))
  (comint-send-string (goo-proc) (concat "(compile-file \""
					    file-name
					    "\"\)\n")))


(defvar goo-buffer nil "*The current goo process buffer.

MULTIPLE PROCESS SUPPORT
===========================================================================
Goo.el supports, in a fairly simple fashion, running multiple Goo
processes. To run multiple Goo processes, you start the first up with
\\[run-goo]. It will be in a buffer named *goo*. Rename this buffer
with \\[rename-buffer]. You may now start up a new process with another
\\[run-goo]. It will be in a new buffer, named *goo*. You can
switch between the different process buffers with \\[switch-to-buffer].

Commands that send text from source buffers to Goo processes --
like goo-send-definition or goo-compile-region -- have to choose a
process to send to, when you have more than one Goo process around. This
is determined by the global variable goo-buffer. Suppose you
have three inferior Goos running:
    Buffer	Process
    foo		goo
    bar		goo<2>
    *goo*    goo<3>
If you do a \\[goo-send-definition-and-go] command on some Goo source
code, what process do you send it to?

- If you're in a process buffer (foo, bar, or *goo*), 
  you send it to that process.
- If you're in some other buffer (e.g., a source file), you
  send it to the process attached to buffer goo-buffer.
This process selection is performed by function goo-proc.

Whenever \\[run-goo] fires up a new process, it resets goo-buffer
to be the new process's buffer. If you only run one process, this will
do the right thing. If you run multiple processes, you can change
goo-buffer to another process buffer with \\[set-variable].

More sophisticated approaches are, of course, possible. If you find yourself
needing to switch back and forth between multiple processes frequently,
you may wish to consider ilisp.el, a larger, more sophisticated package
for running inferior Lisp and Goo processes. The approach taken here is
for a minimal, simple implementation. Feel free to extend it.")

(defun goo-proc ()
  "Returns the current goo process. See variable goo-buffer."
  (let ((proc (get-buffer-process (if (eq major-mode 'inferior-goo-mode)
				      (current-buffer)
				      goo-buffer))))
    (or proc
	(error "No current process. See variable goo-buffer"))))


;;; Do the user's customisation...

(defcustom goo-load-hook nil
  "This hook is run when goo is loaded in.
This is a good place to put keybindings."
  :type 'hook
  :group 'goo-shell)
	
(run-hooks 'goo-shell-load-hook)

(provide 'goo-shell)

;;; goo-shell.el ends here


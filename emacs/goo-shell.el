;;; proto-shell.el --- proto process in a buffer. 
;;  Adapted from cmuscheme.el.

;; Author: Greg Sullivan <gregs@ai.mit.edu>  January, 2001.

;;; Commentary:
;;
;;  Add the following to your .emacs:
;;   (autoload 'proto-mode "proto" "Major mode for editing Proto source." t)
;;   (autoload 'run-proto  "proto-shell" "Run an inferior Proto process." t)
;;   (setq auto-mode-alist
;;         (cons '("\\.proto\\'" . proto-mode)
;;	      auto-mode-alist))
;;   (setq proto-program-name "C:/proto/proto.exe") ; or whatever

;;; Code:

(require 'proto)
(require 'comint)

(defgroup proto-shell nil
  "Run a proto process in a buffer."
  :group 'lisp)

;;; INFERIOR PROTO MODE STUFF
;;;============================================================================

(defcustom inferior-proto-mode-hook nil
  "*Hook for customising inferior-proto mode."
  :type 'hook
  :group 'proto-shell)

(defvar inferior-proto-mode-map nil)

(cond ((not inferior-proto-mode-map)
       (setq inferior-proto-mode-map
	     (copy-keymap comint-mode-map))
       (define-key inferior-proto-mode-map "\M-\C-x" ;gnu convention
	           'proto-send-definition)
       (define-key inferior-proto-mode-map "\C-x\C-e" 'proto-send-last-sexp)
       (define-key inferior-proto-mode-map "\C-c\C-l" 'proto-load-file)
       (define-key inferior-proto-mode-map "\C-c\C-k" 'proto-compile-file)))

;; Install the process communication commands in the proto-mode keymap.
(define-key proto-mode-map "\M-\C-x" 'proto-send-definition);gnu convention
(define-key proto-mode-map "\C-x\C-e" 'proto-send-last-sexp);gnu convention
(define-key proto-mode-map "\C-c\C-e" 'proto-send-definition)
(define-key proto-mode-map "\C-c\M-e" 'proto-send-definition-and-go)
(define-key proto-mode-map "\C-c\C-r" 'proto-send-region)
(define-key proto-mode-map "\C-c\M-r" 'proto-send-region-and-go)
(define-key proto-mode-map "\C-c\M-c" 'proto-compile-definition)
(define-key proto-mode-map "\C-c\C-c" 'proto-compile-definition-and-go)
(define-key proto-mode-map "\C-c\C-z" 'switch-to-proto)
(define-key proto-mode-map "\C-c\C-l" 'proto-load-file)
(define-key proto-mode-map "\C-c\C-k" 'proto-compile-file) ;k for "kompile"

(let ((map (lookup-key proto-mode-map [menu-bar proto])))
  (define-key map [separator-eval] '("--"))
  (define-key map [compile-file]
    '("Compile Proto File" . proto-compile-file))
  (define-key map [load-file]
    '("Load Proto File" . proto-load-file))
  (define-key map [switch]
    '("Switch to Proto" . switch-to-proto))
  (define-key map [com-def-go]
    '("Compile Definitiion & Go" . proto-compile-definition-and-go))
  (define-key map [com-def]
    '("Compile Definitiion" . proto-compile-definition))
  (define-key map [send-def-go]
    '("Evaluate Last Definition & Go" . proto-send-definition-and-go))
  (define-key map [send-def]
    '("Evaluate Last Definition" . proto-send-definition))
  (define-key map [send-region-go]
    '("Evaluate Region & Go" . proto-send-region-and-go))
  (define-key map [send-region]
    '("Evaluate Region" . proto-send-region))
  (define-key map [send-sexp]
    '("Evaluate Last S-expression" . proto-send-last-sexp))
)

(defvar proto-buffer)

(defun inferior-proto-mode ()
  "Major mode for interacting with an inferior Proto process.

The following commands are available:
\\{inferior-proto-mode-map}

A Proto process can be fired up with M-x run-proto.

Customisation: Entry to this mode runs the hooks on comint-mode-hook and
inferior-proto-mode-hook (in that order).

You can send text to the inferior Proto process from other buffers containing
Proto source.  
    switch-to-proto switches the current buffer to the Proto process buffer.
    proto-send-definition sends the current definition to the Proto process.
    proto-compile-definition compiles the current definition.
    proto-send-region sends the current region to the Proto process.
    proto-compile-region compiles the current region.

    proto-send-definition-and-go, proto-compile-definition-and-go,
        proto-send-region-and-go, and proto-compile-region-and-go
        switch to the Proto process buffer after sending their text.
For information on running multiple processes in multiple buffers, see
documentation for variable proto-buffer.

Commands:
Return after the end of the process' output sends the text from the 
    end of process to point.
Return before the end of the process' output copies the sexp ending at point
    to the end of the process' output, and sends it.
Delete converts tabs to spaces as it moves back.
Tab indents for Proto; with argument, shifts rest
    of expression rigidly with the current line.
C-M-q does Tab on each line starting within following expression.
Paragraphs are separated only by blank lines.  Semicolons start comments.
If you accidentally suspend your process, use \\[comint-continue-subjob]
to continue it."
  (interactive)
  (comint-mode)
  ;; Customise in inferior-proto-mode-hook
  ;; (setq comint-prompt-regexp "^[^>\n]*>+ *")
  (setq comint-prompt-regexp "^[^<=\n]*<= *")
  (proto-mode-variables)
  (setq major-mode 'inferior-proto-mode)
  (setq mode-name "Proto Shell")
  (setq mode-line-process '(":%s"))
  (use-local-map inferior-proto-mode-map)
  (setq comint-input-filter (function proto-input-filter))
  (setq comint-get-old-input (function proto-get-old-input))
  (run-hooks 'inferior-proto-mode-hook))

(defcustom inferior-proto-filter-regexp "\\`\\s *\\S ?\\S ?\\s *\\'"
  "*Input matching this regexp are not saved on the history list.
Defaults to a regexp ignoring all inputs of 0, 1, or 2 letters."
  :type 'regexp
  :group 'proto-shell)

(defun proto-input-filter (str)
  "Don't save anything matching inferior-proto-filter-regexp"
  (not (string-match inferior-proto-filter-regexp str)))

(defun proto-get-old-input ()
  "Snarf the sexp ending at point"
  (save-excursion
    (let ((end (point)))
      (backward-sexp)
      (buffer-substring (point) end))))

(defun proto-args-to-list (string)
  (let ((where (string-match "[ \t]" string)))
    (cond ((null where) (list string))
	  ((not (= where 0))
	   (cons (substring string 0 where)
		 (proto-args-to-list (substring string (+ 1 where)
						 (length string)))))
	  (t (let ((pos (string-match "[^ \t]" string)))
	       (if (null pos)
		   nil
		 (proto-args-to-list (substring string pos
						 (length string)))))))))

(defcustom proto-program-name "proto"
  "*Program invoked by the run-proto command"
  :type 'string
  :group 'proto-shell)

;;;###autoload
(defun run-proto (cmd)
  "Run an inferior Proto process, input and output via buffer *proto*.
If there is a process already running in `*proto*', switch to that buffer.
With argument, allows you to edit the command line (default is value
of `proto-program-name').  Runs the hooks `inferior-proto-mode-hook'
\(after the `comint-mode-hook' is run).
\(Type \\[describe-mode] in the process buffer for a list of commands.)"

  (interactive (list (if current-prefix-arg
			 (read-string "Run Proto: " proto-program-name)
			 proto-program-name)))
  (if (not (comint-check-proc "*proto*"))
      (let ((cmdlist (proto-args-to-list cmd)))
	(set-buffer (apply 'make-comint "proto" (car cmdlist)
			   nil (cdr cmdlist)))
	(inferior-proto-mode)))
  (setq proto-program-name cmd)
  (setq proto-buffer "*proto*")
  (pop-to-buffer "*proto*"))
;;;###autoload (add-hook 'same-window-buffer-names "*proto*")

(defun proto-send-region (start end)
  "Send the current region to the inferior Proto process."
  (interactive "r")
  (comint-send-region (proto-proc) start end)
  (comint-send-string (proto-proc) "\n"))

(defun proto-send-definition ()
  "Send the current definition to the inferior Proto process."
  (interactive)
  (save-excursion
   (end-of-defun)
   (let ((end (point)))
     (beginning-of-defun)
     (proto-send-region (point) end))))

(defun proto-send-last-sexp ()
  "Send the previous sexp to the inferior Proto process."
  (interactive)
  (proto-send-region (save-excursion (backward-sexp) (point)) (point)))

(defcustom proto-compile-exp-command "(compile '%s)"
  "*Template for issuing commands to compile arbitrary Proto expressions."
  :type 'string
  :group 'proto-shell)

(defun proto-compile-region (start end)
  "Compile the current region in the inferior Proto process.
\(A BEGIN is wrapped around the region: (BEGIN <region>))"
  (interactive "r")
  (comint-send-string (proto-proc) (format proto-compile-exp-command
					    (format "(begin %s)"
						    (buffer-substring start end))))
  (comint-send-string (proto-proc) "\n"))

(defun proto-compile-definition ()
  "Compile the current definition in the inferior Proto process."
  (interactive)
  (save-excursion
   (end-of-defun)
   (let ((end (point)))
     (beginning-of-defun)
     (proto-compile-region (point) end))))

(defun switch-to-proto (eob-p)
  "Switch to the proto process buffer.
With argument, positions cursor at end of buffer."
  (interactive "P")
  (if (get-buffer proto-buffer)
      (pop-to-buffer proto-buffer)
      (error "No current process buffer. See variable proto-buffer."))
  (cond (eob-p
	 (push-mark)
	 (goto-char (point-max)))))

(defun proto-send-region-and-go (start end)
  "Send the current region to the inferior Proto process.
Then switch to the process buffer."
  (interactive "r")
  (proto-send-region start end)
  (switch-to-proto t))

(defun proto-send-definition-and-go ()
  "Send the current definition to the inferior Proto. 
Then switch to the process buffer."
  (interactive)
  (proto-send-definition)
  (switch-to-proto t))

(defun proto-compile-definition-and-go ()
  "Compile the current definition in the inferior Proto. 
Then switch to the process buffer."
  (interactive)
  (proto-compile-definition)
  (switch-to-proto t))

(defun proto-compile-region-and-go (start end)
  "Compile the current region in the inferior Proto. 
Then switch to the process buffer."
  (interactive "r")
  (proto-compile-region start end)
  (switch-to-proto t))

(defcustom proto-source-modes '(proto-mode)
  "*Used to determine if a buffer contains Proto source code.
If it's loaded into a buffer that is in one of these major modes, it's
considered a proto source file by proto-load-file and proto-compile-file.
Used by these commands to determine defaults."
  :type '(repeat function)
  :group 'proto-shell)

(defvar proto-prev-l/c-dir/file nil
  "Caches the last (directory . file) pair.
Caches the last pair used in the last proto-load-file or
proto-compile-file command. Used for determining the default in the 
next one.")

(defun proto-load-file (file-name)
  "Load a Proto file into the inferior Proto process."
  (interactive (comint-get-source "Load Proto file: " proto-prev-l/c-dir/file
				  proto-source-modes t)) ; T because LOAD 
                                                          ; needs an exact name
  (comint-check-source file-name) ; Check to see if buffer needs saved.
  (setq proto-prev-l/c-dir/file (cons (file-name-directory    file-name)
				       (file-name-nondirectory file-name)))
  (comint-send-string (proto-proc) (concat "(load \""
					    file-name
					    "\"\)\n")))

(defun proto-compile-file (file-name)
  "Compile a Proto file in the inferior Proto process."
  (interactive (comint-get-source "Compile Proto file: "
				  proto-prev-l/c-dir/file
				  proto-source-modes
				  nil)) ; NIL because COMPILE doesn't
                                        ; need an exact name.
  (comint-check-source file-name) ; Check to see if buffer needs saved.
  (setq proto-prev-l/c-dir/file (cons (file-name-directory    file-name)
				       (file-name-nondirectory file-name)))
  (comint-send-string (proto-proc) (concat "(compile-file \""
					    file-name
					    "\"\)\n")))


(defvar proto-buffer nil "*The current proto process buffer.

MULTIPLE PROCESS SUPPORT
===========================================================================
Proto.el supports, in a fairly simple fashion, running multiple Proto
processes. To run multiple Proto processes, you start the first up with
\\[run-proto]. It will be in a buffer named *proto*. Rename this buffer
with \\[rename-buffer]. You may now start up a new process with another
\\[run-proto]. It will be in a new buffer, named *proto*. You can
switch between the different process buffers with \\[switch-to-buffer].

Commands that send text from source buffers to Proto processes --
like proto-send-definition or proto-compile-region -- have to choose a
process to send to, when you have more than one Proto process around. This
is determined by the global variable proto-buffer. Suppose you
have three inferior Protos running:
    Buffer	Process
    foo		proto
    bar		proto<2>
    *proto*    proto<3>
If you do a \\[proto-send-definition-and-go] command on some Proto source
code, what process do you send it to?

- If you're in a process buffer (foo, bar, or *proto*), 
  you send it to that process.
- If you're in some other buffer (e.g., a source file), you
  send it to the process attached to buffer proto-buffer.
This process selection is performed by function proto-proc.

Whenever \\[run-proto] fires up a new process, it resets proto-buffer
to be the new process's buffer. If you only run one process, this will
do the right thing. If you run multiple processes, you can change
proto-buffer to another process buffer with \\[set-variable].

More sophisticated approaches are, of course, possible. If you find yourself
needing to switch back and forth between multiple processes frequently,
you may wish to consider ilisp.el, a larger, more sophisticated package
for running inferior Lisp and Proto processes. The approach taken here is
for a minimal, simple implementation. Feel free to extend it.")

(defun proto-proc ()
  "Returns the current proto process. See variable proto-buffer."
  (let ((proc (get-buffer-process (if (eq major-mode 'inferior-proto-mode)
				      (current-buffer)
				      proto-buffer))))
    (or proc
	(error "No current process. See variable proto-buffer"))))


;;; Do the user's customisation...

(defcustom proto-load-hook nil
  "This hook is run when proto is loaded in.
This is a good place to put keybindings."
  :type 'hook
  :group 'proto-shell)
	
(run-hooks 'proto-shell-load-hook)

(provide 'proto-shell)

;;; proto-shell.el ends here


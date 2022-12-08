(defun hello(my-name)
  (insert "Hello, I am " my-name))
(hello "cyq")

(progn
  (switch-to-buffer-other-frame "*text*")
  (erase-buffer)
  (hello "cyq")
  (other-window 1))

(defun greeting (from-name)
  (let((your-name (read-from-minibuffer "Enter your name: ")))
    (switch-to-buffer-other-frame "*test*")
    (erase-buffer)
    (insert (format "Hello %s!\n\n I am %s." your-name from-name))
    ))

(greeting "cyq")


(defun hello(my-name)
  (insert "Hello, I am " my-name)
  )
(hello "brith")

(progn
  (switch-to-buffer-other-frame "*test*")
  (erase-buffer)
  (hello "cyq")
  (other-window 1)
  )

(defun hello(name)
  (insert (format "Hello %s!\n" name))
  )
(hello "cyq")Hello cyq!

(defun greeting(name)
  (let ((your-name "Bstien"))
    (insert (format "\n Hello %s!\n I am %s."
                   name
                   your-name))
    )
  )
(greeting "cyq")
 Hello cyq!
I am Bstien.

(progn
  (setq list-name '("Sarah" "Chloe" "Mathilde"))
  (car list-name)
  (insert "\n")
  (cdr list-name)
  (push "Stephanie" list-name)
  (mapcar 'hello list-name)
  )
Hello Stephanie!
Hello Sarah!
Hello Chloe!
Hello Mathilde!






# Table of Contents

1.  [第一章 一个 Hello World 的例子](#org138da80)
    1.  [Hello World](#org6d4b67f)
    2.  [elisp的执行](#orgfb38a83)
    3.  [S表达式](#orgd286dd1)
2.  [基础知识](#orgf6d79e3)
    1.  [函数和变量](#org8aafc33)
        1.  [定义一个函数](#org9564e2d)
        2.  [运行一个函数](#org1269353)
        3.  [变量的赋值](#orgfb1d6f7)
        4.  [声明变量的特殊表达式defvar](#orgf49142a)
        5.  [defvar和setq的不同](#org555635f)
        6.  [关于全局的说明](#org89f97ca)
    2.  [局部变量](#orgf667f9e)
        1.  [let的使用形式：](#orgc334c8d)
        2.  [let\*](#org388c30d)
    3.  [lambda表达式](#orga8b0815)
        1.  [用法和defun一样：](#org7717247)
        2.  [调用方式：用funcall调用](#orgacf141c)

<a id="org138da80"></a>

# 第一章 一个 Hello World 的例子


<a id="org6d4b67f"></a>

## Hello World

自动 K&R 以来， hello world 程序历来都是程序语言教程的第一个例子。 我们也用一个hello world 的例子来演示 emacs 里执行 elisp 的环境。 

> (message "Hello World!")


<a id="orgfb38a83"></a>

## elisp的执行

-   方法1：M-x lisp-interation-mode, 光标移动到语句尾， 执行c-j， 在Minibuffer中显示结果，在光标行也显示结果。
-   方法2：M-x lisp-interation-mode， 光标移动到语句尾， 执行c-x c-e （这是一个全局的按键绑定， 几乎可以在任何地方使用， 运行结果显示在Minibuffer中)


<a id="orgd286dd1"></a>

## S表达式

elisp里的一个完整表达式， 都是用括号括起来的， 称为一个S表达式。


<a id="orgf6d79e3"></a>

# 基础知识


<a id="org8aafc33"></a>

## 函数和变量


<a id="org9564e2d"></a>

### 定义一个函数

-   [ ] 用法：

    (defun function-name (argu
    ments-list)
        "document string"
         body)

-   具体实例

    (defun hello-world (name)
         "say hello to user whose name is NAME."
    (message "Hello ,%s " name))

第二行的文档字符串是可以省略的。


<a id="org1269353"></a>

### 运行一个函数

运行函数，最一般的方式是：

> (function-name arguments-list)


<a id="orgfb1d6f7"></a>

### 变量的赋值

可以直接用setq直接对一个变量赋值

> (setq foo "I'm foo")
> (message foo)


<a id="orgf49142a"></a>

### 声明变量的特殊表达式defvar

> (defar variable-name value
>   "document string")


<a id="org555635f"></a>

### defvar和setq的不同

1.  如果变量在声明之前，这个变量已经有一个值的话，用 defvar 声明的变量值不会改变成声明的那个值。
2.  另一个区别是 defvar 可以为变量提供文档字符串，当变量是在文件中定义的话，C-h v 后能给出变量定义的位置。


<a id="org89f97ca"></a>

### 关于全局的说明

elisp中，函数是全局，变量也很容易成为全局变量（局部变量和全局变量都是用setq赋值的），保证变量名不冲突是很关键的。 在命名时， 需要给变量名和函数名一个合适的前缀。


<a id="orgf667f9e"></a>

## 局部变量

elisp中使用let和了let\*绑定局部变量。


<a id="orgc334c8d"></a>

### let的使用形式：

> (let (binding)
>      body)

说明：binding可以是（var value）这样对var赋初值的形式，或者用var声明一个初始值为nil的变量。  例如：

> (defun circle-area (radix)
>   (let ((pi 3.1415926)
>         area)
>     (setq area (\* pi radix radix))
>     (message "直径为 %.2f 的圆面积是 %.2f" radix area)))
> (circle-area 3)


<a id="org388c30d"></a>

### let\*

let\* 的使用和let一样，不同的是let\*可以使用之前声明的变量


<a id="orga8b0815"></a>

## lambda表达式

相当于匿名函数,


<a id="org7717247"></a>

### 用法和defun一样：

> (lambda (arguments-list)
>   "documentation string"
>   body)

lambda相当于函数名


<a id="orgacf141c"></a>

### 调用方式：用funcall调用

> (funcall (lambda (name)
>            (message "Hello, %s!" name)) "Emacser")

我的理解：

> (lambda (name)
>            (message "Hello, %s!" name))

这部分有连个作用：

-   当做函数名
-   函数定义

最后的"Emacser" ，相当于参数调用。


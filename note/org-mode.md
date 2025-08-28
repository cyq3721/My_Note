
# Table of Contents

1.  [简介](#org058bcbb)
2.  [安装及简单配置](#orgd2ce18b)
3.  [简单操作](#org7ba7464)
    1.  [标题](#orgc721ec0)
    2.  [段落](#org853e0e4)
4.  [基本教程](#org2ea5d58)
    1.  [文档结构](#orgb9601b1)
    2.  [表格](#orgba4afcd)
    3.  [超链接](#org0f3b562)
    4.  [待办事项](#orgd28e728)
    5.  [任务细分](#org73f3ef1)
5.  [操作技巧](#orgfd681d1)
    1.  [快速输入 #+BEGIN\_SRC &#x2026; #+END\_SRC](#orge1813fd)
    2.  [代码的语法高亮](#org1741a47)
    3.  [在org-mode中实时显示图片](#org9ad94c5)
    4.  [导出成HTML时的一些问题和技巧](#org766e406)
    5.  [让不同级别的标题采用不同大小的字体](#orgcb496a1)
    6.  [修改org的标记样式](#orge2b6e24)
    7.  [一个非常有用的命令 customize](#org877dd4e)
6.  [常用的格式](#orgd13b9fb)
    1.  [文字格式](#orge8c1b19)
    2.  [列表](#orgb7504a7)
    3.  [表格](#orgb764069)
    4.  [导出](#org68396b1)
7.  [带缩进的显示方式](#orgd4cea1b)
8.  [大纲管理文档的进阶](#org12cff02)
    1.  [标签定义](#org78b88a8):VM:
    2.  [预定义标签](#org4c529b8)
    3.  [标签搜索](#orgcf89394)



<a id="org058bcbb"></a>

# 简介

Org-Mode：Your Life in Plain Text.

Org-Mode是文本编辑软件Emacs的一种支持内容分级显示的编辑模式。  这种模式支持写to-do列表，日志管理，做笔记，做工程计划或者写网页。  比如，todo列表可以给每一件事分别赋上不同的优先级和最后完成期限，每一个todo项目又可以细分次级tudo列表或者核对表，而且每一个项目还都可以分别加标签或者属性。  除此以外，org-mode还可以自动生成某一时间段以内的日程表。


<a id="orgd2ce18b"></a>

# 安装及简单配置

Emacs23以后已经默认包含有org-mode。


<a id="org7ba7464"></a>

# 简单操作


<a id="orgc721ec0"></a>

## 标题

文章中可以通过 #+TITLE： 来设置标题。 如：


正文中的标题可以通过\*，后面要跟空格，然后再输入想要的标题就可以了。  一个\*表示一级，最多可以有10级标题。


<a id="org853e0e4"></a>

## 段落

在win下只要enter，就换行成为新的一段。  但在这里要开始新的段落需要回车两次，当你回车一次，当你发布时，只相当于中间有个空格而已。  还有一种方法就是在需要换行的地方输入“\\\\“。

> 段落1
> 
> 段落2  
> 段落3


<a id="org2ea5d58"></a>

# 基本教程


<a id="orgb9601b1"></a>

## 文档结构


### 标题

-   【\* 】一级标题
-   【\*\* 】二级标题依次类推
-   【TABLE】展开/关闭提纲，多层提纲按一次展开一级，没有之后再按关闭所有
-   【S-TABLE】展开/关闭所有提纲
-   【C-U C-U C-U TAB】显示全部


### 标题间移动

-   【c-c c-n】下一个标题
-   【c-c c-p】上一个标题
-   【c-c c-f】下一个同级标题
-   【c-c c-b】上一个同级标题
-   【c-c c-u】回到上层标题


### 结构辑

-   【m-ret】在行位按下创建新的同级标题
-   【m-↑/↓】移动当前标题（连带子标题）
-   【s-m-←/→】调整当前标题等级（连带子标题）
-   【c-x n s/w】本页只显示当前标题

-   列表

    -   相当于html中的列表（emacs有导出的功能，导出html c-c c-e h h ）
    -   无序列表项以‘-’、‘+’或者‘\*‘开头。
    -   有序列表项以‘1.’、‘1)’或者开头。
    -   描述列表用‘::’将项和描述分开。
    -   【C-c -】循环改变项标志符

-   脚注<sup><a id="fnr.1" class="footref" href="#fn.1" role="doc-backlink">1</a></sup>

    -   【c-c c-x f】 光标在开头是根据参数创建脚注，在文中时在当前位置插入一个新的脚注，在脚注上时跳转到定义
    -   【c-c c-c】 在定义个引用直接进行跳转


<a id="orgba4afcd"></a>

## 表格


### 创建

-   【|+space+table】自动创建表格
-   【|- +table】创建水平分割
-   【c+c ret】创建下一行，自带分割线


### 操作

-   【tab】跳转到下一个表格
-   【s+tab】跳转到上一个表格


### 编辑行和列

-   【m-↑/↓】 左/右移当前列
-   【s-m-←】删除当前行
-   【s-m-→】在光标位置左边添加一列
-   【s-m-↑】删除当前行
-   【s-m-↓】在当前行上面添加一行


### 表格操作总结

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">快捷键</td>
<td class="org-left">描述</td>
</tr>

<tr>
<td class="org-left">c-c 竖线</td>
<td class="org-left">创建表格</td>
</tr>

<tr>
<td class="org-left">c-c c-c</td>
<td class="org-left">重新调整表格缩进</td>
</tr>

<tr>
<td class="org-left">tab</td>
<td class="org-left">移动到下一个区域，必要时（行尾）创建新行</td>
</tr>

<tr>
<td class="org-left">s-tab</td>
<td class="org-left">移动到上一个区域</td>
</tr>

<tr>
<td class="org-left">s-ret</td>
<td class="org-left">移动到下一行，必要时（行尾）创建新行</td>
</tr>

<tr>
<td class="org-left">m-left/right</td>
<td class="org-left">移动列</td>
</tr>

<tr>
<td class="org-left">m-up/down</td>
<td class="org-left">移动行</td>
</tr>

<tr>
<td class="org-left">m-s-up/down</td>
<td class="org-left">删除/插入行（在光标的上方插入）</td>
</tr>

<tr>
<td class="org-left">m-s-left/right</td>
<td class="org-left">删除/插入列（在光标的左方插入）</td>
</tr>

<tr>
<td class="org-left">c-c -</td>
<td class="org-left">插入水平分割线</td>
</tr>

<tr>
<td class="org-left">c-c ret</td>
<td class="org-left">插入水平分割线并跳到下一行</td>
</tr>

<tr>
<td class="org-left">c-c ^</td>
<td class="org-left">根据当前列排序</td>
</tr>
</tbody>
</table>


<a id="org0f3b562"></a>

## 超链接


### 使用

-   【c-c c-l】编辑连接可将光标置于链接上
-   【c-c c-o】 打开连接


### 外部连接

-   连接外部文件头 http file &#x2026;.


<a id="orgd28e728"></a>

## 待办事项


### 基本操作

-   【s-m-ret】在下面创建todo项，（会生成当前对应的项，没有的话为todo）
-   【c-c c-t】将当前项在todo done null 之间进行切换
-   【s-↑/↓】选择上/下一个todo状态


### 自定义状态

-   可以自定义状态，竖线分割（任务）|（完成项）
-   (setq org-todu-keywords
    
        '((sequence "TODU" "TODUA" "|" "DONE" "DONEA" )))

-   也可以定义多个集合

> (setq org-todu-keywords
> X
>     '((sequence "TODU(t)" "TODUA(a)" "|" "DONE(d)" "DONEF(f)" )
> 
>     (sequence "TODUB(b)" "TODUC(c)" "|"  "DONEG(g)" )))

这样在按下【c-c c-t】的时候就会让你选择用哪一个，可以用括号的快捷键进行选择


### 改变状态时显示时间

-   设置时间日志，转换状态到done显示时间

> (setq org-log-done 'time)

-   自定义的状态可以在快捷键括号里面添加！ 显示时间
    -   【c-c c-s】 设置开始时间
    -   【c-c c-d】设置结束时间


### 优先级

-   【s-↑】提高优先级
-   【s-↓】降低优先级


<a id="org73f3ef1"></a>

## 任务细分

-   在任务后面输入 <code>[/]</code>或者<code>[%]</code>
-   在使用快捷键方式创建任务项时会更改进度
-   大多数情况任务细分采用列表就可以了
-   【s-m-ret】创建下级任务
-   【m-↑】调整任务位置
-   【c-c c-c】改变任务状态

---

作者：qq\_39040148 
来源：CSDN 
原文：<https://blog.csdn.net/qq_39040148/article/details/81029324> 
版权声明：本文为博主原创文章，转载请附上博文链接！


<a id="orgfd681d1"></a>

# 操作技巧


<a id="orge1813fd"></a>

## 快速输入 #+BEGIN\_SRC &#x2026; #+END\_SRC

-   输入<s ，再按TAB
-   新版本中，c-c c-， 后选择


<a id="org1741a47"></a>

## 代码的语法高亮

org-mode在导出成HTML时，可以对代码按照各自的语法进行高亮（只要在 #+begin\_src 后面声明的语言是emacs所 支持的，其实也就是对应的major mode存在，比如声明为 #+begin\_src js2 就要求 js2-mode 是存在的）。

但能不能在编辑的时候，就可以在org-mode里面看到语法高亮的效果呢？答案是肯定的！

> (setq org-src-fontify-natively t)

org-mode在导出成HTML时，可以对代码按照各自的语法进行高亮（只要在 #+begin\_src 后面声明的语言是emacs所支持的，其实也就是对应的major mode存在，比如声明为 #+begin\_src js2 就要求 js2-mode 是存在的）。但能不能在编辑的时候，就可以在org-mode里面看到语法高亮的效果呢？答案是肯定的！

> (setq org-src-fontify-natively t)

不过没有看到这个设置的更详细说明（我也没来看代码），在org-mode的文档中仅仅在Editing source code这一节 看到一句: To turn on native code fontification in the Org buffer, configure the variable org-src-fontify-natively. 另外，Pretty fontification of source code blocks这篇文档里有效果图:
[效果图](file:///Users/chenyiqing/Library/Mobile%20Documents/com~apple~CloudDocs/.Trash/OneDrive/my_note(emacs%E7%89%88)/pic/fontified-src-code-blocks.png)


<a id="org9ad94c5"></a>

## 在org-mode中实时显示图片

执行 M-x org-display-inline-images


<a id="org766e406"></a>

## 导出成HTML时的一些问题和技巧


### 生成目录表

如果想在导出成HTML时在文档前面生成一个章节目录表（Table of Contents），那么可以在文件头部的 OPTIONS 里面添加 toc:t 参数


也可以设置 org-export-with-toc 这个变量

> (setq org-export-with-toc t)

如果只想针对前面两个级别生成目录表，可以设置该值为相应的数字


### 为每个分节的标题添加标号

导出成HTML时，如果不自定义css（这个高级话题留待下次再说），那么h1, h2, h3各个级别的标题只会字体大小有 点不同，不会呈现不同颜色，不会有缩进，于是阅读起来各节之间的关系就搞不清楚了。可以设置 org-export-with-section-numbers 让导出时为各章节的标题添加 1.2.3 这样的


### 禁用下划线转义

org-mode的文档在导出到html时，有一个挺烦人的问题就是 abc\_def 会变成 abcdef，这其实是一种类似TeX的 写法，主要也就是在少数场景下有意义（其实与之相伴的还有一个 10^24 会变成 1024，不过这个对我影响不 大，因为我很少会用到这种写法）。

关闭这个功能的方法是在org文件头部的 OPTIONS 里面添加 ^:nil:


参考: Export settings - The Org Manual

上面的方法是针对当前文件的，如果想针对所有文件缺省关闭这个功能，需要在 ~/.emacs 中设置:

(setq-default org-use-sub-superscripts nil)


<a id="orgcb496a1"></a>

## 让不同级别的标题采用不同大小的字体

我从vim转到Emacs的其中一个原因是Emacs的GUI版本支持同时使用多种字体，比如上面的截图中就可以看到标题采 用了较大的字体。而以前对Emacs不太熟悉时，试用 color-theme-tangotango 期间无意中发现它能让 org-mode 的各种标题用不同大小的字体显示，还以为是比较神奇的功能，而不愿意切换到其他的theme去。

其实定制一下 org-level-1, org-level-2 等face的 height 属性就可以了（不过如果你用了其它theme的话， 要在加载这些theme之后再执行一遍下面这些配置，或者你把它们放在 org-mode-hook 中去执行）:

(set-face-attribute 'org-level-1 nil :height 1.6 :bold t)
(set-face-attribute 'org-level-2 nil :height 1.4 :bold t)
(set-face-attribute 'org-level-3 nil :height 1.2 :bold t)

也可以直接打开该theme的el源文件修改.


<a id="orge2b6e24"></a>

## 修改org的标记样式

-   安装org-bullets
-   相关代码
    
        (require 'org-bullets)
        (add-hook 'org-mode-hook #'org-bullets-mode)
        
        (setq org-bullets-bullet-list '("♨" "❀" "✿" "☯" "※" "☭" "☣"))
        
        
        ;;设置折叠式不再显示「…」
        ;;(setq org-ellipsis "。。。")


<a id="org877dd4e"></a>

## 一个非常有用的命令 customize

m-x 输入customize，根据补全，选择相关的自定义


<a id="orgd13b9fb"></a>

# 常用的格式

Emacs23以后的版本默认都支持org-mode。当用Emacs打开.org后缀的文件，会默认用org-mode来处理。

下面是一些常用的格式：

> \#<a id="orge5ef31a"></a>标题


<a id="orge8c1b19"></a>

## 文字格式

-   **粗体**
-   *斜体*
-   <del>删除线</del>
-   <span class="underline">下划线</span>
-   下标: H\_2 O
-   上标: E=mc^2
-   等宽字: `git` `git`


<a id="orgb7504a7"></a>

## 列表

-   无序列表以'-', '+', '\*'开头
-   有序列表以'1.'或者'1)'开头
-   描述列表用'::'将项和描述分开
-   有序列表和无序列表都以缩进表示层级。只要对齐缩进，不管是换行还是分块都认为是处于当前列表项。
    1.  我是有序列表
    2.  我也是


<a id="orgb764069"></a>

## 表格

你可能认为要录入这样的表格很繁琐，实际上你只需要输入表头“|Name|Pone|Age”之后，按C-c RET,就可以生成整个表格结

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<thead>
<tr>
<th scope="col" class="org-left">Name</th>
<th scope="col" class="org-left">Value</th>
</tr>
</thead>
<tbody>
<tr>
<td class="org-left">C-c 竖线</td>
<td class="org-left">创建表</td>
</tr>

<tr>
<td class="org-left">C-c C-c</td>
<td class="org-left">调整表格，不移动光标</td>
</tr>

<tr>
<td class="org-left">TAB</td>
<td class="org-left">移动到下一区域，必要时新建一行</td>
</tr>

<tr>
<td class="org-left">S-TAB</td>
<td class="org-left">移动到上一区域</td>
</tr>

<tr>
<td class="org-left">RET</td>
<td class="org-left">移动到下一行，必要时新建一行</td>
</tr>
</tbody>
</table>

超链接

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<thead>
<tr>
<th scope="col" class="org-left">Name</th>
<th scope="col" class="org-left">Value</th>
</tr>
</thead>
<tbody>
<tr>
<td class="org-left">C-c C-l</td>
<td class="org-left">创建或修改链接</td>
</tr>

<tr>
<td class="org-left">C-c l</td>
<td class="org-left">保存链接</td>
</tr>
</tbody>
</table>

\*\* 代码


### 代码块：

    1  int main()                                                                                                                   
    2  {                                                                                                                            
    3      printf("hello emacs org");                                                                                               
    4  }                                                                                                                            


### 在文本中嵌入代码：

这是一段文本 `codes here` 这又是一段文本


<a id="org68396b1"></a>

## 导出

做好准备工作后，就可以导出了。使用命令：  
C-c C-e  
然后选择相应的格式，就可以导出对应的文件了。
 注：

1，在使用org-mode写文档时，不会自动换行，使用M-x toggle-truncate-lines切换换行与不换行

2，在头部加入#+OPTIONS: ^:nil，强制使它不转义"\_"符号


<a id="orgd4cea1b"></a>

# 带缩进的显示方式

使用m-x org-indent-mode 切换带缩进的显示方式。

如果想在打开时进入该模式，在文档头部增加 ：


<a id="org12cff02"></a>

# 大纲管理文档的进阶


<a id="org78b88a8"></a>

## 标签定义     :VM:

1.  对于信息的管理，有分类和标签两种方式

> 1.  分类：
>     形式固定，很少变化
>     树状结构，结构清晰
>     过于简单，不能表达复杂信息
> 2.  标签：
>      随时附加，查找方便
>     多维度

1.  标签的特点
    org的标签自动按照大纲树继承，即子标题自动继承父标题的标签。 使用:tag:表示，例如:
    
    > -   meeting  :work:
    > 
    > **\* title   :boss:
    > \*\*** TODO prepare list  :action:
2.  如果希望文件内所有文档都具有某些标签，在开头定义元数据：
    
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="org-left" />
    
    <col  class="org-left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="org-left">快捷键</td>
    <td class="org-left">描述</td>
    </tr>
    
    <tr>
    <td class="org-left">c-c c-q</td>
    <td class="org-left">创建标签</td>
    </tr>
    
    <tr>
    <td class="org-left">c-c c-c</td>
    <td class="org-left">在标题上使用，创建标签</td>
    </tr>
    
    <tr>
    <td class="org-left">&#xa0;</td>
    <td class="org-left">&#xa0;</td>
    </tr>
    </tbody>
    </table>


<a id="org4c529b8"></a>

## 预定义标签

在文件开头使用元数据标记， 例如：

> \#+tags： Host（h）  VM（v）
> \#+tags：meeting（m） work  home

提醒： 更改后在定义处记得使用C-c C-c 激活修改， 否则无法显示。 同时，可以通过变量org-tag-alist来创建全局标签列表。如果你已经用org-tag-alist定义了喜欢的全局标签，但又想在一个特定的文件中使用动态标签，那么可以通过添加一个空的tags选项到这个文件来达到目的：   #+tags：

默认情况下，org使用mini buffer 输入标签，如果希望使用一个键来完成选择，需要为标签提供唯一的字符，即 Host（h），在配置文件中这样配置：

> (setq org-tag-alist '(("@host" . ?h) ("@vm" . ? v ) ("@switch" . ?s)))

如果希望标签仅仅和当前使用的文件关联，使用 @Host（h），换行可加入\n或者多行配置标签支持分组，类似单选，允许多个分组

配置文件中设置组参考以下例子：

> (setq org-tag-alist '((:startgroup . nil)
>                       ("@host" . ?h) ("@vm" . ?v)
>                       ("@docker" . ?d)
>                       (:endgroup . nil)
>                       ("switch" . ?s) ("firewall" . ?firewall)))


<a id="orgcf89394"></a>

## 标签搜索

建立好了tag系统，可以将相关信息收集到一个表中.

C-c / m 或 C-c \\ 标准检索， 按照tag进行检索
C-c a m 按标签搜索多个文件 需要把文件加入全局agenda


# Footnotes

<sup><a id="fn.1" href="#fnr.1">1</a></sup> 脚注测试

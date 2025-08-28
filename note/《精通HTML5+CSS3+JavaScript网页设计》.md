# Table of Contents

1.  [第一章概述](#org13322e6)
    1.  [Web基础](#org29ca968)
        1.  [关于web常见的三种定义](#org97f6531)
        2.  [几个关键词](#org1804e34)
2.  [第2章 HTML5 网页文档结构](#org65ad7f3)
    1.  [2.1 Web标准](#org592d764)
        1.  [2.1.1 Web标准概述](#org6388509)
        2.  [2.1.2 Web标准规定的内容](#org52c43d0)
    2.  [2.2 HTML基本标记](#org4beb8e5)
        1.  [2.2.1 文档类型说明](#orgce2aa72)
        2.  [2.2.2 HTML标记](#orgc942fb4)
        3.  [2.2.3 头标记head](#org9d95109)
        4.  [2.2.4 网页的主体标记body](#orgd6885ab)
        5.  [2.2.5 页面的注释标记<!&#x2013;注释的内容&#x2013;>](#orga212075)
3.  [第3章 HTML5 网页中的文本和图像](#org681ff4c)
    1.  [3.1 添加文本](#org4139eb9)
        1.  [3.1.1 普通文本](#org37a8367)
        2.  [3.1.2 特殊文字符号（数学、物理化学等特殊符号）](#org0abca64)
        3.  [3.1.3 文本特殊样式](#orgc56bcf1)
    2.  [3.2 文本的排版](#org3439cd0)
        1.  [3.2.1 换行标记<br/>和段落标记<p>](#orge5aa518)
        2.  [3.2.2 标题标记<h1> ~ <h6>](#org4db2de0)
    3.  [3.3 文字列表](#org3424eaa)
        1.  [3.3.1 无序列表<ul>](#org5a619e5)
b    4.  [3.3.2 有序列表<ol>](#org046ffe3)
    5.  [3.4 网页中的图像](#org0fc7550)
        1.  [3.4.1 支持的图片格式](#org1b75777)
        2.  [3.4.2 使用路径](#orge7537c3)
        3.  [3.4.3 图像标记<img>](#org9c38e42)
4.  [第四章 用HTML5建立超链接](#org7094f29)
    1.  [4.1 URL的概念](#orgc0b2818)
        1.  [URL的格式](#org36d9915)
        2.  [URL的类型](#orge10c55b)



<a id="org13322e6"></a>

# 第一章概述


<a id="org29ca968"></a>

## Web基础


<a id="org97f6531"></a>

### 关于web常见的三种定义

1.  表现形式
    采用超文本和超媒体的信息组织方式，将信息的链接扩展到整个intenet上。 Web就是一种超文本信息系统，Web的一个主要概念就是超文本链接，它使得文本不再像一本书一样是固定的、线性的，而是可以从一个位置跳到另外的位置。 通过这种方式可以从中获取更多的信息，也可以转到别的主题上，这种多连接性成为Web。
2.  环球网
    在不同的领域，Web有不同的含义，对于普通用户，Web仅仅是互联网的使用环境、氛围、内容等； 而对于网站制作、设计、开发工程师来讲，它是一系列技术（网站前端开发、后台程序、美工、数据库等技术）的复合总称
3.  网页
    网页是网站中的一个页面，通常是HTML（HyperText Markup Language）格式（文件扩展名为：.html、.htm、.asp、.aspx、.php、.jsp）,使用图像文档来提供图画，需要透过浏览器来阅读。


<a id="org1804e34"></a>

### 几个关键词

1.  超文本（HyperText）
    超级文本的简称。 一种全局性的信息结构，她将文档中的不同部分通过关键字建立链接，使信息得以用交互的方式进行搜索。
2.  超媒体（HyperMedia）
    超级媒体的简称。 超媒体是一种采用非线性网状结构对块状多媒体信息（包括文本、图像、视频等）进行组织和管理的定义。


<a id="org65ad7f3"></a>

# 第2章 HTML5 网页文档结构


<a id="org592d764"></a>

## 2.1 Web标准


<a id="org6388509"></a>

### 2.1.1 Web标准概述


<a id="org52c43d0"></a>

### 2.1.2 Web标准规定的内容

Web标准不是某一个标准，而是一系列标准的集合。网页主要由三部分组成：结构（Structure）、表现（Presentation）和行为（Behavior）。对应的标准也分三方面：结构标准语言主要包括XHTML和XML，表现标准语言主要包括CSS，行为标准主要包括对象模型（如W3C DOM）、ECMAScript等。

1.  结构标准语言
    
    1.  XML
        XML是The Extensible Markup Language（可扩展标识语言）的简写。设计的最初目的是弥补HTML的不足，后来逐渐用于网络数据的转换和描述。
    
    2）XHTML
      XHTML是 The Extensible HyperText Markup Language（可扩展超文本标记语言）的缩写，其目的是实现HTML向XML的过度。
2.  实现标准语言
    CSS是Cascading Style Sheets（层叠样式表）的缩写，目的是以CSS取代HTML表格式布局、帧和其他表现的语言，从而实现外观和结构的分离。
3.  行为标准
    1）DOM
      DOM是Document Object Model（文档对象模型）的缩写，是一种浏览器、平台、语言的接口，使得用户可以访问页面其他的标准组件。简单的说，DOM解决了Netscaped的JavaScript和Microsoft的JScript之间的冲突。
    2）ECMAScript


<a id="org4beb8e5"></a>

## 2.2 HTML基本标记

HTML文档最基本的结构主要包括文档类型说明、HTML文档开始标记、元信息、主体标记和页面注释标记。


<a id="orgce2aa72"></a>

### 2.2.1 文档类型说明

HTML对文档类型进行了简化
<!DOCTYPE html>
DOCTYPE申明需要出现在HTML文件的第一行。


<a id="orgc942fb4"></a>

### 2.2.2 HTML标记

HTML标记以<html>开头，以</html>结尾，文档的所有内容书写在开头和结尾的中间部分，语法格式如下：

    <html>
    ...
    </html>


<a id="org9d95109"></a>

### 2.2.3 头标记head

用于说明文档头部相关信息，一般包括标题信息、元信息、定义CSS样式和脚本代码等。语法格式如下：

    <head>
    ...
    </head>

<head>元素的作用范围是整篇文档，定义在HTML文档头部的内容往往不会在网页上直接显示。

1.  1. 标题标记title

    用来说明页面的用途，显示在浏览器的标题栏中。语法格式如下：
    
        <title>
        ...
        </title>

2.  2. 元信息标记meta

    提供有关页面的元信息（meta-information)，比如针对搜索引擎和更新频度的描述和关键词。
    <meta>标记位于文档的头部，不包含任何内容。<meta>标记的属性定义了与文档相关联的名称/值。
    <meta>标记提供的属性：
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="org-left" />
    
    <col  class="org-left" />
    
    <col  class="org-left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="org-left">属性</td>
    <td class="org-left">值</td>
    <td class="org-left">描述</td>
    </tr>
    
    <tr>
    <td class="org-left">charset</td>
    <td class="org-left">character encoding</td>
    <td class="org-left">定义文档的字符编码</td>
    </tr>
    
    <tr>
    <td class="org-left">content</td>
    <td class="org-left">some<sub>text</sub></td>
    <td class="org-left">定义与http-equiv或name属性相关的元信息</td>
    </tr>
    
    <tr>
    <td class="org-left">http-equiv</td>
    <td class="org-left">content-type;expires;refresh;set-cookie</td>
    <td class="org-left">把content属性关联到HTTP头部</td>
    </tr>
    
    <tr>
    <td class="org-left">name</td>
    <td class="org-left">author；description；keywords；generator；revised；others</td>
    <td class="org-left">把content属性关联到 一个名称</td>
    </tr>
    </tbody>
    </table>
    
    1.  charset属性
    
        <meta charset="ISO-8859-1" >
    
    常用的编码方式：
    
    -   中文：GB2312、UTF-8
    -   英文：ISO-8859-1
    
    1.  搜索引擎关键字
    
    在早期，meta keywords关键字对搜索引擎的排名算法起到一定的作用，也是很多人进行网页优化的关键。关键字在浏览时是看不到的，使用格式如下：
    
        <meta name="keywords" content="关键字1，关键字2，……" />
    
    说明：
    
    -   不同的关键字之间，用英文逗号隔开；
    -   是keywords，不是keyword；
    -   关键字标签中的内容应该是一个个的短语，而不是一段话；
    
    关键字标记keywords，曾经是搜索引擎排名中很重要的因素，但现在已经被很多搜索引擎完全忽略。如果我们加上这个标记，对网页的综合表现没有坏处，不过，如果使用不当，对网页非但没有好处，还有欺诈的嫌疑。使用keywords的注意点：
    
    -   关键字标记中的内容要与网页的核心内容相关，确定关键字出现在网页文本中；
    -   使用用户易于通过搜索引擎搜索的关键字，过于生僻的词汇不太适合做meta标记中的关键字；
    -   不要重复使用关键字，否则可能会被搜索引擎处罚；
    -   关键字一般不要超过5个；
    -   每个网页的关键字应该不一样；
    
    3） 页面描述description
    用来简陋描述网页的主要内容，通常被搜索引擎用于搜索结果页上展示给最终用户看的一段文字片段。页面描述在网页中是不显示出来的，使用格式如下：
    
        <meta name="description" content="网页的介绍" />
    
    1.  页面定时跳转
    
    使用http-equiv属性的refresh可以使网页在经过一定时间后自动刷新跳转到新页面，content值为更新时间。语法格式如下：
    
        <meta http-equiv="refresh" content="5;[url=网址]" /> 
        说明：5为5秒，网址是可选项，忽略的话，表示只刷新，不跳转。


<a id="orgd6885ab"></a>

### 2.2.4 网页的主体标记body


<a id="orga212075"></a>

### 2.2.5 页面的注释标记<!&#x2013;注释的内容&#x2013;>


<a id="org681ff4c"></a>

# 第3章 HTML5 网页中的文本和图像


<a id="org4139eb9"></a>

## 3.1 添加文本

网页中的文本可以分为两类：普通文本和特殊字符文本。


<a id="org37a8367"></a>

### 3.1.1 普通文本


<a id="org0abca64"></a>

### 3.1.2 特殊文字符号（数学、物理化学等特殊符号）

html中，特殊字符以&开头，以；结尾，中间为相关字符编码。常用的特殊字符：

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">符号</td>
<td class="org-left">说明</td>
<td class="org-left">HTML编码</td>
</tr>

<tr>
<td class="org-left">&lt;</td>
<td class="org-left">小于</td>
<td class="org-left">&amp;lt;</td>
</tr>

<tr>
<td class="org-left">&gt;</td>
<td class="org-left">大于</td>
<td class="org-left">&amp;gt;</td>
</tr>

<tr>
<td class="org-left">&amp;</td>
<td class="org-left">&amp;符号</td>
<td class="org-left">&amp;amp;</td>
</tr>

<tr>
<td class="org-left">"</td>
<td class="org-left">双引号</td>
<td class="org-left">&amp;quot;</td>
</tr>

<tr>
<td class="org-left">&#xa0;</td>
<td class="org-left">空格</td>
<td class="org-left">&amp;nbsp;</td>
</tr>
</tbody>
</table>


<a id="orgc56bcf1"></a>

### 3.1.3 文本特殊样式

1.  重要文本（加粗）

\*#+BEGIN<sub>QUOTE</sub>
<b></b>、<em></em>、<strong></strong>
\#+END<sub>QUOTE</sub>

1.  斜体文本

> <i></i>

1.  上标和下标

> -   上标：<sup>
> -   下标：<sub>


<a id="org3439cd0"></a>

## 3.2 文本的排版


<a id="orge5aa518"></a>

### 3.2.1 换行标记<br/>和段落标记<p>

换行<br/>，换段<p></P>

1.  1. <br/>标记

    是一个单标记，是break的缩写。

2.  2. 段落标记<p></p>


<a id="org4db2de0"></a>

### 3.2.2 标题标记<h1> ~ <h6>


<a id="org3424eaa"></a>

## 3.3 文字列表


<a id="org5a619e5"></a>

### 3.3.1 无序列表<ul>

列表中的列表项：<li>。语法结构如下：

    <ul>
       <li>列表项1</li>
       <li>列表项2</li>
           ……
    </ul>

列表可以嵌套


<a id="org046ffe3"></a>

## 3.3.2 有序列表<ol>

    <ol>
    <li>....</li>
    ...
    </ol>


<a id="org0fc7550"></a>

## 3.4 网页中的图像


<a id="org1b75777"></a>

### 3.4.1 支持的图片格式

-   jpg （不支持透明）
-   gif （支持透明，256色）
-   png （综合gif和jpg的优点，支持透明）


<a id="orge7537c3"></a>

### 3.4.2 使用路径

-   html支持文本、图片、音频、视频等，只有文本是写在html中的，其它都是通过路径嵌入的。路径的作用是定位一个文件的位置。两种路径：
    
    -   相对路径（常用）
    
    以当前文件的路径为基准位置
    
    -   绝对路径
-   网络分隔符
    -   “\\” —— 本地分隔符(windows用)
    -   “/” —— 网络分隔符（常用）（unix）


<a id="org9c38e42"></a>

### 3.4.3 图像标记<img>

-   <img>的属性和值

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">属性</td>
<td class="org-left">值</td>
<td class="org-left">描述</td>
</tr>

<tr>
<td class="org-left">alt</td>
<td class="org-left">text</td>
<td class="org-left">定义有关图形的文本描述（提示文字）</td>
</tr>

<tr>
<td class="org-left">src</td>
<td class="org-left">URL</td>
<td class="org-left">要显示的图像的URL</td>
</tr>

<tr>
<td class="org-left">width</td>
<td class="org-left">pixels%</td>
<td class="org-left">设置图像的宽度</td>
</tr>

<tr>
<td class="org-left">height</td>
<td class="org-left">pixels%</td>
<td class="org-left">设置图像的高度</td>
</tr>
</tbody>
</table>

-   设置图像的提示文字alt、


<a id="org7094f29"></a>

# 第四章 用HTML5建立超链接


<a id="orgc0b2818"></a>

## 4.1 URL的概念

网络中的计算机是通过ip地址区分的，如果需要访问网络中某台计算机中的资源，首先要定位到这台计算机。IP地址由32位二进制代码（即32个0/1）组成，数字之间没有意义，且不容易记忆。为了方便记忆，现在计算机一般采用域名的方式来寻址，即在网络上使用一组有意义的字符组成的地址代替IP地址来访问网络资源。


<a id="org36d9915"></a>

### URL的格式

URL由四个部分组成，即"协议"、”主机名“、”文件夹名“、”文件名“


<a id="orge10c55b"></a>

### URL的类型

-   相对URL
-   绝对URL


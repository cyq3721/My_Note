
# Table of Contents

1.  [第一章 PHP快速入门](#org4afb03a)
    1.  [使用php标记](#org687b54d)
    2.  [PHP中的空格](#orge0c8f89)
    3.  [PHP中的注释](#orgdd7eef5)
    4.  [PHP的数据类型](#org49a1dee)
    5.  [类型强度](#orgbee044e)
    6.  [date函数](#org27a2108)
    7.  [声明和使用常量](#org87ff455)
    8.  [PHP中的比较操作符](#org122ab78)
    9.  [PHP中的逻辑操作符](#org6206a7e)
    10. [三元操作符 （ ？ ： ）](#org7d3b22a)
    11. [数字格式函数number<sub>format</sub>() 【来自php的math库】](#org0da8bd7)
    12. [htmlspecialchars()函数](#org35fc6cd)
    13. [错误抑制操作符@](#org8dd2c60)
    14. [执行操作符](#orgc338259)
    15. [PHP的数据类型](#org80239cd)
    16. [常量的声明define](#org91c7e41)
        1.  [常量的声明](#org1f50c20)
        2.  [常量的使用](#org8c6a639)
        3.  [switch …… case语句 （同C语言）](#org7279636)
    17. [输出格式控制number<sub>format</sub>($val, 位数)](#orgf579348)
    18. [declare结构](#orgca98f49)
2.  [第2章 数据的存储与检索](#org6784969)
    1.  [本章主要内容](#orga7a6551)
    2.  [保存数据以便后期使用](#orga3efdbf)
    3.  [存储和检索订单](#org57c6a42)
    4.  [文件处理](#org918074a)
        1.  [写入文件](#org9fbfcd7)
        2.  [读出文件](#orge6583f5)
    5.  [打开文件](#org548f376)
        1.  [选择文件模式](#orgf236c6e)
        2.  [使用fopen（）打开文件](#orgebd176f)
        3.  [写文件](#org7021a52)
        4.  [fgets() fgetss() fgetcsv()](#org49ac7f9)
        5.  [通过FTP或HTTP打开文件](#org896a16a)
        6.  [解决打开文件时可能遇到的问题](#orgb475535)
        7.  [文件的锁定flock（）](#orgfb17145)
3.  [第3章 使用数组](#org485ca86)
    1.  [本章内容](#orgd95eee0)
    2.  [数字索引数组p](#org33de9b3)
        1.  [数字索引数组的初始化](#org51fb640)
        2.  [访问数组内容](#org4a77b6d)
        3.  [使用循环访问数组](#org027d774)
    3.  [使用不同索引的数组（相关数组）](#orgdcd146b)
        1.  [初始化相关数组1](#org540440d)
        2.  [初始化相关数组2](#orgfe5fcd6)
        3.  [访问相关数组](#orgd3cd912)
        4.  [使用循环语句访问数组元素（foreach、list、each）](#orge9c8d1b)
        5.  [数组操作符](#org36b9fd4)
        6.  [多维数组](#orga656ea8)
        7.  [数组的排序](#org65ab6de)
        8.  [多维数组的排序](#orgbe7e2bf)
        9.  [对数组进行重新排序（随机）](#orga5c071c)
        10. [从文件载入数组](#org531799f)
4.  [第4章 字符串操作和正则表达式](#orgb46a0fa)
    1.  [本章要点](#org42e669e)
    2.  [创建一个智能表单邮件](#orgf24e82b)
        1.  [mail（）函数](#org96a6ef9)
    3.  [字符串的格式化](#orgf4888d5)
        1.  [字符串的整理：chop（）、ltrim（）和trim（）](#org6078bd2)
        2.  [格式化字符串以便显示](#org6a850fd)
        3.  [格式化字符串以便存储：addslashes（）和stripslashes（）](#org34a44e0)
        4.  [字符串连接和字符串的分割](#orga10d514)
        5.  [格式化字符串以便存储：addslashes（）和stripslashes（）](#org7d4bd82)
    4.  [字符串的比较](#org27a0fab)
        1.  [字符串的排序：strcmp（）、strcasecmp（）和strnatcmp（）](#org4500bd3)
        2.  [使用strlen（）计算字符串长度](#orgc410544)
    5.  [字符串函数匹配和替换字符串](#orgd8d3e65)
        1.  [在字符串中查找字符串](#org7228dd3)
        2.  [查找子字符串的位置](#org75151bc)
        3.  [替换字符串](#orgf19b422)
    6.  [正则表达式介绍](#org604eede)
        1.  [基础知识](#org4caec65)
        2.  [字符集7和类](#org7b6b059)
5.  [第5章 代码重用与函数编写](#org45fc668)
    1.  [本章内容](#org38e5e36)
    2.  [代码重用的好处](#orga11624c)
    3.  [使用require（）和include（）函数](#org15d78ba)
        1.  [两者的差异](#org85ea595)
        2.  [require<sub>once</sub>()和include<sub>once</sub>()](#orgf422a25)
    4.  [理解作用域](#org18acedf)
    5.  [参数的引用传递和值传递](#org28ace23)
    6.  [使用return关键字](#org2177f23)
    7.  [关于本章实例 &#x2013;home.html&#x2013; 的笔记](#org82fc0d5)
        1.  [在html文件内部编写css](#orgeed3524)
        2.  [表格table的处理](#org5f7fb6d)
6.  [第6章 面向对象的php](#org45ed01f)
    1.  [本章主要内容](#org0309557)
    2.  [理解面向对象的概念](#org827b9eb)
        1.  [类和对象](#orgef23774)
        2.  [多态性](#org519a209)
        3.  [继承](#orga50a814)
        4.  [在PHP中创建类、属性和操作](#org04b9a67)
7.  [第7章 错误和异常处理](#orga8b2eec)
    1.  [本章主要内容](#orgaf63675)
    2.  [异常处理的概念](#org18dcc52)
8.  [第8章 设计web数据库](#orgf584770)
    1.  [本章主要内容](#orgbc3a7f5)
    2.  [关系数据库的概念和术语](#org7c92231)
        1.  [表](#orgfac5c78)
        2.  [列](#org34c4bb1)
        3.  [行](#org011106c)
        4.  [值](#orgd2bd5fd)
        5.  [键（主键和外键）](#org6a6fd56)
        6.  [模式](#org4681d8d)
        7.  [关系](#org6cea534)
    3.  [考虑真实的建模对象](#org0331e9d)
    4.  [避免保存冗余数据](#orgf197779)
    5.  [表格类型的总结](#org58fb3a0)
9.  [第9章 创建Web数据库](#org2e6c755)
    1.  [本章概要](#orgcfe5b7e)
    2.  [使用MySQL监视程序](#org06e2da8)
    3.  [登录到MySQL](#org8c91359)
    4.  [创建数据库和用户](#orgcba77e6)
        1.  [创建数据库](#org2cbb986)
    5.  [设置用于与权限](#org26a12de)
    6.  [MySQL权限系统介绍](#org4b80b74)
        1.  [最少权限原则](#orgf5b9574)
        2.  [创建用户：GRANT命令](#org866718f)
10. [第10章 使用MySQL数据库](#org23433ed)
    1.  [本章主要内容](#org59c9f96)
    2.  [SQL是什么](#org94cd559)
    3.  [在数据库中插入数据](#orgd7c684d)
        1.  [insert语句](#org89e9553)
    4.  [在数据库中获取数据](#orgcaae0d3)
        1.  [select语句](#orgd280a62)
        2.  [按条件获取数据](#orge77c5c3)
        3.  [从多个表中获取数据](#orgeb399db)
        4.  [清空数据表](#org5528b79)
        5.  [删除数据表](#org6a87684)
11. [第11章 使用PHP从Web访问MySQL](#orgad7621c)
    1.  [本章主要内容](#orgabb2925)
    2.  [web数据库架构及工作原理](#org54c9a92)
    3.  [从Web查询数据库](#orgbfce4fe)
        1.  [步骤](#orga26938a)
        2.  [检查并过滤输入数据](#orgf69e887)
        3.  [设置数据库连接](#org1f73c26)
12. [第19章 与文件系统和服务器交互](#orgfe1872d)
    1.  [17.1 上传文件](#org9ee73d7)
        1.  [php.ini中关于文件上传的配置设置](#orgea06c6e)
        2.  [文件上传的html表单](#org3741d57)
        3.  [处理文件的php脚本](#org53cf44a)
13. [第11章 使用PHP从Web访问MySQL数据库](#org7d89a64)
    1.  [从Web查询数据库的基本步骤](#org172d014)
    2.  [检查与过滤用户输入数据](#orge42061e)
        1.  [过滤开始和结尾处的空格（trim（）函数）](#org594d6be)
        2.  [格式化字符串，以便输入到数据库（addslashes（））](#org9de71ca)
    3.  [和数据库建立连接](#org3033df6)
        1.  [面向对象的方法](#orgeb32113)
        2.  [面向过程的方法](#org2d2b72f)
    4.  [查询数据库](#orge0990e2)
        1.  [建立查询语句；](#org018c774)
        2.  [执行查询；](#org99dee9a)
        3.  [检索查询结果](#orgc2b7018)
    5.  [断开数据库连接](#org7452457)
        1.  [释放数据库的连接](#orgacd498b)
        2.  [断开数据库连接](#orge42de8e)
    6.  [将新信息写入数据库](#org13b07fd)
14. [第23章 在PHP中使用会话控制](#org2a55427)
    1.  [本章主要内容](#orgdfe8882)
    2.  [什么是会话控制](#org20b1df2)



<a id="org4afb03a"></a>

# 第一章 PHP快速入门


<a id="org687b54d"></a>

## 使用php标记

以<?php 开始，以?>为结束


<a id="orge0c8f89"></a>

## PHP中的空格

所有的间隔字符（换行、回车、空格、tab），都被认为是空格，多个空格放在一起，只会认为是一个空格。


<a id="orgdd7eef5"></a>

## PHP中的注释

两种注释：

    1. c语言风格的多行注释
       ／* ……
          ……
       */ 
    2. c++风格的单行注释
       ／／……


<a id="org49a1dee"></a>

## PHP的数据类型

-   integer
-   float
-   string
-   Boolean
-   Array
-   Object
-   NULL(空)
-   resource（资源）
-   callable 可以传递给其他函数的函数


<a id="orgbee044e"></a>

## 类型强度

PHP是弱类型语言（动态类型语言），变量的类型由赋给变量的值决定。


<a id="org27a2108"></a>

## date函数

-   用法：date('H:i, jS F');
-   说明：
    -   H 是24小时格式的小时；
    -   i 是分钟（两位数）；
    -   j 是该月的日期，不需要补0；
    -   s 是顺序后缀（比如th）；
    -   F 是月份的全称；


<a id="org87ff455"></a>

## 声明和使用常量

-   常量值一旦被设定后，就不能再更改。使用define函数定义常量。

    define ('TIREPRICE' , 100);

-   常量的引用

引用常量不需要$, 直接使用常量的名称。


<a id="org122ab78"></a>

## PHP中的比较操作符

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">操作符</td>
<td class="org-left">名称</td>
</tr>


<tr>
<td class="org-left">==</td>
<td class="org-left">等于</td>
</tr>


<tr>
<td class="org-left"><code>=</code></td>
<td class="org-left">恒等于</td>
</tr>


<tr>
<td class="org-left">！=</td>
<td class="org-left">不等于</td>
</tr>


<tr>
<td class="org-left">！==</td>
<td class="org-left">不恒等（比较操作）</td>
</tr>


<tr>
<td class="org-left">&lt;&gt;</td>
<td class="org-left">不等</td>
</tr>


<tr>
<td class="org-left">&lt;</td>
<td class="org-left">小于</td>
</tr>


<tr>
<td class="org-left">&lt;=</td>
<td class="org-left">小于等于</td>
</tr>


<tr>
<td class="org-left">&gt;</td>
<td class="org-left">大于</td>
</tr>


<tr>
<td class="org-left">&gt;=</td>
<td class="org-left">大于等于</td>
</tr>
</tbody>
</table>


<a id="org6206a7e"></a>

## PHP中的逻辑操作符

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">操作符</td>
<td class="org-left">名称</td>
<td class="org-left">使用方法</td>
<td class="org-left">结果</td>
</tr>


<tr>
<td class="org-left">!</td>
<td class="org-left">非</td>
<td class="org-left">！$b</td>
<td class="org-left">如果$b是false，则返回true</td>
</tr>


<tr>
<td class="org-left">&amp;&amp;</td>
<td class="org-left">与</td>
<td class="org-left">$a &amp;&amp; $b</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">and</td>
<td class="org-left">与</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">与&amp;&amp;相同，但优先级较低</td>
</tr>


<tr>
<td class="org-left">or</td>
<td class="org-left">或</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">与两竖相同，优先级低</td>
</tr>
</tbody>
</table>


<a id="org7d3b22a"></a>

## 三元操作符 （ ？ ： ）

（$grade >= 50 ? 'Passed' : 'Failed'）


<a id="org0da8bd7"></a>

## 数字格式函数number<sub>format</sub>() 【来自php的math库】

-   number<sub>format</sub>($totalamout , 3) —— 小数点后保留3位


<a id="org35fc6cd"></a>

## htmlspecialchars()函数

-   htmlspecialchars() 函数把预定义的字符转换为 HTML 实体。
-   预定义的字符是：
    -   & （和号）成为 &
    -   " （双引号）成为 "
    -   ' （单引号）成为 '
    -   < （小于）成为 <
    -   > （大于）成为 >


<a id="org8dd2c60"></a>

## 错误抑制操作符@

用法：

    $a = @(57/0)   //抑制了除数为0的错误。

如果在php.ini中启用了PHP的track<sub>errors特性</sub>，错误信息将会保存在全局变量$php<sub>errormsg中</sub>。


<a id="orgc338259"></a>

## 执行操作符

是一对反向单引号(\` \`)，将反向单引号之间的命令当做服务器命令来执行。表达式的值就是命令的执行结果。具体实例如下：

    $out = `ls -la`;
    echo '<pre>.$out.</pre>';


<a id="org80239cd"></a>

## PHP的数据类型

-   integer
-   float
-   string
-   boolean
-   array
-   object
-   NULL
-   resource
-   callable


<a id="org91c7e41"></a>

## 常量的声明define


<a id="org1f50c20"></a>

### 常量的声明

define ('TIREPRICE', 100);


<a id="org8c6a639"></a>

### 常量的使用

不需要使用$符号，直接用变量名称。


<a id="org7279636"></a>

### switch …… case语句 （同C语言）

    switch ($find){
      case "a" :
          echo "   ";
      case "b" :
          echo "   ";
      default :
          echo "   ";
    }


<a id="orgf579348"></a>

## 输出格式控制number<sub>format</sub>($val, 位数)


<a id="orgca98f49"></a>

## declare结构


<a id="org6784969"></a>

# 第2章 数据的存储与检索


<a id="orga7a6551"></a>

## 本章主要内容

-   保存内容以便后期使用
-   打开文件
-   创建文件并写入文件
-   关闭文件
-   读文件
-   给文件加锁
-   其它有用的文件操作函数
-   更好的方式：数据管理系统


<a id="orga3efdbf"></a>

## 保存数据以便后期使用

存储数据有两种基本方法：保存到普通文件（flat file）和保存到数据库中


<a id="org57c6a42"></a>

## 存储和检索订单


<a id="org918074a"></a>

## 文件处理


<a id="org9fbfcd7"></a>

### 写入文件

-   打开文件
-   将数据写入文件
-   关闭文件


<a id="orge6583f5"></a>

### 读出文件

-   打开文件
-   从文件中读出数据
-   关闭文件


<a id="org548f376"></a>

## 打开文件

使用fopen（）函数，指定文件模式。


<a id="orgf236c6e"></a>

### 选择文件模式

打开文件的三种模式：

-   打开文件为只读、只写或者读和写
-   如果是写入文件，可以选择覆盖原文件，或者在原文件末尾追加新文件，还可
    以选择在该文件存在的前提下，终止程序的执行
-   如果希望在一个区分来二进制方式和纯文本方式的系统写上一个文件，还必须
    指定采用的方式。

fopen（）支持以上三种的组合。


<a id="orgebd176f"></a>

### 使用fopen（）打开文件

    $fp=fopen("$DOCUMENT_ROOT/../orders/orders.txt", 'w');

说明：

-   第一个参数代表文件路径（相对路径）| r    | 只读     |

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">r+</td>
<td class="org-left">只读</td>
</tr>


<tr>
<td class="org-left">w</td>
<td class="org-left">只写</td>
</tr>


<tr>
<td class="org-left">w+</td>
<td class="org-left">只写</td>
</tr>


<tr>
<td class="org-left">x</td>
<td class="org-left">谨慎写</td>
</tr>


<tr>
<td class="org-left">x+</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">a</td>
<td class="org-left">追加</td>
</tr>


<tr>
<td class="org-left">a+</td>
<td class="org-left">追加</td>
</tr>


<tr>
<td class="org-left">b</td>
<td class="org-left">二进制</td>
</tr>
</tbody>
</table>

-   解决打开文件时可能遇到的问题
    -   打开文件时可能会遇到文件权限问题， 需要对文件赋予权限
    -   使用@符号抑制错误，使用@抑制错误后，需要自己编写错误处理代码，应对

错。如果已经在php.ini中启用了php的track<sub>errors特性</sub>，错误相信将被保存在
全变量$php<sub>errormsg中</sub>。


<a id="org7021a52"></a>

### 写文件

1.  fwrite（）函数

使用fwrite（）或者fputs（），fputs（）是fwrite（）的别名函数。fwrite（）的调用方式如下：

> fwrite($fp, $outputstring);

将保存在$outputstring中的字符串写入到$fp指向的文件中。

1.  file<sub>put</sub><sub>contents</sub>()

这个函数是fwrite（）的替换函数， 可以不需要调用fopen（）函数打开文件，就将字符串写入， 调用方式如下：

> int file<sub>put</sub><sub>contents</sub>( string filename,
>                              string data,
>                              [ int flags,
>                                resource context ]
>                              )

1.  fwrite()的参数

fwrite()的原型：

> int fwrite ( resource handle, string string [, int length ]);

第三个参数length是写入的最大字符数。  如果给出这个参数，fwrite（）将向handle指向的文件写入字符串，写入长度为length。 

1.  strlen（）函数

获取字符串的长度


<a id="org49ac7f9"></a>

### fgets() fgetss() fgetcsv()

-   fgets()每次读取一行数据
-   fgetss()可以过滤字符串中的php和html标记
-   fgetcsv() 读取一行，将结果返回数组


<a id="org896a16a"></a>

### 通过FTP或HTTP打开文件


<a id="orgb475535"></a>

### 解决打开文件时可能遇到的问题

-   文件权限问题

chmod 777 创建最高的读写权限


<a id="orgfb17145"></a>

### 文件的锁定flock（）

-   避免两个客户同时打开同一个文件产生问题，使用文件锁定锁定文件。
-   flock（文件，锁定模式，可选）
-   锁定模式

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">操作值</td>
<td class="org-left">意义</td>
</tr>


<tr>
<td class="org-left">LOCK<sub>SH</sub></td>
<td class="org-left">读操作锁定，文件可以共享，其它人可以读该文件</td>
</tr>


<tr>
<td class="org-left">LOCK<sub>EX</sub></td>
<td class="org-left">写操作锁定，此时文件不被共享，其它人无法读取</td>
</tr>


<tr>
<td class="org-left">LOCK<sub>UN</sub></td>
<td class="org-left">释放已有的锁定</td>
</tr>
</tbody>
</table>


<a id="org485ca86"></a>

# 第3章 使用数组


<a id="orgd95eee0"></a>

## 本章内容

-   数字索引数组
-   非数字索引数组
-   数组操作符
-   多维数组
-   数组排序
-   数组函数


<a id="org33de9b3"></a>

## 数字索引数组p


<a id="org51fb640"></a>

### 数字索引数组的初始化

1.  索引默认从0开始

2.  初始化方式1:

        $products = array('tires', 'oil' 'spark plugs');

3.  初始化方式2：（php5.4开始支持）

        $products = ['tires', 'oil' 'spark plugs'];

4.  array（）结构简介

    array()是一个语言结构，不是函数。  可以简单将数组复制给另一个数组。

5.  使用rang（）函数自动创建数字数组

        $number = range(1,10);     //创建一个1-10的数字数组
        $odds = range(1,10,2);     //创建一个1-10之间的偶数数组
        $letters = range('a','z'); //创建一个a-z的字符数组


<a id="org4a77b6d"></a>

### 访问数组内容

使用$products[0],$products[1]……来访问数组$products的内容。php的数组不需要预先初始化或创建，在第一次使用的时候会自动创建。使用$products[n]可以直接扩充数组。


<a id="org027d774"></a>

### 使用循环访问数组

1.  使用for循环访问数组

        for($i=0;$i<3;$i++){
            echo "$products[$i]";
        }

2.  使用foreach访问数组

        foreach ($products as $current){
            echo $current." ";
        }
        // 说明：每次循环都取出数组中的值，并保存到变量$current中，一直到数组的最后一个元素，结束循环


<a id="orgdcd146b"></a>

## 使用不同索引的数组（相关数组）


<a id="org540440d"></a>

### 初始化相关数组1

    $price = array('tires'=>100, 'oil'=>10, 'spark plugs'=>4);

说明：相关数组由键和相对应的值组成。


<a id="orgfe5fcd6"></a>

### 初始化相关数组2

    $price[‘tire’] = 20;


<a id="orgd3cd912"></a>

### 访问相关数组

    $price['tire'];


<a id="orge9c8d1b"></a>

### 使用循环语句访问数组元素（foreach、list、each）

1.  foreach循环

        foreach($price as $key => $value)
           echo $key.'=>' .$value.<br>';

2.  each（）结构

        while($element = each($price))
        {
          echo $element['key'];
          echo '-';
          echo $element['value'];
          echo '<br>';
        }

3.  说明：

    -   each()一次返回一个包含两个元素的数组，一个元素是被执行数组的索引，一个
    
    元素是该索引对应的值，利用each（）的这个特性，可以配合list（）函数来访
    问数组：
    list($product,$price) = each($prices);
    
    再利用循环，可以遍历所有的数组元素：
    while(list($product,$price) = each($prices))
    {
       echo "$product - $price<br>";
    }
    
    -   each()将改变数组的指针位置，若要再次使用该数组，需要使用reset（）函
        数，如reset($prices),将数组$prices的指针回到初始位置。


<a id="org36b9fd4"></a>

### 数组操作符


<a id="orga656ea8"></a>

### 多维数组

数字索引的多维数组，可以直接使用嵌套的for循环来访问


<a id="org65ab6de"></a>

### 数组的排序

1.  使用sort函数——按升序排列（大写字母排在小写字母的前面）

        $products = array('tires', 'oil', 'spark plugs');
        sort($products);
    
    sort()将对数组内的三个元素按照字母升序排列

2.  关于sort（）的说明

3.  使用asort（）函数和ksort（）函数对相关数组排序

    -   asort（）按值排序
    -   ksort（）按索引排序

4.  反向排序

    -   rsort（）
    -   arsort（）
    -   krsort（）


<a id="orgbe7e2bf"></a>

### 多维数组的排序

1.  用户定义排序

2.  反向用户排序


<a id="orga5c071c"></a>

### 对数组进行重新排序（随机）

1.  使用shuffle（）函数

    实现随机功能


<a id="org531799f"></a>

### 从文件载入数组

-   用file（）载入文件，返回一个数组，文件的每一行为一个数组元素；
-   count（）用来计算数组中的元素个数;
-   explode()分割字符串，返回一个数组；


<a id="orgb46a0fa"></a>

# 第4章 字符串操作和正则表达式


<a id="org42e669e"></a>

## 本章要点

-   字符串的格式化
-   字符串的连接和分割
-   字符串的比较
-   使用字符串函数匹配和替换自字符串
-   使用正则表达式


<a id="orgf24e82b"></a>

## 创建一个智能表单邮件


<a id="org96a6ef9"></a>

### mail（）函数

-   几个参数：目的地邮件地址，邮件主题，邮件内容，第四个参数可选，可以用来发送有

效的额外的邮件头

-   示例：

mail($toaddress, $subject, $mailcontent, $fromaddress);


<a id="orgf4888d5"></a>

## 字符串的格式化


<a id="org6078bd2"></a>

### 字符串的整理：chop（）、ltrim（）和trim（）

-   trim（）——去除字符串开始位置和结束位置的空格，并将结果返回。默认情况
    下除去的字符是换行符和回车符（\n和\r），水平和垂直制表符（\t和\x0b）。
-   ltrim（）——去除字符串开始位置的空格
-   rtrim（）——去除字符串结束位置的空格
-   chop()是rtrim（）的别名


<a id="org6a850fd"></a>

### 格式化字符串以便显示

-   使用html格式化：nl2br（）函数：用字符串作为输入参数，用xhtml中的<br
    />标记代替字符串中的换行符
-   为打印输出而格式化字符串
-   改变字符串中字母的大小写

strtoupper（）——将字符串转变为大写
strtolower（）——将字符串转变为小写
ucfirst（）——如果字符串的第一个字符是字母，将该字母转化为大写
ucwords（）——将字符串中的每个单词的第一个字母转化为大写。


<a id="org34a44e0"></a>

### 格式化字符串以便存储：addslashes（）和stripslashes（）

重新格式化字符串，以便存入数据库。对于字符串来说，某些字符是有效的，当
时将它们插入数据库时可能会引起一些问题，比如引号（单引号、双引号）、反
斜杠和null字符，数据库会将这些字符解释成控制符。为了将这些字符进行转义，
需要在它们前面加一个反斜杠（这个规则对所有特殊字符通用）。addslashes（）
和stripslashes（）就是专门用来进行这样的格式化处理

addslashes（）——添加反斜杠标记
stripslashes（）——去除反斜杠标记


<a id="orga10d514"></a>

### 字符串连接和字符串的分割

1.  explode（）、implode（）和join（）

    -   explode（）——根据指定的分隔符分割字符串
    -   implode（）和join（）实现与explode（）相反的效果

2.  使用strtok（）函数

3.  substr（）函数

    截取字符串
    **用法：**
    string substr（string string， int start，【int length】）；
    
    第二个参数代表起始位置，若为0，代表从头部开始。
    
    第三个参数可选，代表截取的长度，若省略，将从起始处截取到结尾，若是负数，
    从起始处往头部截取。


<a id="org7d4bd82"></a>

### 格式化字符串以便存储：addslashes（）和stripslashes（）

重新格式化字符串，以便存入数据库（主要是自动处理引号、斜杠、NULL字符等）

magic<sub>quotes</sub><sub>gpc这个配置将自动开启格式化</sub>。


<a id="org27a0fab"></a>

## 字符串的比较


<a id="org4500bd3"></a>

### 字符串的排序：strcmp（）、strcasecmp（）和strnatcmp（）

-   strcmp()——比较两个字符串

int strcmp（string str1，string str2）；

str1和str2相等，返回0
str1排在str2的后面（大于），返回一个正数
小于，返回一个负数


<a id="orgc410544"></a>

### 使用strlen（）计算字符串长度


<a id="orgd8d3e65"></a>

## 字符串函数匹配和替换字符串


<a id="org7228dd3"></a>

### 在字符串中查找字符串

-   strstr（）
-   strchr（）
-   strrchr（）
-   stristr（）


<a id="org75151bc"></a>

### 查找子字符串的位置

-   strpos（）
-   strrpos（）


<a id="orgf19b422"></a>

### 替换字符串

-   str<sub>replace</sub>()

> srt<sub>replace</sub>("\r\n","",$name); //防止header注入。

-   substr<sub>replace</sub>()


<a id="org604eede"></a>

## 正则表达式介绍

PHP支持两种风格的正则表达式语法：POSIS和Perl（POSIX正则表达式更容易掌
握，但是不是二进制安全的）


<a id="org4caec65"></a>

### 基础知识

1.  分隔符

    -   最常用的分隔符是 / , *shop/这个正则表达式的作用是匹配shop，正则表达式中使用/，需要使用\\来转义。如/http:\\*\\//
    -   分隔符后可以添加模式修饰符；如/shop/!，表示不区分大小写的方式匹配shop


<a id="org7b6b059"></a>

### 字符集7和类


<a id="org45fc668"></a>

# 第5章 代码重用与函数编写


<a id="org38e5e36"></a>

## 本章内容

-   代码重用的好处
-   使用require（）和include（）函数
-   函数介绍
-   定义函数
-   使用参数
-   理解作用域
-   返回值
-   参数的饮用调用和值调用
-   实现递归
-   使用命名空间


<a id="orga11624c"></a>

## 代码重用的好处

-   成本
-   可靠性
-   一致性


<a id="org15d78ba"></a>

## 使用require（）和include（）函数


<a id="org85ea595"></a>

### 两者的差异

唯一的区别在于函数失败后require（）函数将给出一个致命的错误。而include
只是给出一个警告。


<a id="orgf422a25"></a>

### require<sub>once</sub>()和include<sub>once</sub>()

这两个是变体函数，确保文件只被引用一次


<a id="org18acedf"></a>

## 理解作用域


<a id="org28ace23"></a>

## 参数的引用传递和值传递


<a id="org2177f23"></a>

## 使用return关键字


<a id="org82fc0d5"></a>

## 关于本章实例 &#x2013;home.html&#x2013; 的笔记


<a id="orgeed3524"></a>

### 在html文件内部编写css

    <style type="text/css">
        h1 {
          color:white;      //文字颜色
          text-align:center;
    
        }
    
        .menu {
          color:white;
          font-size:24pt;
          text-align:center;
          font-wight:bold;
        }
        td {
          background:black;    //背景颜色
        }
        p.foot {
          color:white;
          text-align:center;
        }


<a id="org5f7fb6d"></a>

### 表格table的处理

    <table width="100%" cellpadding="12" cellspacing="0" border="0">
          <tr bgcolor="black">
            <td align="left"><img src="./img/s-logo.gif" alt="TLA logo"
                                  height="70" width="70"></td>
            <td>
              <h1 ="white">TLA Consulting</h1>
            </td>
            <td align="right"><img src="./img/s-logo.gif" alt=TLA logo" height="70" width="70" ></td>
          </tr>
        </table>


<a id="org45ed01f"></a>

# 第6章 面向对象的php


<a id="org0309557"></a>

## 本章主要内容

-   面向对象的概念
-   类、属性和操作
-   类属性
-   类常量
-   类方法的调用
-   继承
-   访问修饰符
-   静态方法
-   类型提示
-   延迟静态绑定
-   对象克隆
-   抽象类
-   类设计
-   设计的实现
-   高级的面向对象功能


<a id="org827b9eb"></a>

## 理解面向对象的概念


<a id="orgef23774"></a>

### 类和对象


<a id="org519a209"></a>

### 多态性


<a id="orga50a814"></a>

### 继承


<a id="org04b9a67"></a>

### 在PHP中创建类、属性和操作

1.  类的结构

    **类的定义：**
    class classname
    {
    }

2.  构造函数

    构造函数的名称必须是\_<sub>construct</sub>( );
    
    **示例**
    class classname
    {
          function \_\_<sub>construct</sub>
    }

3.  析构函数

    名称必须是\_<sub>destruct</sub>()，不能带任何参数

4.  类的实例化

    在声明一个类后，需要创建一个对象（一个特定的个体，即类的一个成员）并使
    用这个对象。这个过程就是创建一个类的实例或实例化一个类。
    
    使用关键词new来实例化一个类。

5.  使用类的属性

    -   在类自身中，使用$this指针来访问属性
    -   类的外部访问接口
        -   \_get()函数返回类中的属性的值；
        -   \_set()函数设置类中属性的值；
    
    **应用实例：**
    
        class classname
        {
             public $attribute;
             function ___get($name)
            {
                 return $this->$name;
            }
        
             function __set($name, $value)
            {
                 $this->$name = $value;
            }
        }
        $a = new classname();
        $a->$attribute = 5 ; // 该语句间接调用_set()函数
        $a->$attribute //该语句间接调用_get()函数

6.  使用private和public关键字控制访问

    -   默认是public（公有），公有的属性或方法可以在类的内部和外部进行访问，可
    
    以被继承。
    
    -   private（私有），只能在类的内部进行访问，不会被继承。
    -   protected（保护），只能在类的内部进行访问，可以被继承

7.  类的操作和调用

8.  在php中实现继承

    使用extends实现继承
    class b extends a
    {
         ……
    }

9.  通过继承使用private和proteted访问修饰符控制可见性

10. 重载

11. 理解多重继承

    php不支持多重继承，每个子类只能有一个父类。

12. 实现接口

    php通过接口来实现多重继承

13. PHP面向对象的高级功能

    1.  使用Per-class常量(用::来调用）
    
        可以在不初始化类的情况下，调用类中的常量
        **实例**
        class Math()
        {
             const pi = 3.14159;
        }
        $pi = Math::pi;
    
    2.  实现静态方法
    
        static关键字，实现static方法，等价与Per-Class常量的思想。
        **实例**
        class Math
        {
              static function squared($input)
        {
                     return $input\*$input;
        }
        $result = Math::squared(8);
        }


<a id="orga8b2eec"></a>

# 第7章 错误和异常处理


<a id="orgaf63675"></a>

## 本章主要内容

-   异常处理的概念
-   异常控制结构：try &#x2026; throw&#x2026; catch
-   Exception类
-   用户自定义异常
-   异常和PHP的其他错误处理机制


<a id="org18dcc52"></a>

## 异常处理的概念

异常处理的基本思想是代码在try代码块被调用执行。

例如：
try
{
     // code goes here
}

如果try代码块出现某些错误，我们可以执行一个抛出异常的错误。PHP中，异常
必须手动抛出。

例如：
throw new Exception('message' ,code);

throw 关键字将触发异常处理机制。它是一个语言结构而不是函数，必须给它传
递一个参数。它要求接收一个对象。在最简单的情况下，可以实例化一个内置的
Exception类。


<a id="orgf584770"></a>

# 第8章 设计web数据库


<a id="orgbc3a7f5"></a>

## 本章主要内容

-   关系数据库的概念和术语
-   web数据库的设计
-   web数据库的架构


<a id="org7c92231"></a>

## 关系数据库的概念和术语

关系数据库是最常用的数据库类型


<a id="orgfac5c78"></a>

### 表

关系数据库由关系组成，这些关系通常称为表。一个表格就是一个数据的表。


<a id="org34c4bb1"></a>

### 列

表中的每一列都有唯一的名称，包含不同的数据。每一列都是一个相关的数据类型。 列也叫做字段或属性。


<a id="org011106c"></a>

### 行

每一行具有相同的格式，具有相同的属性。行也称为记录或元组（Tuple）


<a id="orgd2bd5fd"></a>

### 值

行和列的交点组成一个值。该值必须与该列定义的数据类型相同。


<a id="org6a6fd56"></a>

### 键（主键和外键）

用来标识数据的列称为键或主键，一个键可能由几列组成。经常使用键作为多个表之间的引用。


<a id="org4681d8d"></a>

### 模式

数据库整套表的完整设计称为数据库的模式（Schema），模式应该显示表格及表格的列、每个表格的主键和外键。模式不包含任何数据。


<a id="org6cea534"></a>

### 关系

-   用外键表示两个表中数据之间的关系。
-   三种基本的关系类型：
    -   一对一
    -   一对多
    -   多对多


<a id="org0331e9d"></a>

## 考虑真实的建模对象


<a id="orgf197779"></a>

## 避免保存冗余数据

冗余造成的三种异常

-   修改异常
-   插入异常
-   删除异常


<a id="org58fb3a0"></a>

## 表格类型的总结

通常，数据库有两种类型的表组成：

-   描述现实世界对象的简单表。  这些表也可能包含其他简单对象的键，他们之间有一对一或一对多的关系。
-   描述两个世界对象的多对多关系的关联表。


<a id="org2e6c755"></a>

# 第9章 创建Web数据库


<a id="orgcfe5b7e"></a>

## 本章概要

-   创建一个数据库
-   设置用户权限
-   权限系统的介绍
-   创建索引
-   选择MySQL中的列类型


<a id="org06e2da8"></a>

## 使用MySQL监视程序

-   命令用；分开
-   SQL语句不区分大小写
-   数据库和数据表名称区分大小写


<a id="org8c91359"></a>

## 登录到MySQL

在mac中 ，进入/usr/local/mysql/bin,  执行: ./mysql -u root -p   登陆 mysql
命令：

> mysql -h hostname -u username -p

说明：

-   h 命令选项用于指定连接的主机。 如果服务器是本机，可忽略该参数。
-   u 数据库用户名。
-   p 告诉服务器需要一个密码来连接


<a id="orgcba77e6"></a>

## 创建数据库和用户


<a id="org2cbb986"></a>

### 创建数据库

> create databse dbname;


<a id="org26a12de"></a>

## 设置用于与权限

一个MySQL系统可能有许多用户。  为安全起见，root用户通常只用作管理目的。 对于每个需要使用该系统的用户，应该为他们创建一个账号和密码。


<a id="org4b80b74"></a>

## MySQL权限系统介绍


<a id="orgf5b9574"></a>

### 最少权限原则

最少权限原则可以用来提高任何计算机系统的安全性。 它是一个基本的、 但又非常重要的原则。该原则内容如下：

> 一个用户（或者一个进程）应该拥有能够执行分配给他的任务的最低级别的权限。


<a id="org866718f"></a>

### 创建用户：GRANT命令

GRANT和REVOKE命令分别用来授予和取消MySQL用户的权限， 这些权限分4个级别。  它们分别是：

-   全局
-   数据库
-   表
-   列

1.  GRANT命令

    用来创建用户并赋予他们权限。GRANT命令的语法：
    
    > GRANT privileges [columns]
    > ON item 
    > TO user<sub>name</sub> [IDENTIFIED BY 'password']
    > [REQUIRE ssl<sub>options</sub>]
    > [WITH [GRANT OPTION | limit<sub>options</sub>]]
    
    说明：
    
    -   []中的是可选的
    -   占位符
        -   privileges   由逗号分开的一组权限
        -   columns  是可选的， 可以用它对没一个列指定权限。  也可以使用单列的名称或者用逗号分开的一组列的名称。
    
    想


<a id="org23433ed"></a>

# 第10章 使用MySQL数据库


<a id="org59c9f96"></a>

## 本章主要内容

-   SQL是什么
-   在数据库中插入数据
-   表的连接
-   使用电子查询
-   更新数据库中的记录
-   创建后修改表
-   创建数据中的记录
-   删除表


<a id="org94cd559"></a>

## SQL是什么

全称是Structured Query Language，是访问关系数据库管理系统（RDBMS）的标
准语言。

SQL可以用来将数据保存到数据库中，以及从数据库中取回数据。应用与常见数
据库，如MySQL、Oracle、PostgreSQL、Sybase和Microsoft SQL Server等。


<a id="orgd7c684d"></a>

## 在数据库中插入数据


<a id="org89e9553"></a>

### insert语句

1.  insert语句的格式：

    > insert [into] *table*  [(*colum* , *colum* ,……]  value  (*value1*, *value2*, ……);

2.  示例

    -   **在Book-O-Rama的customer表中插入一个记录：**
    
    > insert into customers values(Null, 'Julie Smith' , '25 oak Street' , 'Airport West' );
    
    -   **备注：** Mysql中的字符串应该包含在一对单引号或双引号中。
    
    -   **只插入部分列：**
    
    > insert into customers(name, city) values ('Melissa Jones' , 'Nar Nar Goon North');


<a id="orgcaae0d3"></a>

## 在数据库中获取数据


<a id="orgd280a62"></a>

### select语句

<span class="underline">基本格式：</span>

> select [option]  *items*  [into file<sub>details</sub>]  from *tables*   [where
> conditions] ……


<a id="orge77c5c3"></a>

### 按条件获取数据

使用where来实现，例如：

> select \* form orders where customerid=5;


<a id="orgeb399db"></a>

### 从多个表中获取数据


<a id="org5528b79"></a>

### 清空数据表

> truncate table test<sub>table</sub>;


<a id="org6a87684"></a>

### 删除数据表

> drop table if exists test<sub>table</sub>;


<a id="orgad7621c"></a>

# 第11章 使用PHP从Web访问MySQL


<a id="orgabb2925"></a>

## 本章主要内容

-   Web数据库架构及工作原理
-   从Web查询数据库的基本步骤
-   设置数据库连接
-   获取可用数据库信息
-   选择要使用的数据库
-   查询数据库
-   断开数据库连接
-   写入新信息
-   使用prepared statement
-   使用PHP与数据库交互的其它接口
-   使用通用数据库接口：PDO


<a id="org54c9a92"></a>

## web数据库架构及工作原理

1.  用户Web浏览器发出针对特定页面的HTTP请求。例如，用户可能在Book-O-Rama站点发起搜索Michael Morgan编写的所有图书的请求，搜索结果页面是results.php
2.  Web服务器接收到针对results.php的请求，读取该文件，并将文件传给PHP引擎处理
3.  PHP引擎开始接卸该脚本。 脚本中有一个连接数据库的命令，执行查询命令（执行图书搜索操作）。 PHP打开MySQL服务器连接，并且发送查询命令
4.  MySQL数据库接收到数据库查询指令，执行该指令并将结果返回给PHP引擎。
5.  PHP执行脚本结束，将查询结果格式化为HTML，发送HTML至Web服务器。
6.  Web服务器将HTML返回给用户浏览器


<a id="orgbfce4fe"></a>

## 从Web查询数据库


<a id="orga26938a"></a>

### 步骤

任何可以从Web访问数据库的脚本都会执行如下的基本步骤：

1.  检查和过滤来自用户的输入数据
2.  创建和设置数据库连接
3.  查询数据库
4.  读取查询结果
5.  向用户展示搜索结果


<a id="orgf69e887"></a>

### 检查并过滤输入数据

过滤掉关键字前后可能存在的空格。使用trim（）函数去除输入数据前后的空格。

检查是否输入了搜索条件

    if(!$searchtype || !$searchterm){
        echo '<p>You have not entered search details. <br />/
            Please go back and try again. </p>' ;
        exit;
    }


<a id="org1f73c26"></a>

### 设置数据库连接

连接MySQL数据库的PHP基础函数库是mysqli。 i表示优化版本，未优化版本为mysql

1.  面向对象的语法：

        @$db = new mysqli('localhost', '用户名', '密码');
    
    备注：在MAC中本机地址用127.0.0.1， 使用localhost可能会无法连接， 调用$db对象访问数据库。

2.  面向过程的语法：

        @$db = mysqli_connect('localhost', '用户名', '密码');
    
    备注：该函数返回一个资源，而不是对象。 该资源代表到数据库的链接，如果用面向过程的方式，需要将该资源传递给所有mysqli函数。


<a id="orgfe1872d"></a>

# 第19章 与文件系统和服务器交互


<a id="org9ee73d7"></a>

## 17.1 上传文件


<a id="orgea06c6e"></a>

### php.ini中关于文件上传的配置设置

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">指令</td>
<td class="org-left">描述</td>
<td class="org-left">默认值</td>
</tr>


<tr>
<td class="org-left">file<sub>uploads</sub></td>
<td class="org-left">是否支持HTTP文件上传</td>
<td class="org-left">on</td>
</tr>


<tr>
<td class="org-left">upload<sub>tmp</sub><sub>dir</sub></td>
<td class="org-left">文件上传的临时目录。如果没有设置该值，将使用系统默认值。</td>
<td class="org-left">NULL</td>
</tr>


<tr>
<td class="org-left">upload<sub>max</sub><sub>filesize</sub></td>
<td class="org-left">控制文件上传的最大容量，日过文件大于该值，php将写入0字节大小的占位符文件。</td>
<td class="org-left">默认值为2m</td>
</tr>


<tr>
<td class="org-left">post<sub>max</sub><sub>size</sub></td>
<td class="org-left">php可以接受的post数据大小的最大值，必须大于上传最大容量</td>
<td class="org-left">8m</td>
</tr>
</tbody>
</table>

1.  mac 中的php.ini

    Mac OS X中没有默认的php.ini文件，但是有对应的模版文件php.ini.default，
    位于/etc/php.ini.default ，可以自行拷贝一份进行修改。


<a id="org3741d57"></a>

### 文件上传的html表单

-   文件上传必须使用POST；
-   <form>标记中，必须设置属性enctype = "multipart/form-data" ，告诉服务器有常规信息的文件要上传；
-   如果没有服务器端的配置控制文件上传的大小，必须有个表单域用来设置上传文件的大小。示例如下：

    <input type="hidden" name="MAX_FILE_SIZE" value="1000000" //单位为字节

-   type属性值设置为file，用于上传文件，并设置name属性（在php处理中代表上传文件名称）


<a id="org53cf44a"></a>

### 处理文件的php脚本

文件上传后，被保存在php.ini文件的upload<sub>tmp</sub><sub>dir指定的临时目录中</sub>。如果在php脚本结束前没有移动、复制、或重命名该文件，该文件会在脚本结束后自动删除。

文件上传数据保存在超级全局数组$<sub>FILES中</sub>。

1.  关于$<sub>FILE全局数组的说明</sub>：

    html代码：<input type="file" name="the<sub>file</sub>" …… />
    
    -   name属性的值“the<sub>file</sub>",用于$<sub>FILE数组</sub>，代表上传的文件名
    -   $<sub>FILE</sub>['the<sub>file</sub>']['tmp<sub>name</sub>'] &#x2014; 上传文件的临时文件的名称和位置
    -   $<sub>FILE</sub>['the<sub>file</sub>']['name'] &#x2014; 上传文件的初始名称
    -   $<sub>FILE</sub>['the<sub>file</sub>']['size'] &#x2014; 上传文件的大小
    -   $<sub>FILE</sub>['the<sub>file</sub>']['type'] &#x2014; 文件的类型，比如text/plain或image/png
    -   $<sub>FILE</sub>['the<sub>file</sub>']['error'] &#x2014; 与上传相关的错误代码
        -   0 —— 没有错误
        -   1 —— 上传的文件太大，超出php.ini的规定值
        -   2 —— 超出表单元素规定的最大值
        -   3 —— 文件只是部分上传
        -   4 —— 文件没有上传
        -   6 —— 没有指定临时目录
        -   7 —— 文件写入失败
        -   8 —— php扩展停止了文件上传过程

2.  文件上传处理

    -   $upload<sub>file</sub> = './upload/' . $<sub>FILE</sub>['the<sub>file</sub>']['name'];前一半是上传的路径，后一半是上传的文件名称
    -   is<sub>upload</sub><sub>file</sub>($<sub>FILE</sub>['the<sub>file</sub>']['tmp<sub>name</sub>']) —— 判断文件是否上传
    -   move<sub>uploaded</sub><sub>file</sub>($<sub>FILE</sub>['the<sub>file</sub>']['tmp<sub>name</sub>'],$upload<sub>file</sub>) —— 移动临时文件到指定的目录和文件名。


<a id="org7d89a64"></a>

# 第11章 使用PHP从Web访问MySQL数据库


<a id="org172d014"></a>

## 从Web查询数据库的基本步骤

1.  检查并过滤来自用户的数据。
2.  建立一个到适当数据库的连接。
3.  查询数据库。
4.  获取查询的结果。
5.  将结果显示给用户。


<a id="orge42061e"></a>

## 检查与过滤用户输入数据


<a id="org594d6be"></a>

### 过滤开始和结尾处的空格（trim（）函数）

使用trim函数过滤，trim（）还可以过滤掉指定的字符。
例如：
trim（$sdinng,'dkji')——过滤掉dkji


<a id="org9de71ca"></a>

### 格式化字符串，以便输入到数据库（addslashes（））

用addslashes（）自动转义 空格、引号、斜杠、NULL等。 防止  数据库把这些字符当做控制字符处理。


<a id="org3033df6"></a>

## 和数据库建立连接


<a id="orgeb32113"></a>

### 面向对象的方法

@ $db = new mysqli ( ' 主机名 ' ,   ' 数据库用户名 ' ,   ' 数据库密码
' ,   ' 数据库名称 ' );


<a id="org2d2b72f"></a>

### 面向过程的方法

@ $db = mysqli<sub>connect</sub>  ( ' 主机名 ' ,   ' 数据库用户名 ' ,   ' 数据库密码
 ' ,   ' 数据库名称 ' );


<a id="orge0990e2"></a>

## 查询数据库


<a id="org018c774"></a>

### 建立查询语句；

> $query = " select \* from books where $searchtype like ' %$searchterm%
> ' ";

——这里用了模糊查询 like ，和通配符 %


<a id="org99dee9a"></a>

### 执行查询；

1.  **面向过程：**

$result = mysqli<sub>query</sub>($query);

1.  **面向对象：**

$result = $db->query($query)   ——$db是连接数据库是建立的数据库对象，返
回的是一个对象


<a id="orgc2b7018"></a>

### 检索查询结果

1.  返回查询结果的行数（即满足条件的数据有几条）

    1.  **面向过程：**
    
    $num<sub>results</sub> = mysqli<sub>num</sub><sub>rows</sub>($result);
    
    1.  **面向对象：**
    
    $num<sub>results</sub> = $result->num<sub>rows</sub>;

2.  返回查询到的每一行的数据

    1.  **面向过程：**
    
    $row = $result->fetch<sub>assoc</sub>();——以数组的形式返回每一行的数据，要放在循
    环内
    
    1.  **面向对象：**
    
    $row = mysqli<sub>fetch</sub><sub>assoc</sub>($result);

3.  显示查询到的数据的字段

    stripslashes($row['isbn']);——数据库字段名就是 返回的每行数据数组$row的
    下标，stripslashes()函数的作用是去除数据库格式。


<a id="org7452457"></a>

## 断开数据库连接


<a id="orgacd498b"></a>

### 释放数据库的连接

1.  **面向对象：**

$result ->free();

1.  **面向过程：**

mysqli<sub>free</sub><sub>result</sub>($result);


<a id="orge42de8e"></a>

### 断开数据库连接

1.  **面向对象：**

$db->close();

1.  **面向过程：**

mysqli<sub>close</sub>($db);


<a id="org13b07fd"></a>

## 将新信息写入数据库


<a id="org2a55427"></a>

# 第23章 在PHP中使用会话控制


<a id="orgdfe8882"></a>

## 本章主要内容

-   什么是会话控制
-   cookie
-   创建一个会话控制
-   会话变量
-   会话和身份验证


<a id="org20b1df2"></a>

## 什么是会话控制

http是无状态的协议，没有一个内建机制来维护两个事物之间的状态。当一个用
户在请求一个页面后再请求另外一个页面时，http将无无法告诉我们这两个请求
是来自同一个用户。

会话控制的思想是指能够在网站中根据一个会话跟踪用户。  如果我们可以做到这
点，就可以很容易的做到对用户登录的支持，并根据其授权级别和个人喜好显示
相应的内容。我们可以根据会话控制记录该用户的行为。  还可以实现购物车。

在php4及其以后版本中，php自身包含了会话控制函数。  自从超级全局变量概
念的引入， 会话控制方法就发生来一些变化。  如今可以使用$<sub>SEEION超级全</sub>
局变量。


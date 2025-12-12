
# org-mode中tag的使用

1.  [简介](#orgc33f3a5)
2.  [基本语法](#org7b4ccb2)
    1.  [在条目末尾添加标签](#org4fc47e4)
3.  [项目计划](#org5e0ccbe):project:work:
4.  [购物清单](#orgf7311a6):personal:errands:
5.  [阅读《原子习惯》](#org27677db):book:learning:important:
    1.  [自动补全标签](#org7e30f6d)
6.  [全局标签预定义（推荐）](#org6d7b29f)
7.  [标签继承（Inheritance）](#orgd094c4f)
8.  [工作任务](#org2584d34):work:
    1.  [写报告 :urgent:       → 实际标签：=work:urgent=](#orgbdaae0b)
    2.  [开会                   → 实际标签：=work=](#orgf76fd4d)
    3.  [禁用继承](#orgb50bd6b)
9.  [使用标签筛选内容](#org8779a27)
    1.  [1. Agenda 视图中按标签过滤](#orgad11519)
    2.  [2. 创建稀疏树（Sparse Tree）](#org8bac3d1)
    3.  [3. 搜索标签（Occur）](#org2d54e74)
10. [高级技巧](#org8b6770b)
    1.  [1. 标签组（Tag Groups）](#orgcc2c0fc)
    2.  [2. 动态标签（通过属性）](#org974b497)
11. [任务](#orgdc57a13)
    1.  [3. 导出时保留标签](#org495964a)
    2.  [4. 快速切换/编辑标签](#org7007f19)
12. [最佳实践](#org783f5ad)
13. [常见问题](#orgbfd1cf9)
    1.  [Q：标签能嵌套吗](#orgb3cf306)



<a id="orgc33f3a5"></a>

# 简介

在 Org-mode 中，\*\*Tag（标签）\*\* 是附加在大纲条目（headline）上的关键词，用于：

-   分类任务（如 =work=、=home=）
-   标记状态（如 =waiting=、=important=）
-   快速筛选与聚合（通过 agenda 或 sparse tree）

标签具有\*\*继承性\*\*：子条目自动继承父条目的标签（可配置）。


<a id="org7b4ccb2"></a>

# 基本语法


<a id="org4fc47e4"></a>

## 在条目末尾添加标签

标签写在 headline 行末，用冒号包围，多个标签连续排列：

\#+begin<sub>example</sub>


<a id="org5e0ccbe"></a>

# 项目计划     :project:work:


<a id="orgf7311a6"></a>

# 购物清单     :personal:errands:


<a id="org27677db"></a>

# 阅读《原子习惯》     :book:learning:important:

\#+end<sub>example</sub>

> ✅ 规则：
> - 标签名只能包含字母、数字、下划线和连字符（=a-z0-9\_-=）
> - 以冒号开头和结尾，中间无空格
> - 不区分大小写（但建议统一小写）


<a id="org7e30f6d"></a>

## 自动补全标签

在编辑 headline 时输入 `:=，Emacs 会弹出已用标签列表供选择（需 =org-complete-tags-always-offer-all-agenda-tags` 为 =t=）。


<a id="org6d7b29f"></a>

# 全局标签预定义（推荐）

避免拼写错误，可在配置中预设常用标签：

    ;; 在 ~/.emacs.d/init.el 中
    (setq org-tag-alist
          '((:startgroup)
            ("work" . ?w)     ; 按 w 快速插入
            ("home" . ?h)
            ("errands" . ?e)
            ("important" . ?!)
            ("waiting" . ?W)
            (:endgroup)
            ("computer" . ?c)
            ("phone" . ?p)))

效果：

-   按 `C-c C-q` 编辑标签时，可按单字母快速选择（如 `w` → =work=）
-   分组标签（=startgroup/endgroup=）在补全时显示为一组


<a id="orgd094c4f"></a>

# 标签继承（Inheritance）

默认情况下，\*\*子条目自动继承父条目的所有标签\*\*。

示例：
\#+begin<sub>example</sub>


<a id="org2584d34"></a>

# 工作任务     :work:


<a id="orgbdaae0b"></a>

## 写报告 :urgent:       → 实际标签：=work:urgent=


<a id="orgf76fd4d"></a>

## 开会                   → 实际标签：=work=

\#+end<sub>example</sub>


<a id="orgb50bd6b"></a>

## 禁用继承

在文件头添加：

    #+TAGS: work(noinherit)

或全局禁用：

    (setq org-use-tag-inheritance nil)


<a id="org8779a27"></a>

# 使用标签筛选内容


<a id="orgad11519"></a>

## 1. Agenda 视图中按标签过滤

-   打开 agenda：=C-c a=
-   按 `m` 进入“匹配标签”视图
-   输入查询，例如：
    -   `work` → 所有含 `work` 标签的条目
    -   `work|home` → 包含 `work` 或 `home`
    -   `work+important` → 同时包含两者
    -   `-waiting` → 排除 `waiting`


<a id="org8bac3d1"></a>

## 2. 创建稀疏树（Sparse Tree）

在 Org 文件中按 =C-c / m=，输入标签表达式，仅展开匹配的条目。

示例：

-   `C-c / m work RET` → 展开所有 `work` 相关任务
-   `C-c / m important-waiting RET` → 重要但非等待中的任务


<a id="org2d54e74"></a>

## 3. 搜索标签（Occur）

按 `C-c / o=，输入 =:work:=，列出当前文件所有含 =work` 的 headline。


<a id="org8b6770b"></a>

# 高级技巧


<a id="orgcc2c0fc"></a>

## 1. 标签组（Tag Groups）

使用 `:startgroup` / `:endgroup` 将标签逻辑分组（仅影响补全，不影响功能）：

    (setq org-tag-alist
          '((:startgroup)
            ("bug" . ?b)
            ("feature" . ?f)
            ("doc" . ?d)
            (:endgroup)
            ("high" . ?1)
            ("medium" . ?2)))


<a id="org974b497"></a>

## 2. 动态标签（通过属性）

可通过 `PROPERTIES` 块动态设置标签（较少用）：
\#+begin<sub>example</sub>


<a id="orgdc57a13"></a>

# 任务

\#+end<sub>example</sub>


<a id="org495964a"></a>

## 3. 导出时保留标签

默认导出 HTML/PDF 时标签不显示。若需显示，在模板中加入：

    #+OPTIONS: tags:t


<a id="org7007f19"></a>

## 4. 快速切换/编辑标签

-   `C-c C-q` → 编辑当前条目标签（支持补全）
-   `C-c C-c` 在 headline 上 → 也可进入标签编辑


<a id="org783f5ad"></a>

# 最佳实践

-   ✅ 使用一致命名：=work= 而非 `Work` / `job`
-   ✅ 控制标签数量：建议核心标签 ≤ 10 个，避免混乱
-   ✅ 结合 TODO 关键字：=TODO 邮件客户 :work:urgent:=
-   ✅ 用标签代替复杂分类：比多级目录更灵活


<a id="orgbfd1cf9"></a>

# 常见问题


<a id="orgb3cf306"></a>

## Q：标签能嵌套吗


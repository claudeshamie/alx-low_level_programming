0x1C. C - Makefiles
===================

-   By Julien Barbier

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif)

Resources
---------

**Read or watch**:

-   [Makefile](https://alx-intranet.hbtn.io/rltoken/moIpBFMN3sJcVMNn5VIFlA "Makefile")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/u_RzOFqA4lSt5AdGRAfQ_w "explain to anyone"), **without the help of Google**:

### General

-   What are `make`, Makefiles
-   When, why and how to use Makefiles
-   What are rules and how to set and use them
-   What are explicit and implicit rules
-   What are the most common / useful rules
-   What are variables and how to set and use them

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   OS: Ubuntu 20.04 LTS
-   Version of `gcc`: 9.3.0
-   Version of `make`: GNU Make 4.2.1
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory

More Info
---------

### Files

In the following tasks, we are going to use [these files](https://github.com/holbertonschool/0x1B.c "these files"). We want to compile these only.

Tasks
-----

### 0\. make -f 0-Makefile

mandatory

Create your first Makefile.

Requirements:

-   name of the executable: `school`
-   rules: `all`
    -   The `all` rule builds your executable
-   variables: none

```
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `0-Makefile`

### 1\. make -f 1-Makefile

mandatory

Requirements:

-   name of the executable: `school`
-   rules: `all`
    -   The `all` rule builds your executable
-   variables: `CC`, `SRC`
    -   `CC`: the compiler to be used
    -   `SRC`: the `.c` files

```
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$


# BUAA-GPA-Calculate
### 简介：

本项目为GPA满绩为4情况下的北航GPA计算工具，计算方式完全基于北航学生处发布的学生手册（2018-2019年度，第二章第十二条，100页），并且试验后和信息北航的GPA结果完全相同。

本项目可以说是简易完善了教务目前所没有的功能，例如查看自己各个学期以来的成绩变化、判断最优的重修课程等，本项目均能在这些方面提供些许的帮助。



### 内容：

本项目目前仅包括三个C语言程序 getAll.cpp getGpa.cpp getScore.cpp

使用时直接编译运行即可

功能介绍如下：

#### getAll.cpp:

利用输入的全部课程的分数、学分和是否计算特定GPA，可以计算当前的总GPA和对应的分数

注：五级分制的成绩输入有些许的不同，注意查看文件内的上方注释

#### getGpa.cpp:

根据分数计算出对应绩点的简易函数

#### getScore.cpp:

利用绩点计算出对应分数的简易函数
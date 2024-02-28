# Calculator Base on Qt----基于Qt图形化界面的计算器

本项目通过Qt实现了一个简单的计算器小项目

计算器原理是通过栈实现的中缀表达式的算式计算

注意的点有，switch只能通过int和char检测，而Qt中采用的`QString`和`QChar`不适配，需要进行转换,`QString`直接转`int`也已经封装好了，直接调用即可。

`char` to `QChar`:`QChar.toLatin1();`

`QString` to `int`:`QString::number(qstr);`

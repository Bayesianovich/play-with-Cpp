程序通过声明变量通知计算机为它准备好内存空间，这些信息是编译时就能**确定**的
**每个变量对应一块内存空间**
变量名是这块空间的名字,程序通过变量名访问对应的空间。


动态内存分配：**在程序运行时申请内存和释放内存的功能**

**动态内存申请:**

在内存寻找一块大小合适的空间，返回起始地址
问题:**动态分配的内存没有名字，只有地址，只能通过间接访问**。


**动态内存申请方法**
new 类型                                     申请一块**保存某种类型数据的内存空间**,返回申请到的内存地址
new 类型[结果值为整数的表达式] 申请一块**保存某种类型数组**的内存空间，返回申请到的内存地址

如：

申请存储一个整型数的动态内存 `int *intp = new int;`
申请一个20个元素的整型数组    `int *array = new int[20];`
申请一个n个元素的整型数组   `int *array = new int[n];`

**内存释放**

通过变量声明获得的内存会在存储期结束时收回
**动态申请的空间不会被系统主动收回**

**释放空间的运算**
delete 指针
delete[] 指针

delete的重要性
没有delete的动态内存一直被该程序占用
特别是，**程序执行结束，这块空间还标识为被使用，** 这称 **为内存泄露**

![[Pasted image 20220525230452.png]]

![[Pasted image 20220525230643.png]]

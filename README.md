* main.cpp 是整个程序运行的主入口
* Single_list_link.hpp 定义了模板化的链表
* List_Node.hpp 定义的是模板节点

* 本次算法的实现需要知道的技术含有：
  * 熟悉使用指针
  * 熟悉C++ 的面向对象的思维模式
  * 熟悉泛型编程的思想
  * 同时最重要的是理解模块化，分文件的开发模式的实现

* 后续该项目可以实现添加的其他方法
  * 添加运算符重载，让链表可以通过 `[]` 来进行访问内部的每一个元素
  * 添加拷贝函数，同时重载 `=` ，来实现后续的便捷的拷贝操作

* 为什么使用模板编程和面向对象的思维模式呐？？？
  * 是因为面向对象的思维模式有助于后续代码复用性的提升，使用面向对象思维中的封装的特性
  * 使用泛型编程的好处，使用泛型编程，我们后续的的操作更加的自由，我们的数据结构可以实现存储的值更加丰富
  * 同时也可以提高了我们代码的复用率     

* 如果想要观看我的程序运行，你可以做的操作有：
  * ```
    first step: fork from my repositoty
    `git clone https://github.com/juwenzhang/Cpp_algorithm.git`

    进行修改后，可以提交 PR 
    `git add <your modified file>` or `git add .`  直接将修改的全部文件进行提交
    `git commit -m "commitlint: desc"`  这里进行提交的时候一定要遵从 commitlint 规范
    `git push -u <your-remote-repositoty-name> <your-local-branch>`
    ```  
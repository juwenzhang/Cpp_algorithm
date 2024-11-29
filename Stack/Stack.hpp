#include<iostream>
#include "Node.hpp"
#pragma once
using namespace std;

template<class T1>  // T1 指代的是节点中的元素类型
class My_Stack{
public:
    // 初始化栈
    My_Stack(int capacity) : capacity(capacity), length(0) {
        this->stack_head = nullptr;
    }

    // 开始判断栈空间是否满了
    bool is_full() {
        return this->length >= this->capacity;
    }

    // 数据元素入栈
    void push(T1 data) {
        // 首先先实现判断栈区空间是否满了
        if (this->is_full()) {
            cout << "Stack is full" << endl;
            return;
        }
        Stack_Node<T1>* node = new Stack_Node<T1>(data);  // 初始化元素
        node->next = this->stack_head;  // 新节点指向当前的头节点
        this->stack_head = node;  // 头节点更新为新节点
        this->length++;  // 更新栈大小
    }

    // 数据元素出栈
    T1 pop() {
        if (this->stack_head == nullptr) {
            cout << "Stack is empty" << endl;
            return T1();  // 返回类型的默认值
        }

        Stack_Node<T1>* node = this->stack_head;
        T1 data = node->ele;
        this->stack_head = this->stack_head->next;  // 移动头节点的指向
        delete node;  // 释放节点内存
        this->length--;   // 实现大小的更新

        return data;
    }

    // 实现读取栈顶元素
    T1 get_top_ele() {
        if (this->stack_head == nullptr) {
            cout << "Stack is empty" << endl;
            return T1();  // 返回类型的默认值
        }
        return this->stack_head->ele;  // 直接返回栈顶元素
    }

    // 获取我们的栈空间的大小
    int get_size() {
        return this->length;
    }

    // 开始使用析构函数实现栈空间的销毁
    ~My_Stack() {
        while (this->stack_head != nullptr) {
            Stack_Node<T1>* temp = this->stack_head;
            this->stack_head = this->stack_head->next;
            delete temp;
        }
        cout << "销毁成功" << endl;
    }

private:
    Stack_Node<T1>* stack_head;  // 栈顶指针
    int length;  // 栈中元素数量
    int capacity;  // 记录栈表容量大小
};
#pragma once
#include<iostream>
#include "Node.hpp"
using namespace std;

// 定义队列：先进先出
template<class T>
class My_Queue {
private:
    Queue_Node<T>* back;
    Queue_Node<T>* front;

public:
    My_Queue() {
        this->back = this->front = nullptr;   // 初始状态是两端都为空
    }

    // 定义入队操作
    void push(T data) {
        // 先实现定义出一个节点
        Queue_Node<T>* node = new Queue_Node<T>(data);
        if (this->back == nullptr) {  // 如果队列为空
            this->front = this->back = node;
        } else {
            this->back->next = node;
            this->back = node;  // 更新尾节点
        }
    }

    // 定义出队操作
    T pop() {
        if (this->is_empty()) {
            cout << "队列为空" << endl;
            return T();  // 返回类型的默认值
        }
        Queue_Node<T>* temp = this->front;
        T data = temp->ele;
        this->front = this->front->next;
        if (this->front == nullptr) {  // 如果队列为空，重置 back 指针
            this->back = nullptr;
        }
        delete temp;
        return data;
    }

    // 开始读取队头元素
    T get_front_ele() {
        if (this->is_empty()) {
            cout << "队列为空" << endl;
            return T();  // 返回类型的默认值
        }
        return this->front->ele;
    }

    bool is_empty() {
        return this->back == this->front;   // true 表示为空
    }

    // 开始销毁
    ~My_Queue() {
        while (this->front != nullptr) {
            Queue_Node<T>* temp = this->front;
            this->front = this->front->next;
            delete temp;
        }
        this->back = nullptr;  // 重置 back 指针
        cout << "销毁成功" << endl;
    }
};
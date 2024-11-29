#pragma once
// 开始实现定义节点
template<class T>
class Queue_Node {
  public:
    // 开始定义构造函数
    Queue_Node(T ele):ele(ele) {
      this->next = nullptr;
    } 
    T ele;
    Queue_Node* next;
};
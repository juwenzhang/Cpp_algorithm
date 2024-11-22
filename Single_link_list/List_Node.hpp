#pragma once
#include<iostream>
using namespace std;

// 开始实现定义链表节点
template<class T>
class List_Node {
public:
  // 定义节点类中的方法
  List_Node(T val);
  ~List_Node();

  // 定义节点的属性
  T val;
  List_Node* next;
};


template<class T>
List_Node<T>::List_Node(T val) {
  this->val = val;
  next = nullptr;
}


template<class T>
List_Node<T>::~List_Node() {
  cout << "析构完成" << endl;
}
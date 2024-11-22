#include "List_Node.hpp"
#pragma once
using namespace std;

// 开始实现定义链表类
template<class T>
class Single_link_list {
public:
  List_Node<T>* head;  // 定义头节点
  int length;  // 实现记录链表长度

  Single_link_list(); // 默认构造函数
  Single_link_list(T val);  // 有参构造函数
  ~Single_link_list();  // 析构函数的声明

  void get_link_list_length();  // 获取链表的长度  
  void show_link_list();  // 实现打印链表

  List_Node<T>* get_link_ele_by_index(int index);  // 通过下标获取元素
  List_Node<T>* get_link_ele_by_value(T val);  // 通过链表节点值实现获取元素

  void push_back(T val);  // 向链表末尾添加元素
  void prepush_back(T val);  // 向链表头部添加元素
  void insert(int index, T val);  // 实现向链表中插入元素

};


// 开始实现上面声明的方法
template<class T>
Single_link_list<T>::Single_link_list() {}  // 默认构造函数的实现


template<class T>
Single_link_list<T>::Single_link_list(T val) {
  // 开辟堆区实现存储元素
  List_Node<T>* new_node = new List_Node(val);
  List_Node<T>* temp = head;
  if (this->length == 0) {
    this->head = new_node;
  }
  else {
    while (temp->next != nullptr) {
      temp = temp->next;
    }

    temp = new_node;
  }
  this->length++;
}


template<class T>
void Single_link_list<T>::get_link_list_length() {
  cout << "链表长度为:" << this->length << endl;
}


template<class T>
void Single_link_list<T>::show_link_list() {
  List_Node<T>* temp = head;
  while (temp != nullptr) {
    // 更新指针的指向
    cout << temp->val << "  ";
    temp = temp->next;
  }
  cout << endl;
}


template<class T>
List_Node<T>* Single_link_list<T>::get_link_ele_by_index(int index) {
  if (index < 0 || index >= length) {
        return nullptr;
  }

  List_Node<T>* temp = head;
  for (int i = 0; i < index; i++) {
    temp = temp->next;
  }
  return temp;
}


template<class T>
List_Node<T>* Single_link_list<T>::get_link_ele_by_value(T val) {
  
  List_Node<T>* temp = head;
  while (temp != nullptr) {
    if (temp->val == val) return temp;
    temp = temp->next;
  }

  return temp;
}


template<class T>
void Single_link_list<T>::push_back(T val) {
  List_Node<T>* temp = head;
  List_Node<T>* new_node = new List_Node(val);

  if (length == 0) {
    head = new_node;
    this->length++;
    return;
  }

  while(temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = new_node;
  this->length++;
}


template<class T>
void Single_link_list<T>::prepush_back(T val) {
  List_Node<T>* new_node = new List_Node(val);
  new_node->next = this->head;
  this->length++;
}


template<class T>
void Single_link_list<T>::insert(int index, T val) {
  if (index<0 || index>length) {
    return;
  }

  else if (this->length == 0) {
    this->prepush_back(val);
  }
  else if (index = this->length - 1) {
    this->push_back(val);
  }
  else {
    List_Node<T>* temp_insert_pre = head;
    for (int i = 0; i < index - 1; i++) {
      temp_insert_pre = temp_insert_pre->next;
    }
    List_Node<T>* back = temp_insert_pre->next; 

    List_Node<T>* new_node = new List_Node(val);

    new_node->next = back;
    temp_insert_pre->next = new_node;
  }
  this->length++;
}
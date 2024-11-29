template<class T>  // 自定泛型类型
class Stack_Node{
  public:
    T ele;  // 每一个元素
    Stack_Node* next;  // 指向下一个节点的指针

    Stack_Node (T ele) {
      this->ele = ele;
    }
};
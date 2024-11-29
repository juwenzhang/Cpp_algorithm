#include "Stack.hpp"
using namespace std;

void test() {
  My_Stack<int> my_Stack(10);  // 首先现定义一个空间大小为 10 的栈结构

  my_Stack.push(11);

  cout << my_Stack.get_top_ele() << endl;

  cout << my_Stack.get_size() << endl;

  my_Stack.push(12);
  my_Stack.push(13);
  my_Stack.push(14);
  my_Stack.push(15);

  cout << my_Stack.get_top_ele() << endl;

  cout << my_Stack.get_size() << endl;  
}

int main() {
  test();
  return 0;
}
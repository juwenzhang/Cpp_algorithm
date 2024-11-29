#include "Queue.hpp"
using namespace std;

void test() {
  My_Queue<int> queue;

  queue.push(10);
  queue.push(11);
  queue.push(12);
  cout << queue.get_front_ele() << endl;
}

int main() {
  test();

  return 0;
}
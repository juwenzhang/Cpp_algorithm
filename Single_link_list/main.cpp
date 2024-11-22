#include<iostream>
#include "Single_List_Link.hpp"
using namespace std;

void test() {
  Single_link_list<int>* single_link_list = new Single_link_list(10);

  single_link_list->get_link_list_length();
  single_link_list->show_link_list();
}


int main() {
  test();
  return 0;
}
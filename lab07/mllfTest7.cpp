#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
  //Test your insertNodeToSortedList function
  //Test your code extensively
  Node *p;
  int threeNums[3]={1,2,4};
  LinkedList *list = arrayToLinkedList(threeNums,3);
  ASSERT_EQUALS( "[1]->[2]->[4]->null", linkedListToString(list));
  cout<<"test"<<endl;
  insertNodeToSortedList(list, 3);
  cout<<"res"<<endl;
  ASSERT_EQUALS( "[1]->[2]->[3]->[4]->null", linkedListToString(list));
  
  return 0;
}


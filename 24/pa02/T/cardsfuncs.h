#ifndef CARDSFUNCS_H
#define  CARDSFUNCS_H
#include "card.h"  // defines what must be implemented
#include <string>
#include <iostream>
#include <sstream> // for ostringstream
#include <cassert>

using namespace std;
using std::string;

LinkedList * stringToLinkedList(string s);
void DeleteThisNode(LinkedList *list, Node *n);
string linkedListToStringData(LinkedList * list);
string linkedListToStringType(LinkedList * list);
Node * GetNode(LinkedList * list);




#endif
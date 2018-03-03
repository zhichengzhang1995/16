//cards.cpp
//Authors: Your name and your partner's name
//Implementation of the classes defined in cards.h
#include "card.h"  // defines what must be implemented
#include "cardsfuncs.h"
#include <string>
#include <iostream>
#include <sstream> // for ostringstream
#include <cassert>
using namespace std; 
using std::string;



LinkedList * stringToLinkedList(string s)
	{
		LinkedList * list = new LinkedList;
		list->head=NULL; 
		list->tail=NULL;
		int size = s.size();
		for (int i=0; i<size-1; i+=2) {
    // add string[i] to the list
		if ( list->head==NULL) {
			list->head = new Node;
			list->head->type = s[i];
			list->head->data = s[i+1]; // (*head).data = s[i];
			list->head->next = NULL;
			list->tail = list->head;
		} else {
			list->tail->next = new Node;
			list->tail = list->tail->next;
			list->tail->next = NULL;
			list->tail->type = s[i];
			list->tail->data = s[i+1];
		}
		}
		return list; // return ptr to new list
	}

void DeleteThisNode(LinkedList *list, Node *n)
	{
		Node *tp = new Node;
		Node *t = new Node;
		Node *p = list->head;

		while(p){
		if (!((n->data == p->data)&&(n->type == p->type)))
		{
			
			tp = p;
			p = p->next;
		}
		else
		{
			t = p->next;
			tp->next = t;
			cout<<"delete"<<endl;
			return ;
		  
		}

	  
	}
	}
	
std::string charToString(char i) {
// creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

std::string linkedListToStringData(LinkedList *list) {

  std::string result="";
  for (const Node *  p=list->head; p!=NULL; p=p->next) {
    result += "[" + charToString(p->data) + "]->";
  }
  result += "null";
  return result;
}

std::string linkedListToStringType(LinkedList *list) {

  std::string result="";
  for (const Node *  p=list->head; p!=NULL; p=p->next) {
    result += "[" + charToString(p->type) + "]->";
  }
  result += "null";
  return result;
}

Node * GetNode(LinkedList * list){
	
		Node *p = list->head;
		Node *n = new Node;

		while(p){
		if (p->count == 1)
		{
			p = p->next;
		}
		else
		{
			p->count = 1;
			n = p;
			return n;
		}
	
}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//cards.cpp
//Authors: Your name and your partner's name
//Implementation of the classes defined in cards.h
#include "card.h"  // defines what must be implemented
#include "card"
#include <string>
#include <iostream>
#include <sstream> // for ostringstream
#include <cassert>
using namespace std; 



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
		Node *tp;
		Node *t = new Node;
		Node *p = list->head;
	
		while(p){
		if (!(n->data == p->data)&&(n->type == p->type))
		{
			tp = p;
			p = p->next;
		}
		else
		{
			t = p->next;
			tp->next = t;
			return;
		  
		}
	  
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
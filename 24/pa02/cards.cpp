//cards.cpp
//Authors: Your name and your partner's name
//Implementation of the classes defined in cards.h
#include "card.h"  // defines what must be implemented
#include <string>
using namespace std; 

	card::card()
	{
		list = new LinkedList;
		list->head = NULL;
		list->tail = NULL;
	}

	void card::stringToLinkedList(string s)
	{
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
	}

	void DeleteThisNode(Node *n)
	{
		Node *tp = new Node;
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
	
	Node TheNode()
	{
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
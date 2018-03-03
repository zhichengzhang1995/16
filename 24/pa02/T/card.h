//cards.h
//Authors: Your name and your partner's name
//All class declarations go here
#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std; 
//struct
	struct Node{
		char data;
		char type;
		int count;
		Node* next;
	};
		
	struct LinkedList {
		Node *head;
		Node *tail;
	};

#endif












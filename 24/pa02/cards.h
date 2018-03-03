//cards.h
//Authors: Your name and your partner's name
//All class declarations go here
#ifndef CARDS_H
#define CARDS_H
#include <string>
using namespace std; 
//struct
	struct Node{
		char data;
		char type;
		Node* next;
	};
		
	struct LinkedList {
		Node *head;
		Node *tail;
	};
//class	
    class card
    {
    public:
	
        // CONSTRUCTOR
        card( );
		void stringToLinkedList(string s);
		void DeleteThisNode(Node n);
		Node TheNode();
		
    private:

		LinkedList *list;
    };
#endif












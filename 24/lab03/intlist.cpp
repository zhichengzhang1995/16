// intlist.cpp
// Implements class IntList
// YOUR NAME(S), AND DATE

#include "intlist.h"

#include <iostream>
using std::cout;


// copy constructor
IntList::IntList(const IntList& source) {
	Node *n = source.first;
	Node *result=new Node;
	first=result;
	
	if (source.first == 0)
		result = 0;
	else {
		//result->info = n->info;
		while(n->next)
		{
			//Node *m = new Node;
			//result->next=m;
			//n=n->next;
			//result->next->info=n->info;
			//result=result->next;
			Node *m = new Node;
			result->info = n->info;
			result->next = m;
			n = n->next;
			result = result->next;
		}
		result->info = n->info;
		result->next = 0;
	}
    //IMPLEMENT THIS
}

// destructor deletes all nodes
IntList::~IntList() {
	Node *del = new Node;
	del = first;
	while(del!=0){
		Node *n = new Node;
		n = del->next;
		delete del;
		del = n;
	}
	first = 0;
    //IMPLEMENT THIS
}


// return sum of values in list
int IntList::sum() const {
	int sum = 0;
	if (first == 0) { // empty list
        return 0;
    }
    else {
        Node *n = first;
        while (n) // not last node yet
		{
			sum += n->info;
			n = n->next;
		}
		return sum;
    }
     // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the list; false if not
bool IntList::contains(int value) const {
	if (first == 0) { // empty list
		return false;
    }
    else {
        Node *n = first;
        while (n) // not last node yet
		{
			if (n->info == value)
				return true;
			n = n->next;
		}
		return false;
    }
    // REPLACE THIS NON-SOLUTION
}

// returns maximum value in list, or 0 if empty list
int IntList::max() const {
	int max = 0;
	if (first == 0) { // empty list
        return 0;
    }
    else {
        Node *n = first;
        while (n) // not last node yet
		{
			if (n->info > max)
				max = n->info;
			n = n->next;
		}
		return max;
    }
     // REPLACE THIS NON-SOLUTION
    
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
		double re = 0;
		double c = 0;
	if (first == 0) { // empty list
        return 0;
    }
    else {
        Node *n = first;
        while (n) // not last node yet
		{
			c++;
			re += n->info;
			n = n->next;
		}
		return re/c;
    }
    // REPLACE THIS NON-SOLUTION
}

// inserts value as new node at beginning of list
void IntList::insertFirst(int value) {
	if (first == 0) { // empty list
		first = new Node;
        first->info = value;
        first->next = 0;
    }
    else {
        Node *p = new Node;
		p->info = value;
		p->next = first;
		first = p;
    }
    // IMPLEMENT
}

//Assignment operator should copy the list from the source
//to this list, deleting/replacing any existing nodes
IntList& IntList::operator=(const IntList& source){
    //IMPLEMENT
	if (this == &source)
		return *this;
	else {
		if ((*this).first) //empty the list first
      {   	Node *temp1;
			Node *temp2;
			temp1=(*this).first;
			while(temp1){
				temp2=temp1->next;
				delete temp1;
				temp1=temp2;}
       }
         (*this).first=0;
		 
		 if(source.first){
			Node *n = source.first;
			//
			(*this).first=new Node;
			Node *result;
			result=(*this).first;
			while(n->next)
			{
				//Node *m = new Node;
				//result->next=m;
				//n=n->next;
				//result->next->info=n->info;
				//result=result->next;
				Node *m = new Node;
				result->info = n->info;
				result->next = m;
				n = n->next;
				result = result->next;
			}
			result->info = n->info;
			result->next = 0;
			//
			//(*this).first=new Node;
			//(*this).first->info=n->info;
			//n=n->next;
			//Node *result;
			//result=(*this).first;
			//while (n) 
			//{
				//result->next=new Node;
				//result=result->next;
				//result->info=n->info;
				//n=n->next;  
			//}
			//result->next=0;
		}
        return *this;
	}
}



// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// constructor sets up empty list
IntList::IntList() : first(0) { }


// append value at end of list
void IntList::append(int value) {
    if (first == 0) { // empty list
        first = new Node;
        first->info = value;
        first->next = 0;
    }
    else {
        Node *n = first;
        while (n->next) // not last node yet
            n = n->next;
        n->next = new Node;
        n->next->info = value;
        n->next->next = 0;
    }
}

// print values enclose in [], separated by spaces
void IntList::print() const {
    Node *n = first;
    cout << '[';
    while (n) {
        cout << n->info;
        if (n->next)
            cout << " ";
        n = n->next;
    }
    cout << ']';
}

// return count of values
int IntList::count() const {
    int result = 0;
    Node *n = first;
    while (n) {
        ++result;
        n = n->next;
    }
    return result;
}

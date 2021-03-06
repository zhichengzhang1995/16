#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p = list->head;
  Node *t;
  int c = list->head->data;
  while(p){
	  if (c < p->data)
	  {
		  c = p->data;
		  t = p;
	  }
	  p = p->next;
  }  
    

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)

  return t; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p = list->head;
  Node *t;
  t = p;
  int c = list->head->data;
  while(p){
	  if (c > p->data)
	  {
		  c = p->data;
		  t = p;
	  }
	  p = p->next;
  }  
    

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)

  return t; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  Node *p = list->head;
  Node *t;
  int c = list->head->data;
  while(p){
	  if (c < p->data)
	  {
		  c = p->data;
		  t = p;
	  }
	  p = p->next;
  }  
    

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)

  return c; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p = list->head;
  Node *t;
  int c = list->head->data;
  while(p){
	  if (c > p->data)
	  {
		  c = p->data;
		  t = p;
	  }
	  p = p->next;
  }  
    

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)

  return c;  // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  Node *p = list->head;
  Node *t;
  int c = 0;
  while(p){

	  c += p->data;
	  p = p->next;
  }  // STUB!  Replace this line with correct code
  
  
  return c;

}


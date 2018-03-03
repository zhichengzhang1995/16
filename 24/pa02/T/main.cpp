#include <iostream>
#include <fstream>
#include <string>
#include <numeric>   
#include <algorithm>
#include "card.h"  // defines what must be implemented
#include "cardsfuncs.h" 

using namespace std;

int main(int argv, char** argc){
  if(argv < 3){
    cout << "Please provide 2 file names" << endl;
    return 1;
  }
  
  ifstream cardFile1 (argc[1]);
  ifstream cardFile2 (argc[2]);
  string line;
  string sa, sb;
  sa = "";
  sb = "";

  if (cardFile1.fail() || cardFile2.fail() ){
    cout << "Could not open file " << argc[2];
    return 1;
  }

  //Read each file
  while (cardFile1 >> line){
		//cout << "Read from file: " << line << endl;
		sa += line;
  }
  cardFile1.close();


  while (cardFile2 >> line){
		//cout << "Read from file: " << line << endl;
		sb += line;
  }
  cardFile2.close();
  
	cout<<sa<<endl;
	cout<<"get the sting A"<<endl;
	cout<<sb<<endl;
	cout<<"get the sting B"<<endl;
	
	LinkedList *list1 = stringToLinkedList(sa);
	LinkedList *list2 = stringToLinkedList(sb);
	cout<<linkedListToStringData(list1)<<endl;
	cout<<linkedListToStringType(list1)<<endl;
	cout<<linkedListToStringData(list2)<<endl;
	cout<<linkedListToStringType(list2)<<endl;
  
	Node *k = new Node;
	k->type = 's';
	k->data = '2';
	//cout<<DeleteThisNode(list1, k)<<endl;
	DeleteThisNode(list1, k);
	cout<<linkedListToStringData(list1)<<endl;
	cout<<linkedListToStringType(list1)<<endl;
	
	Node *n = GetNode(list1);
	cout<<n->type<<endl;
	cout<<n->data<<endl;
	cout<<n->count<<endl;
	//
	Node *p = list1->head;
	cout<<p->type<<endl;
	cout<<p->data<<endl;
	cout<<p->count<<endl;
	//
	Node *n2 = GetNode(list1);
	cout<<n2->type<<endl;
	cout<<n2->data<<endl;
	cout<<n2->count<<endl;
  return 0;
}


















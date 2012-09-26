#include "LinkedList.h"
#include <iostream>
#include <assert.h>
#include "Node.h"

LinkedList::LinkedList() {
// node = new Node;
 int numElem = 0;
 int nodevalue = 0;
 Node *top = NULL;
 Node *bot = NULL;
 }

LinkedList::~LinkedList(){
 while (numElem > 0){
 dequeue();
  }
 }

int LinkedList::dequeue() {
 assert (numElem > 0);
 
 Node* temp = bot;
 nodevalue = temp->getValue();
 bot = temp->getNext();
 numElem--;
 delete temp;
 return nodevalue;
 }

void LinkedList::enqueue(int i){
 Node* temp = new Node(i);
 temp->setNext(top);
 top = temp;
 if ( numElem == 0) {
   bot = temp;
   }
 numElem++;
 }

int LinkedList::size() {
return numElem;
}

bool LinkedList::isEmpty() {
 if (numElem == 0){
  return true;
  }
 else{ 
  return false;
  }
 }

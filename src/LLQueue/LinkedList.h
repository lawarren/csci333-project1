#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "Node.h"

class LinkedList {
 private:
  ~LinkedList();
  LinkedList();
  int numElem;
 Node* top;
 Node* bot;
 int  nodevalue;

 public:
  int dequeue();
  void enqueue(int);
  int size();
  bool isEmpty();

};

#endif

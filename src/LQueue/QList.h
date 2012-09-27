#ifndef __QLIST_H__
#define __QLIST_H__
#include <list>

class QList {
 private:
 int temp;
 List();
 
 public:
 int dequeue();
 void enqueue(int);
 int size();
 bool isEmpty();

};


#endif

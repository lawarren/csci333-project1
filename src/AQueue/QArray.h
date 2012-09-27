#ifndef __QARRAY_H__
#define __QARRAY_H__

class QArray {
 private:
  int* theQArray;
  int front;
  int back;
  int numElem;
  int capacity;
  int value;
  int result;
  int* tempQArray;
  QArray(int initialSize = 10);
  ~QArray(); //destructor

 public:
 int dequeue();
 void enqueue(int);
 int size();
 bool isEmpty();
 
};


#endif

#include "QArray.h"
#include <iostream>

QArray::QArray(int initialSize) {
  theQArray = new int[initialSize];
  numElem = 0;
  front = 0;
  back = 0;
  capacity = initialSize;
}

QArray::~QArray() {
  delete[] theQArray;
}

void QArray::enqueue(int value) {
  back = (back + 1) % capacity;
  theQArray[back] = value;
  
  numElem++;
  if ( numElem == capacity){
    capacity = capacity * 2;
    tempQArray = new int[capacity];
    for( int i = 0; i < capacity/2; ++i){
      tempQArray[i] = theQArray[i];
     }
    delete[] theQArray;
    theQArray = new int[capacity];
    for(int i = 0; i < capacity; ++i){
      theQArray[i] = tempQArray[i];
      }
    delete[] tempQArray;
   }
 }

int QArray::dequeue() {
  result = theQArray[front];
  front = (front +1) % capacity;
  numElem--;
  if (numElem == (.25 * capacity)){
    capacity = (capacity/2);
    tempQArray = new int[capacity];
    for(int i = 0; i < capacity; ++i){
      tempQArray[i] = theQArray[i];
     }
    delete[] theQArray;
   theQArray = new int[capacity];
    for(int i = 0; i < capacity; ++i){
      theQArray[i] = tempQArray[i];
     }
    delete[] tempQArray;
  }
  return result;
}

int QArray::size() {
  return capacity;
}

bool QArray::isEmpty() {
 if (numElem ==  0){
 
  return true;
  }

 else {
  return false;
   }
}

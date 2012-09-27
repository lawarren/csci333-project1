include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  if(top==capacity){
   capacity = capacity * 2;
   tempStack = new int[capacity];
   for(int i = 0; i < capacity/2; ++i){
     tempStack[i] = theStack[i];
    }
  delete [] theStack;
  theStack = new int[capacity];
  for(int i = 0; i < capacity; ++i){
     theStack[i] = tempStack[i];
    }
  delete [] tempStack;
  }
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}

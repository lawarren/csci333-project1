#ifndef __NODE_H__
#define __NODE_H__

class Node {

private:
 int value;
 Node* Next;

public:
 Node(int value);
 int getValue();
 Node* getNext();
 void setNext(Node *);
 };
#endif

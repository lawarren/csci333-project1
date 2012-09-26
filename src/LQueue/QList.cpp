#include <iostream>
#include "QList.h"
#include <assert.h>
#include <list>

QList::QList() {
 }


void QList::enqueue(int i) {
 push_back(i);
 }

int QList::dequeue() {
 assert(empty != true);
 temp = front();
 pop_front();
 return temp;
 }

int QList::size() {
 return size();
 }

bool QList::isEmpty() {
 return empty();
 }

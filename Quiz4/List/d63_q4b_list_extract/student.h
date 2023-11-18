#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value, iterator a, iterator b, CP::list<T>& output) {
    while(a!=b){
      if(*a == value){
        node *currentNode = a.ptr;
        node * nextNode = a.ptr -> next;

        currentNode->prev->next = nextNode;
        nextNode -> prev = currentNode->prev;

        currentNode->next = output.mHeader->next;
        output.mHeader->next->prev = currentNode;
        currentNode -> prev = output.mHeader;
        output.mHeader -> next = currentNode;

        mSize -- ;
        output.mSize++;

        a.ptr = nextNode;
      }
      else{
        a++;
      }
    }
}


#endif

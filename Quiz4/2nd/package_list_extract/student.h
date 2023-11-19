#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  auto it = a;
  while(it!=b){
    if(*it==value){
      iterator tmp(it.ptr->next);
      node *present = it.ptr;
      node *preN = it.ptr->prev;
      node *nextN = it.ptr -> next;

      node *firstN = output.mHeader->next;

      preN->next = nextN;
      nextN -> prev = preN;

      output.mHeader -> next = present;
      present->prev = output.mHeader;
      present -> next = firstN;
      firstN->prev = present;

      it = tmp;
      mSize--;
      output.mSize++;
    }
    else{
      it++;
    }
  }

}

#endif

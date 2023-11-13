#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  b--;
  auto it = a;
  while(it!=b){
    if(*it == value){
      auto it1(it.ptr->next)
      node *n = node(value,output.mHeader,output.mHeader->next);
      output.mHeader->next->prev = n;
      output.mHeader->next = n;
      output.mSize -- ;
      
      

      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it,ptr->prev;
      delete it.ptr;
      mSize--;
      it = it1;
    }
    else{
     a++;
    }

    
    
  }

}

#endif

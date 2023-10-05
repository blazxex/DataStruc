#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  auto tmp_first = first;
  size_t sSize = 0;
  while(tmp_first!=last){
    sSize++;
    tmp_first++;
  }
  mData = new T[sSize]();
  mCap = sSize;
  mSize = sSize;
  int i = 0;
  while(first!=last){
    last--;
    mData[i++] = *last;
  }

}

#endif

#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include<cmath>
#include<vector>
template <typename T>
std::vector<std::vector<T> >  CP::stack<T>::split_stack(int k) const {
  
  //your code here
  std::vector<std::vector<T> > v(k);
  int idx = (mSize - 1 +k)%k;
  for(int i = 0 ; i<mSize;i++){
    v[idx--].push_back(mData[i]);
    if(idx == -1) ptr = k-1;
  }

  return v;
  

}

#endif


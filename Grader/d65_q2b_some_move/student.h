#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  auto it = lower_bound(aux.begin(),aux.end(),index+1)-aux.begin();
  if(it>0){
    index -=aux[it-1];
  }
  
  mData[it].insert(mData[it].begin()+index, value.begin(), value.end());
  for(int j=it;j<aux.size();++j) 
    aux[j] += value.size();
  mCap += value.size();
  mSize += value.size();

}

#endif
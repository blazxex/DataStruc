#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  auto it = upper_bound(aux.begin(),aux.end(),index);
  int idx = it-aux.begin();
  int vId = index;
  ensureCapacity(mSize+value.size());

  if(it == aux.begin()){
    idx = 0;
  }else{
    vId = index-aux[idx-1];
  }

  size_t arraySize = mData[idx].size()+value.size();

  vector<T> tmp(arraySize);

  int count = 0;
  for(int i = 0 ; i<arraySize;i++){
    if(i == vId){
      for(auto &x : value){
          tmp[i++] = x;
          count++;
      }
    }
    tmp[i] = mData[idx][i-count];
  }
  std::swap(mData[idx],tmp);
 
  for(int i = idx ; i<aux.size();i++){
    aux[i]+=value.size();
  }
  
  mSize+= value.size();


}

#endif
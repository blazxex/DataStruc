#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<iostream>
#include<vector>
//DO NOT INCLUDE ANYTHING

using namespace std;
template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;

  
  std::vector<T> v;
  
  while(last!=first){
    last--;
    v.push_back(*last);
    
  }
  if(mCap<v.size()){
  expand(v.size());}
  mSize = v.size();

  for(int i= 0 ; i<mSize;i++){
    mData[i] = v[i];
  }
  


}

#endif

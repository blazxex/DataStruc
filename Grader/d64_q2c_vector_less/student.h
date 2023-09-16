#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>
template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if(mSize==0 &other.mSize>1){
    return true;
  }
  if(mData[0]<other[0]){
    return true;
  }
  if(mData[0]==other[0]){
    int i =1;
    while(i<std::min(mSize,other.mSize)){
      if(mData[i]<other[i]){
        return true;
      }
      i++;
    }
    if(i<other.mSize){
      return true;
    }
    
  }

  return false;
}

#endif

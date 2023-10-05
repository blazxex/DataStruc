#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>
template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if(mSize ==0 && other.size()!=0){
    return true;
  }
  if(mSize !=0 && other.size()!=0){
    if(mData[0]<other[0]){
      return true;
    }
    if(mData[0]==other[0]){
      for(int i = 1 ; i < std::min(mSize,other.size());i++){
        if(mData[i]!=other[i]){
          if(mData[i]<other[i]){
            return true;
          }
        }
      }
      if(mSize<other.size()){
        return true;
      }
    }
  }
  return false;
}

#endif

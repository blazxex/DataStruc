#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  T mini;
  for(auto &x : pos){
    if( x< mSize){
      mini = mData[(mFront+x)%mCap];
      break;
    }
  }
  for(auto &x : pos){
    if( x< mSize){
      if(comp(mData[(mFront+x)%mCap],mini))
        mini = mData[(mFront+x)%mCap];
    }
  }

  //should return something
  return mini;
}

#endif

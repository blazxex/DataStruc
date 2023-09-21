#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {

  T x = mData[(pos + mFront) % mCap];
  size_t i = pos;
  while(i< mSize || i%mCap< (mFront+mSize-1)%mCap){
    size_t idx  = (i+mFront)%mCap;
    mData[idx] = mData[idx+1];
    i++;
  }
    mData[(mFront+mSize-1)%mCap] = x;



}


#endif

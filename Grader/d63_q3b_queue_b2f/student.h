#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  if(!empty()){
   if(mFront==0){
    mFront = mCap-1;
   }
   else mFront--;
   mData[mFront] = mData[(mFront + mSize) % mCap];
  }
}

#endif

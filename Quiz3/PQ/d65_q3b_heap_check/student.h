#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  size_t idx = mSize-1;
  while(idx>0){
    size_t p = (idx-1)/2;
    if(!mLess(mData[idx],mData[p])){
      return false;
    }
    idx--;
  }
  return true;
}

#endif
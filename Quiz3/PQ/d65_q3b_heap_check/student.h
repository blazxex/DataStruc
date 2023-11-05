#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  for(int i = 1 ; i< mSize ; i ++){
    int p = int((i-1)/2);
    if(!mLess(mData[i],mData[p])) return false;

  }
  return true;
}

#endif
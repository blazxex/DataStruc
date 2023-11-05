#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  std::vector<T> tmp;
  for(int i = 0 ; i < 7 && i<mSize ; i++){ // height of 3 contain 7 members
    tmp.push_back(mData[i]);
  }
  sort(tmp.rbegin(),tmp.rend(),mLess);
  return tmp[k-1];
}

#endif

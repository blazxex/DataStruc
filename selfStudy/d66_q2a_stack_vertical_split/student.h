#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  int idx=0;
  int r = mSize % k;  //r
  int s = mSize / k; // size
  output = std::vector<std::stack<T>>(k);
  for (int i=k-1;i>=0;i--) {
    for (int j=0;j<s;j++) {
      output[i].push(mData[idx]);
      idx++;
    }
    if (i < r) {
      output[i].push(mData[idx]);
      idx++;
    }
  }
}

#endif


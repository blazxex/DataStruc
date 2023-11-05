#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include<cmath>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  size_t idx = 0;
  std::vector<T> data;
  for(int i = 0 ; i< k ; i++){
    idx = (idx*2)+1;
  }

  for(int i = idx ; i < (idx*2)+1;i++){
    if(i<mSize)
     data.push_back(mData[i]);
  }
  sort(data.begin(),data.end(),not_fn(mLess));
  return data;


  
}

#endif


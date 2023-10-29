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
  std::vector<T> r;
  size_t min_id = 0;
  size_t max_id = 0;
  size_t siz = 1;
  for(int i = 0 ; i < k ; i++){
    min_id = (min_id*2)+1;
    siz*=2;
  }
  if(min_id>mSize-1){
    return r;
  }
  for(size_t j = 0 ; j< siz;j++ ){
    if(min_id>mSize-1){
      break;
    }
    r.push_back(mData[min_id]);
    min_id++;

  }
 std::sort(r.rbegin(),r.rend(),mLess);
  return r;
}

#endif


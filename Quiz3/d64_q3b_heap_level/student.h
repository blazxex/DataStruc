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
  
  for(int i = 1 ; i <= k-1 ; i++){
    min_id+= pow(2,i);
  }

  max_id = min_id+pow(2,k);
  if(max_id>mSize-1){
    max_id = mSize-1;
  }
  r.resize(max_id-min_id);
  size_t l = 0;
  for(size_t j = min_id+1 ; j<=max_id ;j++ ){
    r[l++] = mData[j];

  }
  std::sort(r.begin(),r.end(),std::greater<T>());
  return r;
}

#endif


#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  auto it = std::find(mData,mData+mSize,k);
  return it-mData!=mSize;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  if(!find(k)){
    return -1;
  }
  else{
    int count = 0;
    for(int i = mSize-1;i>=0;i--){
      if(mData[i]==k){
        while(i>0){
          i = (i-1)/2;
          count++;
        }
        return count;
      }
    }
  }

}

#endif


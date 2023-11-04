#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  auto it = std::find(mData,mData+mSize,k);
  return it!=(mData+mSize);
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
 if(!find(k)) 
  return -1;
 size_t i = mSize-1;
 size_t count = 0;
 while(i>=0){
  if(mData[i]==k){
    break;
  }
  i--;
 }
 while(i>0){
  i = (i-1)/2;
  count++;
 }
 return count;

}

#endif


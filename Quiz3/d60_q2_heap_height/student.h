#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  size_t idx = mSize-1;
  int height = 0;
  if(idx ==-1){
    return -1;
  }
  while(idx>0){
    idx = (idx-1)/2;
    height++;
  }
  return height;

}

#endif

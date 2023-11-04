#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int height = 0;
  if(mSize==0){
    return -1;
  }
  int node = 0;
  while(node<mSize){
    node = (node*2)+1;
    height++;
  }
  return height-1;

}

#endif


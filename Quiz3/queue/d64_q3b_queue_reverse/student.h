#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include<stack>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  std::stack<T> tmp;
  for(int i = a ; i <= b ; i++){
    tmp.push(mData[(mFront+i)%mCap]);
  }
  for(int i = a ; i <= b ; i++){
    mData[(mFront+i)%mCap] = tmp.top();
    tmp.pop();
  }
}

#endif

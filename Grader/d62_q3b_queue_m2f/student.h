#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
     T x = mData[(pos+mFront)%mCap];
    size_t move = mSize-(pos+mCap)%mCap;
    for(int i = 0 ; i<move;i++){
        mData[(mFront+pos+i)%mCap] = mData[(mFront+pos+i+1)%mCap];
    }
    mData[(mFront+mSize-1)%mCap] = x;
    mFront = (mFront+mSize-1)%mCap;
    mCap = mSize;
    }

#endif

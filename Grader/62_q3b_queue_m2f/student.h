#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T x = mData[(mFront+pos)%mCap];
    T *arr = new T[mSize]();
    bool check = false;
    arr[0] = x;
    mData.remove()
    for(int i = 1 ; i<mSize;i++){
        if(i!=(mFront+pos)%mCap){
            check = true;
        }
        if(!check){
            arr[i] = mData[(mFront+i-1)%mCap];
        }
        else{
            arr[i] = mData[(mFront+i)%mCap];
        }
       
    }
    delete []mData;
    mData = arr;
}

#endif

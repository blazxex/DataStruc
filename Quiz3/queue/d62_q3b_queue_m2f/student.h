#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T *arr = new T[mSize]();
    arr[0] = mData[(mFront+pos)%mCap];
    int j = 1;
    for(int i = 0; i< mSize ; i++){
        if(i!=pos){
            arr[j] = mData[(mFront+i)%mCap];
            j++;
        }
    }
    
    delete [] mData;
    mData = arr;
    mCap = mSize;
    mFront = 0;
}

#endif

#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<algorithm>

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T *arr = new T[mSize+(b-a)+1]();
    int size = mSize+(b-a)+1;
    int idx = mSize+(b-a);
    a = mSize-a-1;
    b = mSize-b-1;
    for(int i = mSize-1;i>=0;i--){
        arr[idx--] = mData[i];
        if(b<=i && i<=a){
            arr[idx--] = mData[i];
        }

    }
    delete [] mData;
    mData = arr;
  
    mSize = size;
    mCap = mSize;
}

#endif
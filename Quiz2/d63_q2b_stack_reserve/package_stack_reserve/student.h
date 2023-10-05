#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int thisSize = mCap - mSize;
    int otherSize = other.mCpa - other.mSize;
    if(thisSize>otherSize){
        return 1;
    }
    if(thisSize<otherSize){
        return -1;
    }
    return 0;
}

#endif

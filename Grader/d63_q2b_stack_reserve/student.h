#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    size_t thisSize = mCap - mSize;
    size_t otherSize = other.mCap - other.mSize;
    if(thisSize>otherSize){
        return 1;
    }
    if(thisSize==otherSize){
        return 0;
    }
    return -1;
        
}

#endif

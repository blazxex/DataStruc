#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,size_t> count;
    std::vector<std::pair<T,size_t>> multiCount;
    for(int i = 0 ; i < mSize;i++){
        T data = mData[(mFront+i)%mCap];
        count[data]+=1;
    }
    for(auto &x : k){
        multiCount.push_back({x,count[x]});
    }
    return multiCount;

}

#endif

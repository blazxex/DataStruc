#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> x;
 T *arr = new T[mSize]();
 size_t k = 0;
 for(int i = 0;i<mSize;i++){
    if(x.find(mData[i])==x.end()){
    x.insert(mData[i]);
    arr[k++] = mData[i];
  }
   
 }  
 
 delete []mData;
 mData = arr;
 mSize = k;

}

#endif
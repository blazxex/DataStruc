#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  size_t num = data.size();
  size_t newSize = num+mSize;
  T *arr = new T[newSize]();
  size_t cId = 0;
  size_t i =0;
  size_t j =0;
  while(j<newSize){
    int pos = data[cId].first;
    if(pos!=i){
      arr[j] = mData[i];
      i++;
    }else{
      arr[j] = data[cId].second;
      cId++;
    }
    j++;
  }
  delete [] mData;
  mData = arr;
  mSize = newSize;
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<algorithm>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  T *arr = new T[mSize+data.size()]();
 
  int id = 0;
  int idx = 0;
  for(int i = 0 ;i<=mSize;i++){
    int key = data[id].first;
    T value = data[id].second;
    if(i==key){
      arr[idx++] = value;
      id++;
    }
      arr[idx++] = mData[i];

   
    
  }
  delete [] mData;
  mData = arr;
  mSize = mSize+data.size();
  mCap = mSize;

}

#endif

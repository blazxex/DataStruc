#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  
  size_t dataSize = (last-first);
  size_t newSize = mSize + dataSize;
  size_t insertPos = position-begin();
  T *arr =  new T[newSize]();
  for(size_t i = 0 ; i<insertPos;i++){
    arr[i] = mData[i];
  }
  for(size_t i = newSize-1; i>=insertPos+dataSize;i--){
    arr[i] = mData[i-dataSize];
  }
  while(first!=last){
    arr[insertPos] = *first;
    first++;
    insertPos++;
  }
  delete []mData;
  mData = arr;
  mSize = newSize;
}

#endif

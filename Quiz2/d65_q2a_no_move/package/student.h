#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  auto i = upper_bound(aux.begin(),aux.end(),idx);
  if(i==aux.begin()){
    return mData[0][idx];
  }
  int id = i-aux.begin();
  return mData[id][idx-aux[id-1]];

}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  aux.push_back(mCap);

}

#endif

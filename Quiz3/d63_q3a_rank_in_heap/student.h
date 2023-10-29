#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  if(pos == 0 || mData[pos] == mData[0]){
    return 0;
  }
  T *arr = mData;
  sort(arr,arr+mSize,greater<T>());
  auto it = std::find(arr,arr+mSize,mData[pos]);
  return it-arr;

}

#endif

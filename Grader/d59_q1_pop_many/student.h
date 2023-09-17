#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  if(K>mSize){
    K = mSize;
  }
  mSize-=K;
  //write your code here
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  if(K>mSize){
    K = mSize;
  }
  std::stack<T> s;
  for(size_t i = K ; i >0 ; i--){
    s.push(mData[mSize-i]);

  }
  mSize -=K;
  return s;


}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(pos<mSize && pos>= 0){
  node *secStart = it.ptr;
  node *secEnd = mHeader->prev;
  node *firstStart = mHeader->next;
  node *firstEnd = it.ptr->prev;

  mHeader ->prev = firstEnd;
  firstEnd -> next = mHeader;

  result.mHeader->next = secStart;
  secStart->prev = result.mHeader;
  result.mHeader->prev = secEnd;
  secEnd -> next  = result.mHeader;
  


  result.mSize = mSize - pos;
  mSize = pos;


  }
  
  
  return result;
}

#endif

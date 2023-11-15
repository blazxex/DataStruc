#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  size_t oldSize = mSize;

  if(it == begin()){
    result.mHeader->next =  mHeader->next;
    result.mHeader->prev = mHeader->prev;

    mHeader->prev->next = result.mHeader;
    it.ptr->prev = result.mHeader;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;

    mSize = 0;
    result.mSize = oldSize;
  }

  else if(it!=end()){
    node* firstEnd = it.ptr->prev;
    node* secondEnd = mHeader->prev;
    
    firstEnd->next = mHeader;
    mHeader->prev = firstEnd;

    secondEnd->next = result.mHeader;
    result.mHeader->next = it.ptr;
    it.ptr->prev = result.mHeader;
    result.mHeader->prev = secondEnd;
    
    


    result.mSize = mSize-pos;
    mSize = pos;
  }

  return result;
}

#endif

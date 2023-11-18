#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
 if(it!=end()){
    node* beFore = it.ptr->prev;
    node* endNode = mHeader->prev;
    node* startNode = it.ptr;

    beFore->next = mHeader;
    mHeader->prev = beFore;
   

    endNode->next = result.mHeader;
    result.mHeader->next = startNode;
    startNode->prev = result.mHeader;
    result.mHeader->prev = endNode;
    


    result.mSize = mSize-pos;
    mSize = pos;
  }
  return result;
}

#endif

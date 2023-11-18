#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
for(auto &n : ls){
  n.mHeader->next->prev = mHeader->prev;
  n.mHeader->prev->next = mHeader;
  mHeader->prev->next = n.mHeader->next;
  mHeader->prev = n.mHeader->prev;
  mSize+= n.mSize;
  n.mHeader->next = n.mHeader;
  n.mHeader->prev = n.mHeader;

  n.mSize = 0;

}
}

#endif

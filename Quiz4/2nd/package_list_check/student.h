#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  if(mHeader->next == NULL) return false;
  if(mHeader->prev == NULL) return false;
  if(mHeader->next != begin().ptr) return false;
  if(mHeader->prev == NULL) return false;
  
  auto it = begin();
  int i = 0;
  while(i!=mSize){
    if (it.ptr->next == NULL || it.ptr->prev == NULL || it.ptr ==NULL ||it.ptr->data == NULL) return false;
  
    if(it.ptr->prev->next != it.ptr) return false;
    if(it.ptr->next->prev != it.ptr) return false;
    it++;
    i++;
  }
  if(it!=end()){
    return false;
  }
  return true;
}


#endif

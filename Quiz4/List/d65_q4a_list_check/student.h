#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  if(mHeader==nullptr || mHeader->prev == NULL ||  mHeader-> next == NULL ){
    return false;
  }
  node *a = mHeader;
  node *b = mHeader->next;
  
  for(int i = 1 ; i < mSize ; i++){
   if(a == nullptr || b == nullptr)
    return false;
    if(a!=b->prev || a->next!=b){
      return false;
    }
    a = a->next;
    b= b->next;
  }
  if(n==nullptr || m==nullptr || m->next!=mHeader || mHeader->prev!=m) return false;
  return true;
}


#endif

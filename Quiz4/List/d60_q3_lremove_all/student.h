#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
    auto it = begin();
    while(it!=end()){
      if(*it == value){
   
        node *current = it.ptr;
        node *preN = it.ptr ->prev;
        node * nextN = it.ptr -> next;

        preN->next = nextN;
        nextN->prev = preN;
        delete current;
        mSize--;
        it.ptr = nextN;
        
      }
      else{
        it++;
      }
    }
}

#endif

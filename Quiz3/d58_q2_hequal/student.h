#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(mSize!=other.mSize || mData[0]!=other.mData[0]){
    return false;
  }
  
  return true; // you can change this line
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  if(mSize == 0 ){
    return false;
  }
  iterator bg = &mData[0];
  if(it-bg<0 || it-bg >=mSize){
    return false;
  }
  return true;


}

#endif

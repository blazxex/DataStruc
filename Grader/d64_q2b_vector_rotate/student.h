#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  size_t beginPos = first-begin();
  size_t lastPos = last-begin();
  size_t num = last-first;
  T m[k];
  size_t j = 0;
  if(k!=0 && num !=0){
    for(size_t i = beginPos;i<beginPos+k;i++){
      m[j++] = mData[i];
    }
    for(size_t i = beginPos+k;i<lastPos;i++){
      mData[i-k] = mData[i];
    }
    for(size_t i = 0 ; i<k ; i++){
      mData[lastPos-i-1] = m[k-i-1];
    }
  }

  
}

#endif

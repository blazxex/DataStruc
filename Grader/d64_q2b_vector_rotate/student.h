#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  size_t beginPos = first-begin();
  size_t lastPos = last-begin();
  
  if(k!=0){
    T * arr = new T[k+1]();
    for(int i = 0 ; i< k ; i++){
      arr[i] = mData[beginPos+i];
    }

    for(size_t i = beginPos ; i<lastPos-1-k;i++){
      mData[i] = mData[i+k];
    }
    for(int i = 0 ; i< k ; i++){
      mData[beginPos+i]= arr[i] ;
    }
  
  }

  
}

#endif

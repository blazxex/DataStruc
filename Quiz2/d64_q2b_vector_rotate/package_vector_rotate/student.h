
#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>

void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {

 
  size_t f = first-begin();
  size_t l = last-begin();
  size_t loop = l-f;
  int ptr = f+k;
if(k!=0 && loop !=0){
  T hold[loop];
  for(int i = 0 ; i<loop ; i++){
    hold[i] = mData[f+((k+i)%(loop))];
  }
  int  j = 0;
  for(int i = f ; i< l ; i++){
    mData[i] = hold[j++];
  }
}

}


#endif

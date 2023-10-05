
#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>

void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  std::vector<T> rot(k);
  int bg = first-begin();
  int ed = last-begin()-1;
  int range = ed - bg;
  int start = k+bg;
  for(int i = 0 ; i< range ;i++){
    rot[i] = mData[bg+(k+i)%range];
    std::cout<<bg<<" ";
  }
  int j = 0;
  for(int i = bg ; i< ed ;i++){
    mData[i] = rot[j++];
    
  }

}


#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(a-b>0){
     iterator tmp = a;
     a =b;
     b = tmp;
  }

  size_t rangeA = a+m-begin();
  size_t rangeB = b+m-begin();
  
 if(m<=0){
  return false;
 }
 if(b+m-begin()>=mSize){
  return false;
 }
 if(a-begin()<0){
  return false;
 }
 if(b-begin()(a+m-begin())){
  return false;
 }
  
  for(size_t i = 0 ; i<m;i++){
    std::swap(*a,*b);
    a++;b++;
  }
  return true;
  
}

#endif

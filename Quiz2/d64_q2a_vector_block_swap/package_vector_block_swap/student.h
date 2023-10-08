#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  int aId = a-begin();
  int bId = b-begin();
  if(aId>bId){
  std::swap(aId,bId);
  }
  
  if(m<=0 || bId <= aId+m-1 ||bId+m>=mSize || aId<0 || bId<0){
    return false;
  }
  for(int i = 0 ; i < m ; i++){
    std::swap(mData[aId+i],mData[bId+i]);
  }
  return true;
}

#endif

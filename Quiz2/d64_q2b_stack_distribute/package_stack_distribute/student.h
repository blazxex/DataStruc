#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> result(k);
  int over = size()%k;
  int id = mSize;
  int amount = size()/k;
  for(int i = 0 ; i< k;i++){
    int loop = amount;
    if(i<over){
      loop = amount+1;
    }
    for(int j = 0 ; j<loop;j++){
      result[i].push_back(mData[--id]);
    }

  }

  return result;

}
#endif

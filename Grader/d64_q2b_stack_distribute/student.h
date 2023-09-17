#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<vector>
#include<stack>

using namespace std;

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> v(k);

    size_t member = size()/k;
    size_t more = size()%k;
    size_t sSize = size()-1;
    for(size_t i = 0 ; i < more ; i++){
      for(size_t j = 0 ; j< member+1 ; j++){
        v[i].push_back(mData[sSize--]);
      }
    }
    for(size_t i = more ; i < k ; i++){
      for(size_t j = 0 ; j< member ; j++){
        v[i].push_back(mData[sSize--]);
      }
    }


  return v;
}
#endif

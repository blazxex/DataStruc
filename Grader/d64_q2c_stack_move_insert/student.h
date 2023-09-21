#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<vector>

using namespace std;
template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  vector<T> v;
  if(m>s2.mSize){
    m = s2.mSize;
  }
  size_t y = m;
  size_t old = mSize;
  while(y--){
    v.push_back(s2.top());
    s2.pop();
  }
  if(mCap<mSize+m){
    expand(mSize+m);}
    mSize+=m;
  
  for(int i = 0 ; i< k ; i++){
    mData[mSize-i-1] =  mData[old-i-1];
  }
  for(int i = 0 ; i < v.size();i++){
    mData[mSize-k-i-1] = v[i];
  }






}
#endif
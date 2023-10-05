#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<vector>
#include<stack>
template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  if(m>s2.mSize){
    m = s2.mSize;
  }
  std::stack<T> tmp;
  std::stack<T> tmp2;
  // expand(mSize+m);
  while(m--){
    tmp.push(s2.top());
    s2.pop();
  }
  for(int i = 0 ; i<k;i++){
    tmp2.push(top());
    pop();
  }
  while(!tmp.empty()){
    push(tmp.top());
    tmp.pop();
  }
   while(!tmp2.empty()){
    push(tmp2.top());
    tmp2.pop();
  }

  

}
#endif

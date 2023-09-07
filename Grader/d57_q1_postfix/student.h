#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>


using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> s;
  int num,op;
  int sum = 0;
  for(int i = 0;i<v.size();i++){
    op  = v[i].first;
    num = v[i].second;
    if(op==1){
      s.push(num);
    }
    else{
      int a = s.top();
      sum = a;
      s.pop();
      if(!s.empty()){
        int b = s.top();
        s.pop();
        switch (num)
        {
          case 0:
            sum= b+a;
            break;
          case 1:
            sum= b-a;
            break;
          case 2:
            sum= a*b;
            break;
          case 3:
            sum= b/a;
            break;
        }
  
    }
     s.push(sum);
    }
  } 
  return s.top();
}

#endif

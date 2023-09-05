#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include<stack>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {

    stack<int> s ;
    int sum = 0;
    for(auto &x : v){
        int a = x.first;
        int b = x.second;
        if(a==1){
            s.push(b);
        }
        else {
            switch (b)
            {
                case 0:
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(x+y);
                break;
            case 1:
            int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(x-y);
            break;
            case 2:
             int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(x+y);
                break;
            case 3:
               int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(x/y);
                break;
            
            
            default:
                break;
            }
            
      
            
        }

    }

    if(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    return sum;
}
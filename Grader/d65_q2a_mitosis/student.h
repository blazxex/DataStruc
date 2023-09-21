#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<vector>
using namespace std;
template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> v2;
     for(int i = 0;i<a;i++){
        v2.push(top());
       pop();
    }
    for(int i = a;i<=b;i++){
        v2.push(top());
        v2.push(top());
        pop();
    }
    while(!v2.empty()){
        push(v2.top());
        v2.pop();
    }

}

#endif
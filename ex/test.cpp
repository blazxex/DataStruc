#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    int temp = 99;
    while(temp!=0){
        cin>>temp;
        if(temp == 0){
            break;
        }
        s.push(temp);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
#include<iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long cap = 1;
    while(cap<n) cap*=2;
    cout<<cap-n;


}
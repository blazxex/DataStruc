#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,k;
  cin>>n>>k;
  long long height = 0;
  long long sum = 0;
  if(n==1){
    cout<<0;
  }
  else if(k==1){
    cout<<n-1;
  }
  else{
    n--;
    while(sum<n){
        sum = (sum*k)+1;
        height++;
    }
    cout<<height-1;
    }
  
}
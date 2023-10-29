#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k,s,c,l;
    c = 0;
    l = 0;
    cin>>n>>k;
    if(k==1){
        cout<<n-1;
        return 0;
    }
    while(c<n){
        c+=pow(k,l);
        l++;
    }
    cout<<l-1;
    
}

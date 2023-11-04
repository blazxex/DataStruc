#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,n,m;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
    if(a==b){
        cout<<"a and b are the same node";
    }
    else{
        if(a>b){
            while(a>=b){
                if(a==b){
                    cout<<"b is an ancestor of a";
                    break;
                }
                a = (a-1)/2;
            }
            if(a!=b){
            cout<<"a and b are not related";
            }
            
        }
        else{
            while(b>=a){
                if(a==b){
                    cout<<"a is an ancestor of b";
                    break;
                }
                b = (b-1)/2;
            }
            if(a!=b){
            cout<<"a and b are not related";
            }

        }
    }
    cout<<"\n";
    }

    
}
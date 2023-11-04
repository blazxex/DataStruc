#include<bits/stdc++.h>

using namespace std;

void fx(int n , int a , vector<int> &parents){
    if(a>n){

    }else{
        if((2*a)+1<=n){
            parents.push_back((2*a)+1); 
            fx(n,(2*a)+1,parents);
        }
    if((2*a)+2<=n){
            parents.push_back((2*a)+2); 
            fx(n,(2*a)+2,parents);
        }
    } 
}

int main(){
    int n,a;
    vector<int> parents;
    cin>>n>>a;
    parents.push_back(a);
    fx(n-1,a,parents);
    sort(parents.begin(),parents.end());
    cout<<parents.size()<<"\n";
    for(auto &x : parents){
        cout<<x<<" ";
    }

}
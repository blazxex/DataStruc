#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1,2,3,4};
    auto it = a.insert(a.begin(),999);
    cout<<" "<<*it;
    for (auto &x:a){
        cout<<x<<" ";
    }
}
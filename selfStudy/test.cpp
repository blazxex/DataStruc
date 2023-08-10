#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  // initializer list
    // vector<int> a ={2,3};
    // vector<bool> b = {true,false,true};

    // a.push_back(10);

    // a.insert(a.begin(),99);
    // a.insert(a.end(),-5);

    // sort(a.begin(),a.end());
    // a.pop_back();
    
    // for (size_t i=0 ; i<a.size();i++){
    //     cout << a[i]<<" ";
    // }
    // cout << endl;

    // for (size_t i=0;i<b.size();i++){
    //     cout << b[i]<<" ";
    // }
    vector<int> v = {110,20};
    auto it = v.end()-1;
    v.resize(10);
    for (auto &x : v){
        cout << x <<endl;
    }
    cout<<*it<<endl;

    // v.push_back(20);
    // auto it = find(v.begin(),v.end(),20);
    // cout<< *it;
    // v2.push_back(20);
    //  for(auto &x :v2){
    //     cout<<x<<endl;
    // }
    v.insert(it,99);
    // for (auto &x : v){
    //     cout << x <<endl;
    // }



}

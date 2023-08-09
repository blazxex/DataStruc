#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  // initializer list
    vector<int> a ={2,3};
    vector<bool> b = {true,false,true};

    a.push_back(10);

    a.insert(a.begin(),99);
    a.insert(a.end(),-5);

    sort(a.begin(),a.end());
    a.pop_back();
    
    for (size_t i=0 ; i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout << endl;

    for (size_t i=0;i<b.size();i++){
        cout << b[i]<<" ";
    }



}

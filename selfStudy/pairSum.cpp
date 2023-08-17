#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
    vector<int> a ={1,2,5,4};
    int sum;
    cin>>sum;
    for (size_t i = 0;i<a.size();i++){
        int target = abs(sum-a[i]);
        auto x = find(a.begin()+i+1,a.end(),target);
        if (x!=a.end()){
            cout<<"YES"<<" "<<*x<<"+"<<a[i];
            break;
        }
        if (x==a.end()&&i == a.size()-1){
        cout<<"NO";
    }
    }

    
 
    


}
#include <iostream>
#include <vector>

using namespace std;
int main() {

    

    vector<int> v= {7,8,20,1,2,5,6,8,3};
    // v = {7,8,14,20,1,2,5,6,8,3};
    cout<<v.back();
    
    
}
    

template <typename T>
 class vector {
    void reverse(iterator it1, iterator it2){
        int n = it2 - it1;
        int p = it1 - begin();
        for(int i = 0 ; i < n ; i ++){
            insert(it2,*it1);
            erase(it1);
            it1 = mData + p;
            it2--;
        }
    }
 }
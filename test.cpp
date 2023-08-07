#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};
    for (int i=0; i<vector1.size();i++){
        cout<<vector1[i];
    }
}
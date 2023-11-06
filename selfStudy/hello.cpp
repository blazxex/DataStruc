#include <iostream>
using namespace std;
int main()
{
    vector<int> x = {1,2,3,4,5,6};
    auto it = x.rbegin();
    for(int i = 0 ; i < 6 ; i++){
        cout<< it<<"\n";
        it++;
    }
}
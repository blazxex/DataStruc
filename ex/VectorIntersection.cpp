#include<iostream>
#include<set>
#include <algorithm>
using namespace std;

int main(){
    set<int> first;
    set<int> second;
    set<int> intersec;
    int firstSize,secondSize,num;
    cin>>firstSize>>secondSize;
    for(int i = 0; i< firstSize;i++){
        cin>>num;
        first.insert(num);
    }
    for(int i = 0; i< secondSize;i++){
        cin>>num;
        second.insert(num);
    }


    set_intersection(
        first.begin(), first.end(),
        second.begin(), second.end(),
        inserter(intersec, intersec.begin())
    );
    for(auto &x : intersec){
        cout<<x<<" ";
    }
}
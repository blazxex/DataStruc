#include<iostream>
#include<set>
using namespace std;

int main(){
    int line1,line2,num;
    set<int> itc;
    set<int> result;
    
    cin>>line1>>line2;
    while(line1--){
        cin>>num;
        itc.insert(num);
    }
    while(line2--){
        cin>>num;
        if((itc.find(num) != itc.end()) && (result.find(num) == result.end())){
            result.insert(num);
        }
    }
    auto it = result.begin();
    while(it!=result.end()){
        cout<<*it<<" ";
        it++;
    }
}
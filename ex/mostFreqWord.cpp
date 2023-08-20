#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int num;
    string getName;
    map<string,int> name;
    cin>>num;
    for (int i = 0;i<num ;i++){
        cin>>getName;
        auto it=find(name.begin(),name.end(),getName);
        if(it!=name.end()){
            it->second++;
        }
        else{
            name[getName] = 1;
        }
    }
}
// for(auto it2 = name.begin();it2!=name.end();it2++){
//     cout<<it2->first;
// }
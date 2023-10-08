#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int line,num;
    vector<int> result;
    string cmd;
    cin>>line;
    while(line--){
        cin>>cmd;
        if(cmd == "pb"){
            cin>>num;
            result.push_back(num);
        }
        else if(cmd == "sa"){
            sort(result.begin(),result.end());
        }
        else if(cmd == "sd"){
            sort(result.begin(),result.end(),greater<int>());
        }
        else if(cmd == "r"){
            reverse(result.begin(),result.end());

        }
        else if(cmd == "d"){
            cin>>num;
            result.erase(result.begin()+num);
        }
    }
    for(auto &x :result){
        cout<<x<<" ";
    }
}
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int voter,member,maxV;
    map<string,int> voteCount;
    vector<int> voteNum;
    string memName;
    cin>>voter>>member;
    for(int i = 0 ;i<voter;i++){
        cin>>memName;
        auto it = voteCount.find(memName);
        if(it == voteCount.end()){
            voteCount[memName] = 1;
        }
        else{
            voteCount[memName]++;
        }
    }

    for(auto &x : voteCount){
        voteNum.push_back(x.second);
    }
    sort(voteNum.begin(),voteNum.end());
    auto it = voteNum.end();
    it--;
    if((it - voteNum.begin()) < member){
        cout<<voteNum[0];
    }
    else{
        cout<<*(it-member+1);
    }
    

}
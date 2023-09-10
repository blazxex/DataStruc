#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    int items,user,auc,item,price;
    cin>>items>>user>>auc;
    string cmd;
    vector<int> avbItem(items);
    vector<set<int>> winner(user);
    map<int,vector< pair <int,int>>>  auction;
    for(int i = 0 ; i< items ; i++){
        cin>>avbItem[i];
        vector< pair <int,int>> q(user);
        auction[i+1] = q;
    }
  //auc[item] = {{queue}}
    while(auc--){
        cin>>cmd;
        if(cmd == "B"){
            cin>>user>>item>>price;
            auction[item][user-1] = make_pair(price,user);
    }
        else{
            cin>>user>>item;
            auction[item][user-1] = make_pair(-1,-1);
        
        }   

    }
    
    for(int i = 1 ;i<=items;i++){
        while(avbItem[i-1]>0 && auction[i].size()>0){
            auto it = max_element(auction[i].begin(),auction[i].end());
            // cout<<it->first << it->second<<endl;
            winner[ (it->second)-1].insert(i);  //tell that the winner got this item
            auction[i].erase(it);
            avbItem[i-1]-=1;
        }
    }
    for(auto & x : winner){
        if(x.empty()){
            cout<<"NONE\n";
        }
        else{
            for(auto &y : x){
                cout<<y<<" ";
            }
            cout<<"\n";
        }
    }
}
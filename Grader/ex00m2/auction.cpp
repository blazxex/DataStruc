#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main(){
   int type,user,price,line,userin;
   char cmd;
   cin>>type>>user>>line;
   vector<int> avb(type);
   map<int,set<int>> userGot;
   vector<vector<pair<int,int>>> aucList(type,vector<pair<int,int>>(user));
   for(int i = 0;i<user;i++){  //initialize what user got from auction
        userGot[i] = {};
   }

   for(int i = 0 ; i<type;i++){  //get how many piece avilable fora each item with index 0 - (type-1)
        cin>>avb[i];
   }
   while(line--){
    cin>>cmd;
    switch(cmd){
        case 'B':
            cin>>userin>>type>>price;
            aucList[type-1][userin-1] ={price,userin};
            break;
        case 'W':
            cin>>userin>>type;
            aucList[type-1][userin-1] ={0,0};
            break;
    }

   }
   for(int i = 0;i<type;i++){
    sort(aucList[i].begin(),aucList[i].end());
     for(int j = user-1 ;j>=0 ; j--){
        if(aucList[i][j].first == 0){
            break;
        }
        else{
            if(avb[i]>0){
                userGot[aucList[i][j].second].insert(i+1);
                avb[i]--;
            }
            else{
                break;
            }
        }
    }
   }
   

   
   for(int i = 1;i<=user;i++){
        if(userGot[i].empty()){
            cout<<"NONE\n";
        }
        else{
            for(auto &x : userGot[i]){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
   }
}
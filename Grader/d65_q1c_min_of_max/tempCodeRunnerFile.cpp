#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,type;
    cin>>n>>m;
    
    vector<int> powerC(n);
    vector<int> strength;
    priority_queue<int> df;
    df.push(1);
    vector<priority_queue<int>> deck(m,df);
    priority_queue<int> pq;
    
    for(int i = 0;i<n;i++){
        cin>>powerC[i];
       
    }
    for(int i = 0;i<n;i++){
        cin>>type;
        deck[type].push(powerC[i]);
        if(strength.size()==0){
            for(auto &x : deck){
                strength.push_back(x.top());
            }
        }
        else{
            strength[type]=deck[type].top();
        }
        
        auto it = min_element(strength.begin(),strength.end());
        cout<<*it<<" ";



    }

}
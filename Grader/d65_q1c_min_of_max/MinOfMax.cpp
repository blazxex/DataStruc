#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,typ;
    cin>>n>>m;
    vector<int> mx(n);  //save input data
    vector<int> power (m,1);
    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
    for(int i=0;i<m;i++) 
        pq.push({1,i});
    for(int i = 0 ; i<n;i++){
        cin>>mx[i];
    }

    for(int i = 0 ;i<n;i++){
        cin>>typ;
        power[typ] = max(mx[i],power[typ]) ;
        pq.push({power[typ],typ});
        while(pq.top().first<power[pq.top().second]){
            pq.pop();
        }
        cout<<pq.top().first<<" ";

    }
}   
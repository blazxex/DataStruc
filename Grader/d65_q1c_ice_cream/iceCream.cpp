#include <iostream>
#include<queue>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start,a,s;
    vector<int> total(100002);
    cin>>n>>m>>start;
    priority_queue<pair<int,int>> pq;
    for(int i = 0;i<n;i++){
        cin>>a>>s;
        pq.push(make_pair(-a,s));
    }
    total[0] = start;
    for(int i = 1;i<total.size();i++){
        if(!pq.empty() && pq.top().first == -1*i){
            start = pq.top().second;
            pq.pop();
        }
        total[i] = total[i-1]+start;
    }
    while(m--){
        cin>>a>>s;
        if(a<=total[s]){
            auto it = lower_bound(total.begin(),total.end(),a);
            cout<<it-total.begin()<<" ";
        }
        else{
            auto it2 = lower_bound(total.begin() + s, total.end() , a + total[s]);
            cout << it2-total.begin()<<" ";
        }
        
    }

}


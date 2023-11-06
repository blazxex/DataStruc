#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m,k,a,q;
    int i = 1;
    long long t,d;
    map<long long,long long> b;
    map<int,int> speed , rspeed;
    
    cin>>n>>m>>k;
    while(n--){
        cin>>t>>d;
        b[t] = d;
    }
    auto itB = b.end();
    auto it = b.begin();
    speed[0] = k;
    rspeed[k] = 0;
    while(it!=itB){
        if(i!=it->first){
            speed[i] = speed[i-1];
            
        }
        else{
            speed[i] = speed[i-1]-(it->second);
            rspeed[-1*speed[i]] = i;
            it++;
        }
        i++;
    }
    while(m--){
        cin>>a>>q;
        if(a==1){
            cout<<speed[q]<<"\n";
        }
        else{
            auto itr = rspeed.lower_bound(-1*(q));
            // auto itu = rspeed.upper_bound(q);
            if(itr == rspeed.end()) cout << "0\n";
            else cout << itr->second << "\n";
            
        }
    }
}


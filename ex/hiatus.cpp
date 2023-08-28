#include<iostream>
#include<vector>

#include<algorithm>

using namespace std;


int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<int> publish;
    int n,q,y,m;
    cin >> n >> q ;
    while(n--){
        cin>>y>>m;
        publish.push_back((y*100)+m);
    }
    sort(publish.begin(),publish.end());
    while(q--){
        cin>>y>>m;
        int temp = y*100 + m;
        auto it = lower_bound(publish.begin(),publish.end(),temp);
        if(it == publish.end()){
            it--;
            cout<<(*it/100)<<" "<<*it%100<<" ";
        }
        else if(temp< publish[0]){
            cout<<"-1 -1 ";
        }
        else if(*it != temp){
            it--;
            cout<<(*it/100)<<" "<<*it%100<<" ";
        }
        else{
            cout<<"0 0 ";
        }
    }

    
}
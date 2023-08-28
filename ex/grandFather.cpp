#include<iostream>
#include<unordered_map>

using namespace std;

bool checkRelative(unordered_map<long long,long long> &m,long long c1,long long c2){
    auto e = m.end();
    if(c1==c2){
        return false;
    }
    auto p1 = m.find(c1),p2 = m.find(c2);
    if(p1== e|| p2 == e){
        return false;
    }
    
    auto g1 = m.find(p1->second),g2 = m.find(p2->second);
    if(g1==e || g2==e){
        return false;
    }
    
    if(g1->second != g2->second){
        return false;
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    unordered_map<long long,long long> relation;
    int n,m;
    long long f,s,c1,c2;
    cin>>n>>m;
    while(n--){
        cin>>f>>s;
        relation[s] = f;
    }
    while(m--){
        cin>>c1>>c2;
        if(checkRelative(relation,c1,c2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
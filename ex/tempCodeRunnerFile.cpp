#include<iostream>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

void slove(map<int,set<int>> &p,int y,int m){
    auto b = p.begin();
    auto e = p.end();
    auto check = p.find(y);
    auto itY = p.lower_bound(y);
    if(itY==e){  //mean year is higher than we have
        itY--;
        auto itM = (itY->second).end();
        itM--;
        cout<<itY->first<<" "<<*itM;
    }
    else{
        if(itY->first == y ){
            auto itM = itY->second.lower_bound(m);
            
            if(*itM == m){
                cout<<"0 0 ";
            }
            else if(*itM > m){
                cout<<"-1 -1 ";
            }
            else{
                itM--;
                cout<<itY->first<<" "<<*itM<<" ";
            }

        }
        else if(itY->first >y){
            cout<<"-1 -1 ";
        }
    }
    
}
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    map<int,set<int>> publish;
    int n,q,y,m;
    cin >> n >> q ;
    while(n--){
        cin>>y>>m;
        publish[y].insert(m);
    }
    while(q--){
        cin>>y>>m;
        slove(publish,y,m);

    }

    
}
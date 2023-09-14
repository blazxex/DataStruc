#include<iostream>
#include<map>

using namespace std;

int main(){
    int ip,q,a,b,x,y;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>ip>>q;
    map<int,int> s;
    while(ip--){
        cin>>a>>b;
        s[a] = b;
    }
    
    while(q--){
        bool check = false;
        cin>>a;
        auto it = s.upper_bound(a);
        if(it != s.begin()){
            it--;
            x = it->first;
            y = it->second;
            if(x<=a && a<=y){
                check = true;
            }
        }
        if(check){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
        

    }


    }


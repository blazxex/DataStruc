#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;


void pb(vector<int> &v,int x){
    v.push_back(x);
}

void sa(vector<int> &v){
    sort(v.begin(),v.end());
}

void r(vector<int> &v){
    reverse(v.begin(),v.end());
}

void sd(vector<int> &v){
    sa(v);
    r(v);
}

void d(vector<int> &v,int i){
    v.erase(v.begin()+i);
}



int main(){
    vector<int> v;
    int line;
    string cmd;
    int id;
    cin>>line;
    for(int i =0;i<line;i++){
        cin>>cmd;
        if(cmd=="pb"){
            cin>>id;
            pb(v,id);
        }
        else if(cmd =="sa"){
            sa(v);
        }
        else if(cmd =="sd"){
            sd(v);
        }
        else if(cmd =="r"){
            r(v);       }
        else if(cmd =="d"){
            cin>>id;
            d(v,id);
        }
        
    }
    for(auto &x:v){
        cout<<x<<" ";
    }
   

}
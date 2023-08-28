#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<int>  key;
    // map<string,string> passW;
    set<string> passW;
    int n,m,l,temp,let;

    string pw,tpw;
    cin>>n>>m>>l;
    while(l--){
        cin>>temp;
        key.push_back(temp);
    }
    while(n--){
        cin>>pw;
        passW.insert(pw);

    }
    while(m--){
        cin>>pw;
        tpw = "";
        for(int i = 0;i<pw.length();i++){
            let = 97+ ((pw[i]+key[i])-97)%26;
            tpw += char(let);
        }
        if(passW.find(tpw)!=passW.end()){
            cout<<"Match\n";
        }
        else{cout<<"Unknown\n";}

    }




}
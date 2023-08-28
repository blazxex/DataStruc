#include<iostream>
#include<set>
using namespace std;

bool check(set<int> &s,int siz,int sum){
    if(s.size()!=siz){
        return false;
    }
    auto it = s.end();
    it--;
    if((*it * (*it+1)/2 )!= sum) return false;

    return true;

}

int main(){
    int amount,temp,sum = 0;
    string out;
    set<int> func;
    cin>>amount;
    int am = amount;
    while(amount--){
        cin>>temp;
        sum+=temp;
        func.insert(temp);
    }

    out = (check(func,am,sum))? "YES" : "NO";
    cout<<out;
}

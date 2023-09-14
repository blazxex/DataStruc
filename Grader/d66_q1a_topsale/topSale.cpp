#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>

using namespace std;
void findOut(vector<long long> &name , vector<long long>&price , long long &want){
    for(int i = 0 ; i<4;i++){
        cout<<price[i]<<" ";
    }
    auto it = lower_bound(price.begin(),price.end(),want);
    if(it!=price.begin()){
        it--;
        cout<<price[it-price.begin()]<<"\n";
    }
    else{
        cout<<"NONE\n";
    }

}
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    //declare value
    int circum,cmd;
    long long id,amount,item;
    cin>>item>>circum;
    vector<long long> stockName(item);
    vector<long long> stockSelll(item,0);
    
    for(int  i = 0 ; i<circum ; i++){
        cin>>cmd;
        switch(cmd){
            case 1:
                cin>>id>>amount;
                if(id>=0 && id<=item){
                    stockSelll[id]+=amount;
                }
                break;
            case 2:
                cin>>amount;
                findOut(stockName,stockSelll,amount);
                break;
        }
    }

}

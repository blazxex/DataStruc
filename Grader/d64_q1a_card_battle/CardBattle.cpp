#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int card,fighter,count,i,amount,temp;
    count = 1;
    cin>>card>>fighter;
    map<int,int> tDeck;
    i=0;
    while(card--){
        cin>>temp;
        if(tDeck[temp]==0){
            tDeck[temp] = 1;
        }
        else{
            tDeck[temp]++;
        }
    }

    bool lose = false;
    while(fighter-- && !lose){
        cin>>amount;
        while(amount--){
            cin>>card;
            auto it = tDeck.upper_bound(card);
            if(it!=tDeck.end()){
                if(it->second > 0 ){
                    it -> second --;
                    if(it -> second==0){
                        tDeck.erase(it);
                    }
                }
                else{
                    it++;
                }
                
            }
            else{
                
                lose = true;
                break;
            }
            
        }
        if(!lose){count++;}
        
    }
    cout<<count;
}
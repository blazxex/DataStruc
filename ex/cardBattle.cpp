#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,amount;
    cin>>n>>m;
    vector<int> toeCard(n);
    for(int i = 0 ;i<n;i++){
        cin>>toeCard[i];
    }
    sort(toeCard.begin(),toeCard.end());
    int winRate = 1;
    bool lose = false;
    for(int j = 0;j<m;j++){
        cin>>amount;
        vector<int> battleCard(amount);
        for(int k = 0 ; k<amount ; k++){
            cin>>battleCard[k];
        }
        
        int battleId = amount-1;
        sort(battleCard.begin(),battleCard.end());
        while(!lose && battleId>=0){

            int fight = battleCard[battleId];
            auto it = upper_bound(toeCard.begin(),toeCard.end(),fight);
            if(it == toeCard.end()){
                lose = true;
                break;
            }
            else{
                battleId--;
                toeCard.erase(it);
                

            }

        }
        if(!lose){
            winRate++;
        }

    }
    cout<<winRate;
    
}
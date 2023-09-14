#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>

using namespace std;
void print(map<string,vector<string>> &m){
    for(auto it = m.begin() ; it!=m.end();it++){
        for(int i = 0 ; i<m[it->first].size();i++){
            cout<<m[it->first][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    
    //declear variable
    int ticket , customer;
    string flight,seat;
    map<string,vector<string>> allTicket;
    vector<vector<pair<string,string>>> customerInput;
    vector<pair<string,string>> cusTmp;
    bool fail = false;

    cin>>ticket>>customer;
    for(int i = 0 ;i<ticket;i++){
        cin>>flight>>seat;
        
 
        allTicket[flight].push_back(seat);
  

    }
  

    for(int i = 0 ;i<customer;i++){
        cin>>ticket;
        cusTmp = {};
        while(ticket--){
            cin>>flight>>seat;
            cusTmp.push_back({flight,seat});

        }
        customerInput.push_back(cusTmp);
    }

    for(int i = 0 ; i <customer ; i++){
        cout<<"X";
        fail = false;
        int num = customerInput[i].size();
        for(int j = 0 ; j<num ; j ++){
            flight = customerInput[i][j].first;
            seat =  customerInput[i][j].second;
            if(allTicket.find(flight)== allTicket.end()){
                fail = true;
                break;
            }
            else if(find(allTicket[flight].begin(),allTicket[flight].end(),seat)== allTicket[flight].end()){
                fail = true;
                break;
            }
            
        }
        if(!fail){
            cout<<"YES";
            for(int k = 0 ; k<num ; k++ ){
                flight = customerInput[i][k].first;
                seat =  customerInput[i][k].second;
                auto it = find(allTicket[flight].begin(),allTicket[flight].end(),seat);
                auto bg = allTicket[seat].begin();
                allTicket[flight][it-bg] = "00000000000";
            }
        }
        else{
            cout<<"NO\n";
        }
        
    }
    
    
}


#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> time(n);
    vector<int> avbChef(n,1);
    for(int i = 0 ;i< n ; i++){
        cin>>time[i];
    }
    int waitTime = 0;
    int addTime = 1;


    while(m>0){
        for(int i =0 ;i<n;i++){
            avbChef[i]--;
            if(avbChef[i]==0){
                 if(m<0 || m==0){
                    break;
                }
                cout<<waitTime<<"\n";
               
                avbChef[i]+=time[i];
                m--;
            }
        }
        waitTime++;
    }


    
}
#include<iostream>
#include<vector>

using namespace std;

void findItc(vector<int> &less , vector<int>&more,int size,vector<int> &itc){
    for(int i = 0 ;i<size;i++){
        auto it = find(more.begin(), more.end(), less[i]);
         if (it != more.end()){
            itc.push_back(less[i]);
            
        }
    }
}
int main(){
    vector<int> first;
    vector<int> second;
    vector<int> itc;
    int firstSize,secSize,num,temp;
    cin>> firstSize>>secSize;
    for (int i = 0;i<firstSize;i++){
        cin>>num;
        first.push_back(num);
    }
    for (int i = 0;i<secSize;i++){
        cin>>num;
        second.push_back(num);
    }
    if(firstSize>secSize){
        findItc(second,first,secSize,itc);
    }
    else{
        findItc(first,second,firstSize,itc);
    }
    sort(itc.begin(),itc.end());
    if(itc.size()!=0){
        temp = itc[0]; 
        cout<<temp<<" ";
        for(auto &x:itc){
            if(x!=temp){
            cout<<x<<" ";
            temp = x;
            }
        }
    }

    
}
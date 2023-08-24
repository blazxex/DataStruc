#include<iostream>
#include<map>

using namespace std;

int main(){
    int num;
    string temp;
    map<string,int> name;
    cin>>num;
    for(int i = 0;i<num;i++){
        cin>>temp;
        if(auto it = name.find(temp)!=name.end()){
            name[temp]++;
        }
        else{
            name[temp] = 1;
        }
    }
    for(auto &x:name){
        if(x.second > 1){
            cout<< x.first <<" "<< x.second <<"\n";
        }
    }

}

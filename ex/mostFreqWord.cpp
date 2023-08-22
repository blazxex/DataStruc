#include<iostream>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int num,maxCount;
    string maxWord;
    string getName;
    map<string,int> nameV;
    cin>>num;
    maxCount = 0;
    for (int i = 0; i< num;i++){
        cin>>getName;
        auto it = nameV.find(getName);
        if(it==nameV.end()){
            nameV[getName] = 1;
        }
        else{
            nameV[getName]++;
        }
        if(nameV[getName]>maxCount){
            maxCount = nameV[getName];
        }
    }
    auto it = nameV.end();
    while(it!= nameV.begin()){
        it--;
        if(it->second == maxCount){
            cout<< it->first << " "<<it->second;
            break;
        }
    }

}
 
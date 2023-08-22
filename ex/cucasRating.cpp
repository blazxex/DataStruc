#include<iostream>
#include <iomanip>
#include<map>
#include<string>

using namespace std;

int main(){
    cout<<std::fixed<<std::setprecision(2);
    int num,point;
    map<string,pair<int,int>> subject;
    map<string,pair<int,int>> teacher;
    string subId,teachName;
    cin>>num;
    for(int i = 0;i<num;i++){
        cin>>subId>>teachName>>point;
        if(auto it = subject.find(subId)==subject.end()){
            subject[subId].first = point;
            subject[subId].second = 1;
        }
        else{
            subject[subId].first += point;
            subject[subId].second += 1;
        }
        if(auto it2 = teacher.find(teachName)==teacher.end()){
            teacher[teachName].first = point;
            teacher[teachName].second = 1;
        }
        else{
            teacher[teachName].first += point;
            teacher[teachName].second += 1;
        }

    }

    for(auto &x:subject){
        cout<<x.first<<" "<<(x.second.first+0.00)/x.second.second<<"\n";
    }
    for(auto &x:teacher){
        cout<<x.first<<" "<<(x.second.first+0.00)/x.second.second<<"\n";
    }

}
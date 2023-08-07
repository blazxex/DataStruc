// take a pair variable 
#include<iostream>
#include <array>
#include <utility>

using namespace std;

int main(){
    //******************pair****************************
    // pair<int,float> x;
    // pair<int,float> y;
    // x.first = 10;
    // x.second = 22.58;
    
    // y = x;
    // x.first =  4;
    // cout<<x.first<<endl<<x.second<<endl;
    // cout<<"This is y"<<endl<<y.first<<endl<<y.second;
    //**************************************************

    pair<string,bool> p;
    pair<string,bool> p1 = {"Aramy",true};
    //cout<<p1.first<<endl<<p1.second<<endl;
    pair<bool,int> p2;
    p2 = make_pair(true,15);
    //cout<<"The is p2 1st & 2nd"<<p2.first<<"   "<<p2.second;
    //pair of pair

    pair<string,pair<int,double>> p3 = {"Army",{12,20.5}};
    //cout<<"pari fo pair first"<<p3.first<<" sec first:"<<p3.second.first<<"sec sec: "<<p3.second.second;


    // pair of array
    pair<array<int,4>,pair<string,bool>> p5 = {{1,2,3,4},{"yoo",true}};
    for(size_t i = 0; i<p5.first.size();i++){
            cout<<p5.first[i]<<" ";
    }
    
   


}
#include<iostream>	
#include<algorithm>
#include<map>

using namespace std;	
bool myFunction(int i,int j){
        return i>j;
    }
int main(){	  

//    pair<int,float> v2 ={4,6};
//    pair<int,float> v ;
//    v = make_pair(5,20.2);
//    cout<<endl;
//     cout<<v.first<<endl<<v.second;

//     v = v2;
//     v2.first = 10;
//     cout<<v.first;
//     pair<int,pair<float,string>> v3 = {6,{9.5,"Strg"}};
//     cout<<"fist "<<v3.first<<" sec: "<<v3.second.first<<" secsec: "<<v3.second.second<<endl;
//     auto add = &v2;
    // vector <float> a = {1,2,3,4,5};
    // // for(float x :a){
    // //     cout<<x<<" ";
    // // }
    // cout<<a(a.begin(),a.begin()+2);
    // int it = 5;
    // int k =15;
    // int begin  = it-k;
    // (begin<0)? begin=0 : begin;
    // cout<<begin;

//     int arr[] = {4,3};
//     int want = -3;
//    auto it = find(arr+1,arr+2,want);
//     cout<<"it"<<*it;
//     if(*it==want){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO";
//     }

    // int num;
    // string getName;
    // map<string,int> name;
    // for (int i = 0; 9< num;i++){
    //     cin>>getName;
    //     auto it = find(name.begin(),name.end(),getName);
    //     if(it!=name.end()){
    //         name[getname] = 1;
    //     }
    //     else{
    //         name[getName]++
    //     }
    // }
    // for( auto &x;name){
    //     cout<<name.first<<" "<<name.second<<endl;
    // }
    
    vector<int> a = {6,5,8,9,1,2,4,5};
    sort(a.begin(),a.end(),myFunction);
    for(auto &x :a ){
        cout<<x<<" ";
    }

}  


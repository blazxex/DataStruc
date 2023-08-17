#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // vector<int> v1  = {0,10,20,30,40,50,60,70,80};
    // vector<float> v2  = {0.2,-4,0.13,3.14,2.73};
    

    // vector<int>::iterator it1 = v1.begin()+3;
    // vector<float>::iterator it2 = v2.end();
    

    // cout<<*it1<<endl;
    // cout<<*(it2-2)<<endl;
    // cout<< *it1+2<<endl;

    // vector<int>::iterator it3 = it1+2; //add index 
    // cout<< "data at it3 = "<<*it3<<endl;
    // cout<<"different of it3,it1 "<<(it3-it1)<<endl;

    // vector<float>::iterator it4 = v2.end();
    //  it4--;
    // cout<<"data at it4: "<<*it4<<endl;

    // cout<<"-----v1-------"<<endl;
    // auto it = v1.begin();
    // while (it!=v1.end()){
    //     cout<<it-v1.begin()<<": "<<*it<<endl;
    //     it++;
    // }

    // auto it5 = min_element(v1.begin(),v1.end());
    // cout<<*it5<<endl;
    // auto it6 = max_element(v2.begin()+2,v2.end());
    // cout<<*it6<<endl;

    // vector<string> v5 = {"army","abcd","TTsTT"};
    // for (string x: v5){
    //     cout<<x<<" ";
    // }

    // for(auto &x:v5){
    //     x.replace(0,2,"--");
    // }
    //  for (auto &x: v5){
    //     cout<<x<<" ";
    // }
    vector<int> vec = {1, 3, 5, 7, 9};
    auto it7 = upper_bound(vec.begin(), vec.end(), 9);
    auto it8 = lower_bound(vec.begin(), vec.end(), 9);
    
    cout<<*it7<<endl<<*it8<<endl;
    if(it7!=vec.end()){
        cout<<*it7<<endl;}
    else{
        cout<<"NO"<<endl;
    }
    if(it8!=vec.end()){
        cout<<*it8<<endl;}
    else{
        cout<<"NO"<<endl;
    }
    //using reference
    
}
#include<iostream>	

using namespace std;	
int main(){	  

   pair<int,float> v2 ={4,6};
   pair<int,float> v ;
   v = make_pair(5,20.2);
   cout<<endl;
    cout<<v.first<<endl<<v.second;

    v = v2;
    v2.first = 10;
    cout<<v.first;
    pair<int,pair<float,string>> v3 = {6,{9.5,"Strg"}};
    cout<<"fist "<<v3.first<<" sec: "<<v3.second.first<<" secsec: "<<v3.second.second<<endl;
    auto add = &v2;
    
   

    return 0;	
}
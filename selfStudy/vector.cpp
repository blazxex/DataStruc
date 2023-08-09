#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> v){
    for(size_t i = 0 ; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
}
int main() {

  // initializer list
    // vector<int> v1;

    // vector<int> v2 = {2,3,4};
    // cout << v2[1]<<endl;
    // v1 = v2;
    // v1[0] = 20;

    // cout<< v1[0] << ","<<v1[1];

    // v1.push_back(99);
    // for(size_t i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // } 
    // cout<<endl;


    // vector<float> v1(10);
    // print_vector(v1);

    // //create vector by (size,value)
    // vector<float> v2(5,3.55);
    // print_vector(v2);

    // vector<float> v3(v2);
    // print_vector(v3);
    ////////////////////////////////////////////////////////////

    // vector<float> v1(2);

    // for(int i = 0; i<7;i++){
    //     v1[i] = i;
    //    cout<<i<<": "<<v1[i]<<endl;
    // }
    //print_vector(v1);
    // cout<<"using at"<<endl;
    // v1.at(1)=99;
    // cout<<v1[1]<<endl;
    //  for(int i = 0; i<7;i++){
    //     v1.at(i) = i;
    //    cout<<i<<": "<<v1[i]<<endl;
    // }

    //Resizing
//     vector<float> v2(3,10.0);
//     print_vector(v2);
//     v2.resize(6);
//     print_vector(v2);
//     v2.resize(1);
//     print_vector(v2);
//     v2.resize(7);
//     print_vector(v2);

// //Modify
//     v2.insert(v2.begin()+3,3);  //insert(position,value)
//     print_vector(v2);
//     v2.insert(v2.end(),25); //like push back
//     print_vector(v2);
//     v2.erase(v2.begin()+2);
//     print_vector(v2);
//     v2.pop_back();
//     print_vector(v2);

    vector<int> v = {9,-1,3,7,5,2,1,4};
// if(find(v.begin(),v.begin()+2,5)!=v.end()) cout<< "Found"<<endl;
// if(find(v.begin(),v.begin()+4,5)!=v.end()) cout<< "Found"<<endl;
// if(find(v.begin()+4,v.begin()+2,5)!=v.end()) cout<< "Found"<<endl;
// if(find(v.begin()+4,v.begin()+8,5)!=v.end()) cout<< "Found"<<endl;

//sort
    sort(v.begin()+2,v.begin()+6, greater <>());
    //sort(v.begin()+6,v.begin()+2);

    print_vector(v);
    cout<<"min"<<*min_element(v.begin(),v.end())<<endl;
    cout<<*v.begin();
// cout<<"max"<<max_element(v.begin(),v.end());


}

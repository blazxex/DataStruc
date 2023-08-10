#include<iostream>
#include<set>


using namespace std;


int main(){
    // set< pair< string,int > > s = {{"Asdsa",2},{"llos",23},{"ppap",12}};
    // auto it = s.find({"ppap",12});
    // cout<< (*it).second<<endl;
    // cout<< it -> first;

    set<int> se = {10, 20, 30, 40, 50};
    auto it2 = se.upper_bound(30);
    cout<<*it2<<endl;
    cout<<(se.count(10));
}

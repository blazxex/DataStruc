#include<iostream>
#include<string>
#include<set>
using namespace std;


namespace CP{
    template <typename T1, typename T2> //template <parameter of tempalte>
    class pair{
        public:
            T1 first;
            T2 second;
            
            // pair(const T1 &a,const T2 &b){
            //     first = a;
            //     second = b;
            // }

            pair(): first(),second(){ }
            pair(const T1 &a,const T2 &b): first(a),second(b){ }
            //-------------------operator----------------
            bool operator==(const pair<T1,T2> &other){
                return( first == other.first && second == other.second);
            }
            bool operator<(const pair<T1, T2> &other) const{
                return (first < other.first) || 
                (first == other.first && second < other.second);
            }   
 
    };
}


int main(){
    CP::pair<int,string> p1,p2;
    // p1.first = 20; 
    // p1.second = "SSSS";
    // CP::pair<int,string> a(p1);
    // p2 = p1;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
    // if(p1==p2){
    //     cout<<"p1 is equal to p2\n";
    // }
    // set<CP::pair<int,int>> s;
    // s.insert({1,2});
    // cout<<s.begin()->first<<endl;
    // CP::pair<int,bool> z(5,false);
    // cout<<z.first<<" "<<z.second<<endl;

   
}

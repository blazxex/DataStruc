#include<iostream>
#include<map>
using namespace std;

int main(){
map<string,int> m;
m["somchai"] = 10;
m["Sonying"] = -2;
m["somchai"]++;
cout << "find xxx: return defalut = " << m["xxx"]<<endl;
for(auto it = m.begin(); it!=m.end();it++){
    cout<< it->first<<"Mapped to:"<< it->second<<endl;
}

for (auto &x: m){
    cout<<x.first<<"-> "<<x.second<<endl;
}
map<string,int>::iterator it2;
if((it2 = m.find("somchai")!=m.end())){
    cout<< it2->first;
}

//check key of map

}
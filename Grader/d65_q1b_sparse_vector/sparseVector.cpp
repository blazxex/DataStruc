#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
    vector<pair<int,int>> tmp = {};
    auto it2 = v.lower_bound(pos);

    for(auto it = it2; it!=v.end();it++){
        tmp.push_back({(it->first)+1,it->second});
    }
    v.erase(it2, v.end());
    
    v.insert({pos,value});
    v.insert(tmp.begin(),tmp.end());
}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(0);
  int n;
  map<int,int> v;
  cin >> n;
  for (int i = 0;i < n;i++) {
    int a,b;
    cin >> a >> b;
    insert_into_sv(v,a,b);
}
  cout << v.size() << "\n";
  for (auto &x : v) {
    cout << x.first << ": " << x.second << "\n";
  }
}
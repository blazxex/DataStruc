#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator,int>> &multiply) {
    vector<int> temp(v);
    sort(multiply.begin(),multiply.end());
    int next = 0;
    for(int i = 0; i<multiply.size();i++){
        int addNum = *(multiply[i].first);
        int it = multiply[i].first - v.begin();
        int amount = multiply[i].second;
        
        //for(int j = 0 ; j<amount;j++){
        temp.insert(temp.begin()+it+next,amount,addNum);
        //}
        next+=amount;
    }
    v = temp;
    
    
}
int main() { ios_base::sync_with_stdio(false);cin.tie(0);
int n,m;
cin >> n >> m;
vector<int> v(n); vector<pair<vector<int>::iterator,int>> multiply(m); for (int i = 0;i < n;i++) cin >> v[i];
for (int i = 0;i < m;i++) {
int a,b;
cin >> a >> b; multiply[i].first = v.begin()+a; multiply[i].second = b;
} member_multiply(v,multiply);
cout << "======= result ========" << endl; cout << v.size() << endl;
for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}

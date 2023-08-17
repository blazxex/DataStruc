#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
    vector<string> temp;
    int diff = it-v.begin();
    int begin  = diff-k;
    int endt = diff+k;
    (endt>v.size())? endt = v.size()-1: endt;
    (begin<0)? begin=0 : begin;
    for( size_t i= 0;i<v.size();i++){
      if(i<begin || i> endt){
        temp.push_back(v[i]);
      }
    }
    return temp;
}
int main() {
  int n,j,k;
  cin >> n >> j >> k;
  vector<string> v(n);
  for (int i = 0;i < n;i++) {
cin >> v[i]; }
  cout << "Result after punch" << endl;
  vector<string> result = punch(v, v.begin() + j, k);
  for (auto &x : result) {
    cout << x << endl;
  }
}
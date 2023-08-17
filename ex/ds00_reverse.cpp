#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
    // vector<int> temp;
    // for (int i =0;i<a;i++){
    //     temp.push_back(v[i]);
    // }
    // for(int i=b ;i>=a;i--){
    //      temp.push_back(v[i]);
    // }
    // for (int i =b+1;i<v.size();i++){
    //     temp.push_back(v[i]);
    // }
    // v = temp;
    
    int temp[b-a];
    for(size_t i = b ;i>=a;i--){
        temp.push_back(v[i]);
    }
    int j  = 0;
    for(size_t i = a;i<=b;i++){
        v[i] = temp[j];
        j++;
    }
}
int main() {
  //read input
  int n,a,b;
  cin >> n;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
}
cin >> a >> b;
  //call function
  reverse(v,a,b);
  //display content of the vector
  for (auto &x : v)
    cout << x << " ";
  cout << endl;
}
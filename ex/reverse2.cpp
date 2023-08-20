#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    vector<int> temp;
    int begin = a-v.begin()-1 ;
    int end = b-v.begin()-1;
    for (size_t i=b-v.begin()-2;i>=a-v.begin();i--){

        temp.push_back(*(v.begin()+i));
    }

   for(size_t i = 0;i<v.size();i++){
        if(i>=begin || i<=end){
            cout<<i<<" "<<i-begin;
            //v[i] = temp[i-begin];
        }
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
  reverse(v,v.begin()+a,v.begin()+b+1);
  //display content of the vector
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}
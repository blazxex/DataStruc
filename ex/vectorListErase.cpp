#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    vector<bool> check (v.size(),true);
    for(int i = 0 ; i<pos.size();i++){
        check[pos[i]] = false;
    }
    vector<int> v2;
    for(int i = 0 ;i<v.size();i++){
        if(check[i]){
            v2.push_back(v[i]);
        }
    }

    v = v2;

}

int main() { std::ios_base::sync_with_stdio(false); cin.tie(0);
int n,m;
cin >> n >> m;
vector<int> v(n), pos(m);
for (int i = 0;i < n;i++) cin >> v[i]; for (int i = 0;i < m;i++) cin >> pos[i];
list_erase(v,pos);
cout << "After call list_erase" << endl << "Size = " << v.size() << endl; for (auto &x : v) cout << x << " ";
cout << endl;
}

// n = size of v m = size of pos -> value in v -> value  in pos;
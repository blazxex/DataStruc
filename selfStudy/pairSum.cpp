#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    bool check = false;
    int n, m;
    cin>>n>>m;
    int arr[n];
    map<int, int> mi;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        mi[arr[i]]++;
    }

    while (m--) {
        int tgt;
        cin>>tgt;
        for (int i = 0; i < n; ++i) {
            if (2 * arr[i] == tgt) {
                if (mi.find(arr[i])->second > 1) {
                    cout<<"YES\n";
                    check = true;
                    break;
                }
            } else if (mi.find(tgt - arr[i]) != mi.end()) {
                cout<<"YES\n";
                check = true;
                break;
            }
        }
        if(!check){
        cout<<"NO\n";
        }
        check = false;
    }
}
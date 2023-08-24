// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
//     std::ios_base::sync_with_stdio(false); std::cin.tie(0);
//     int n,m;
//     vector<pair<long long,long long>> number;
//     vector<long long> inList;
//     long long temp1,temp2;
//     cin>>n>>m;
//     for(int i = 0;i<n;i++){
//         cin>>temp1>>temp2;
//         number.push_back(make_pair(temp1,temp2));
//     }
//     sort(number.begin(),number.end());
//     for(int k = 0; k<m;k++){
//         cin>>temp1;
//         if(temp1>number[n-1].second){
//             cout<<0<<" ";
//         }
//         else {
//             for(int k = 0;k<n;k++){
//                 if(number[k].first<=temp1 && temp1<=number[k].second){
//                     cout<<1<<" ";
//                     break;
//                 }
//                 if(k==n-1){
//                     cout<<0<<" ";
//                     break;
//                 }
//             }
//         }
//     }
    



// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    vector<pair<long long, long long>> number;

    long long temp1, temp2;
    for (int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        number.push_back(make_pair(temp1, temp2));
    }

    sort(number.begin(), number.end());

    for (int k = 0; k < m; k++) {
        cin >> temp1;

        int left = 0, right = n - 1;
        bool found = false;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (number[mid].first <= temp1 && temp1 <= number[mid].second) {
                cout << 1 << " ";
                found = true;
                break;
            }

            if (temp1 < number[mid].first) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (!found) {
            cout << 0 << " ";
        }
    }

    return 0;
}

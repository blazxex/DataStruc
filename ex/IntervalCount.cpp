#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<int> number; 
    int n,m,temp;
    long long k;
    cin>>n>>m>>k;
    for(size_t i = 0;i<n;i++){
        cin>>temp;
        number.push_back(temp);
    }
    sort(number.begin(),number.end());
    
    for(int j = 0;j<m;j++){
        int count = 0;
        cin>>temp;
        auto lower = lower_bound(number.begin(),number.end(),temp-k);
        auto upper = upper_bound(number.begin(),number.end(),temp+k);
        cout<<upper-lower<<" ";
        
         
    }
}
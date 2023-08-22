#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int arrSize,searchSize,search,wantNumber,getNum;
    bool check = false;
    cin>>arrSize>>searchSize;
    vector<int> arr;
    for (size_t i = 0;i<arrSize;i++){
        cin>>getNum;
        arr.push_back(getNum);
    }
    sort(arr.begin(),arr.end());

    for(size_t j = 0;j<searchSize;j++){
        cin>>search;
        check = false;
        for(size_t k = 0;k<arrSize;k++){
            wantNumber = search-arr[k];
            auto it = find(arr.begin(),arr.end(),wantNumber);
            if(search< arr[k]&&check == false){
                check = false;
                break;
            }
            else if(*it==wantNumber){
                check = true;
                break;

            }
            else{
                check = false;
            }
        }
        if(!check){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

}
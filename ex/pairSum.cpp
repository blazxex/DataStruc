#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arrSize,searchSize,search,wantNumber;
    bool check = false;
    cin>>arrSize>>searchSize;
    int arr[arrSize];
    for (int i = 0;i<arrSize;i++){
        cin>>arr[i];
    }
    for(int j = 0;j<searchSize;j++){
        cin>>search;
        check = false;
        for(int k = 0;k<arrSize;k++){
            wantNumber = search - arr[k];
            auto it = find(arr+k+1,arr+arrSize,wantNumber);
            if(*it == wantNumber){
                cout<<"YES"<<endl;
                check = true;
                break;
            }
        }
        if(!check){
            cout<<"NO"<<endl;
        }

    }

}
#include<bits/stdc++.h>

using namespace std;
void checkChild(int idx,int n,vector<int> &parents){
    int leftChild = (idx * 2) + 1;
    int rightChild = (idx * 2) + 2;

    if (leftChild < n) {

        parents.push_back(leftChild);
        checkChild(leftChild, n, parents); 
    }

    if (rightChild < n) {
        parents.push_back(rightChild);
        checkChild(rightChild, n, parents);  
    }
}
int main(){
    int n, a;
    vector<int> parents;

    cin >> n >> a; 
    parents.push_back(a);
    checkChild(a, n, parents);
    cout << parents.size()<<"\n";
    sort(parents.begin(),parents.end());
    for(auto &x : parents){
        cout<<x<<" ";
    }

}


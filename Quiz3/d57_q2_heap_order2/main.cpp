#include <iostream>
#include <vector>
using namespace std;




int height (long long S, long long a) { 
    int count = 0;
    if(a == 0){
        return 0;
    }
    while(a>0){
        a = (long long) ((a-1)/ S);
        count++;
    }
    return count;
}
bool anchester(long long S, long long a, long long b){
    long long c = max(a,b);
    long long p = min(a,b);
    while(c > p){
        c = (long long) ((c-1)/S);
        if(c==p){
            return true;
        }
    }
    return false;
}
int relation(long long S, long long a, long long b) { 
    if(min(a,b)==((max(a,b)-1)/S)){
        return 1;
    }
    else if(anchester(S,a,b)){
        return 2;
    }
    else if(height(S,a)!=height(S,b)){
        return 3;
    }
    else{
        return 4;
    }
}
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); int n;
long long S,a,b;
cin >> n; 
while (n--) {
    cin >> S >> a >> b;
cout << relation(S,a,b) << " "; }
  cout << endl;
}
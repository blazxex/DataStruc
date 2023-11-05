#include <iostream>
#include <vector>
using namespace std;
bool grand(long long S, long long a, long long b){
    long long x = min(a,b);
    long long y = max(a,b);
    while(y>x){
        y = (long long)((y-1)/S);
        if(y==x){
            return true;
        }
       
    }
    return false;
        
}
long long height(long long S, long long a){
    long long h = 0;
    if(a==0){
        return 0;
    }
    while(a>0){
        a = (long long)((a-1)/S);
        h++;
    }
    return h;

}
int relation(long long S, long long a, long long b) {
    if(min(a,b) == (long long)((max(a,b)-1)/S) ){
        return 1;
    }
    else if(grand(S,a,b)){
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
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
    cin >> S >> a >> b;
    cout << relation(S,a,b) << " ";
    }
    cout <<endl;  
}
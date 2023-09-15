#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long inp;
    cin>>inp;
    for(long long i = 0 ; i <inp ; i++){
        long long m = pow(2,i);
        if(inp<= m){
            cout<< m - inp;
            break;
        }

    }
    

}
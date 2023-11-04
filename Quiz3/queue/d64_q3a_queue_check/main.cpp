#include<iostream>
using namespace std;
main(){
    int f,s,c,l,z,r,m;
    for(cin>>r;cin>>f>>s>>c>>l>>z;cout<<'\n')
    m=f>l?f:l,
    (f+s)%c==l&&m<c&&s<=c?cout<<"OK",0:(r=(z>3?f+s:z>1?l-f+c:l-s+c)%c,z-3?0:r=f+s-l?f+s-l:s>m?s:m+1,cout<<"WRONG ",z&&cout<<r,0);}

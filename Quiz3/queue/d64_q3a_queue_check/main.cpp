#include<bits/stdc++.h>

using namespace std;
int checkmFront(int mFront,int mSize,int mCap,int last){
    int crr  = last-mSize;
    if(crr<0){
        crr = mCap-(mSize-last-1);
    }
    return crr;
    
}
int checkmSize(int mFront,int mSize,int mCap,int last){
    int crr;
    if(mFront<last){
        return last-mFront+1;
    }
    if(mFront==last){
        return 0;
    }
    return mCap-mFront + last+1;
}
int checkmCap(int mFront,int mSize,int mCap,int last){
    int crrSize  = checkmSize(mFront,mSize,mCap,last);
    if(mFront<=last && crrSize>mCap){
        return crrSize;
    }
    return mCap;
}
int checklast(int mFront,int mSize,int mCap,int last){
    return (mFront+mSize-1)%mCap;

}

int main(){
    int n,mFront,mSize,mCap,last,corr,crr;
    cin>>n;
    while(n--){
        cin>>mFront>>mSize>>mCap>>last>>corr;
        
        switch(corr){
            case 1:
                crr  = checkmFront(mFront,mSize,mCap,last);
                if(mSize==crr){
                    cout<<"OK\n";
                }
                else{
                    cout<<"WRONG "<<crr<<"\n";
                }
                break;
            case 2:
                crr  = checkmSize(mFront,mSize,mCap,last);
                if(mSize==crr){
                    cout<<"OK\n";
                }
                else{
                    cout<<"WRONG "<<crr<<"\n";
                }

                break;
            case 3:
                crr  = checkmCap(mFront,mSize,mCap,last);
                if(mCap==crr){
                    cout<<"OK\n";
                }
                else{
                    cout<<"WRONG "<<crr<<"\n";
                }
                

                break;
            case 4:
                crr  = checklast(mFront,mSize,mCap,last);
                if(last==crr){
                    cout<<"OK\n";
                }
                else{
                    cout<<"WRONG "<<crr<<"\n";
                }
                

                break;

        }
    }
}

#include<iostream>

using namespace std;
void checkIf(bool check){
    if(check){
        cout<<"OK";
    }
    else{
        cout<<"WRONG ";
    }
}
int main(){
    int n,mFront,mSize,mCap,last,correction;
    

    cin>>n;
    while(n--){
        bool check = false;
        cin>>mFront>>mSize>>mCap>>last;
        cin>>correction;
        if((mFront+mSize)%mCap == last){
            check = true;

        }
        switch(correction){
            case 0:
                checkIf(check);
                break;
            case 1:
                checkIf(check);
                if(!check){
                    mFront = (last-mSize)%mCap;
                    cout<<mFront;
                }
                
                break;
            case 2:
                checkIf(check);
                break;
            case 3:
                checkIf(check);
                break;
            case 4:
                checkIf(check);
                break;

        }
        

    }

}
#include<iostream>

using namespace std;

int main(){
    int row,col,want;
    int r1,c1,r2,c2;
    cin>> row >> col >> want;
    int mat[row][col];
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 0;i<want;i++){
        cin>>r1>>c1>>r2>>c2;
        if (r1>r2 || c1>c2){
            cout<< "INVALID"<<endl;
        } else if(r1>row || c1>col){
            cout << "OUTSIDE"<<endl;
        }
        else{
            int mx;
            if(r1<row){
                r1 = 0;
            }
            if(r2>row){
                r2 = row;
            }
            if(c1<col){
                c1 = 0;
            }
            if(c2>col){
                c2 = col;
            }

            mx = mat[r1-1][c1-1];
            for(int i=r1-1;i<r2;i++){
                for ( int j =c1-1;j<c2;j++){
                    if(mx<mat[i][j]){
                        mx = mat[i][j];
                    }
                }
            }
            cout<<mx<<endl;
        }

    }

}
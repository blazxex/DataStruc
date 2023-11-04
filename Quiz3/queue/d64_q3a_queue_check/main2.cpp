#include<bits/stdc++.h>

using namespace std;

pair<bool,int> check(){
    int front,size,cap,last,crr,n;
    cin>>front>>size>>cap>>last>>crr;
    if (crr == 0) {
        if (size >= cap) return {false, -1};
        if ((front + size) % cap != last) return {false, -1};
        if (front >= cap) return {false, -1};
        return {true, -1};
    } else if(crr == 1){  //front
    if ((last - size + cap) % cap == front) 
        return std::make_pair(true, -1);
    return {false, ((last - size + cap) % cap)};
        
    } else if(crr == 2){  //size
        int crrSize = ((last+cap-front) % cap);
        if(size!=crrSize) return{false,crrSize};
        return {true,-1};
    } else if(crr == 3){  //cap
        if (front + size == last) return {true, -1};
        if (front + size >= cap) {
            int where = front + size - cap;
            if (where == last) return {true, -1};
            return {false, front + size - last} ;
        }
        return {false, front + size - last};


    } else if(crr == 4){  //last
    int crrLast = (front + size) % cap == last;
    if (crrLast == last ) return{true, -1};
        return {false, ((front + size) % cap)};

    } 

}
int main(){
    
    int n;
    cin>>n;
    while(n--){
        pair<bool,int> result = check();
        if(result.first){
                cout<<"OK\n";
            }
        else{
        
        if(result.second != -1){
                cout<<"WRONG "<<result.second<<"\n";
            }
            else{
            cout<<"WRONG\n";
        }
        }
        
        }
        

        


    }
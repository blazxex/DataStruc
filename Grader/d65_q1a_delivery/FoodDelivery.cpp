#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n,m,cmd,app,price,sum,temp;

    queue<int> a;
    queue<int>  b;
    vector<int> done;
    vector<int> target;
    sum = 0;
    cin>>n>>m;
    for(int i = 0;i<m;i++){
        cin>>temp;
        target.push_back(temp);
    }
    while(n--){
        cin>>cmd;
        switch (cmd){
            case 1:
                cin>>app>>price;
                switch (app)
                    {
                        case 1:
                            a.push(price);
                            break;
                        case 2:
                            b.push(price);
                            break;
                    }
                break;
            case 2:
                int a_price,b_price;
                if(!a.empty()&&b.empty()){
                    sum+=a.front();
                    a.pop();
                }
                else if(!b.empty()&&a.empty()){
                    sum+=b.front();
                    b.pop();
                }
                else{
                    if(a.front()>b.front()){
                        sum+=b.front();
                        b.pop();
                    }
                    else{
                        sum+=a.front();
                        a.pop();
                    }
                }
                done.push_back(sum);
                

                break;
        }
    }

    for(int i = 0 ;i<target.size() ;i++){
        auto it = lower_bound(done.begin(),done.end(),target[i]);
        if(it == done.end()){
            cout<<"-1 ";
        }
        else{
            cout<< (it-done.begin())+1<<" ";
        }
    }
 
    
    

}


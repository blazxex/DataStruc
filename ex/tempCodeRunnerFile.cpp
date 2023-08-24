#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int year,month,info,ques;
    char status = 'X';

    vector< pair<int,int> > publish;
    pair<int,int> temp;
    cin>>info>>ques;
    for(int i = 0;i<info;i++){
        cin>>year>>month;
        publish.push_back(make_pair(year,month));


    }
    sort(publish.begin(),publish.end());
    
    for(int j = 0;j< ques;j++){
        cin>>year>>month;
        temp = make_pair(year,month);
        char status = 'X';
        if(temp<publish[0]){
            cout<<"-1 -1 ";
        }
        else if(temp > publish[info-1]){
            cout<<publish[info-1].first<<" "<<publish[info-1].second<<" ";
        }
        else{

            int right = info-1;
            int left = 0;
            while(right>=left){
                int mid = left+ (right - left)/2;
                if(publish[mid]>temp){  // pointer is greater
                    right = mid-1;
                    if(status == 'Y'){
                        cout<<publish[mid-1].first<<" "<<publish[mid-1].second<<" ";
                        break;
                    }
                    status = 'N';
                    
                }
                else if(publish[mid]<temp){  //poiter is lower
                    left = mid+1;
                    if(status == 'N'){
                        cout<<publish[mid].first<<" "<<publish[mid].second<<" ";
                        break;
                    }
                    status = 'Y';
                    
                }
                else if(publish[mid]==temp){
                    cout<<"0 0 ";
                    break;
                }
               
                // else{
                //     cout<<publish[mid].first<<" "<<publish[mid].second<<"\n";
                //     break;
                // }

            }
        }
        
    }
        
}


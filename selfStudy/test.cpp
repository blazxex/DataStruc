#include<iostream>	
#include<algorithm>
#include<vector>
#include<map>

using namespace std;
void print_range2(int step, int goal){

if (step < goal) {

std::cout<<step<<" ";
print_range2(step+1, goal);

}
}
int main(){
     print_range2(0,5);
}


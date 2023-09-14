#include<iostream>

using namespace std;

// int main(){
//     int x,y;
//     int *a;
//     int *b;

//     x  = 10;
//     a = &x;
//     b = a;
//     *b = 30;
//     y = *b;

//     cout<<&x<<endl;
//     cout<<&y<<endl;
//     cout<<&a<<endl;
//     cout<<&b<<endl;
//     cout<<sizeof(int)<<endl;  //4byte = 32 bits
//     cout<<sizeof(int*)<<endl; //8byte = 64 bits -> address can = 62 bits
    
    
// }

class test {
public:
  // constructor
test() : data() { cout << "created" << endl; } //destructor
~test() { cout << data << " destroyed " << endl; } int data;
};
int main() {
test *a, *b;
  a = new test;
  a->data = 10;
  cout << a->data << endl;
  delete a;
  b = new test[4];
  b[0].data = 10;
  b[1].data = 20;
  b[2].data = 30;
  b[3].data = 40;
  delete [] b;
}
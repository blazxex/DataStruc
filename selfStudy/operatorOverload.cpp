#include<iostream>
#include<queue>
using namespace std;

class Student{
public:
	Student(float score,string a , string b){  //<- constructor
	name = a;
    surname = b;
    gpax = score;
    }
    bool is1stHonor(){
        return gpax>=3.6;
    }
    string name,surname;
    float gpax;
    bool operator<(const Student &other) const{
        return gpax<other.gpax;
    }
};


int main(){
    Student a(2.95,"not","me");
    Student b(4.00,"it","me");
    cout<< (a<b);
    priority_queue<Student> x;
    x.push(a);
    x.push(b);
    cout<<x.top().name<<x.top().gpax;
    x.pop();

    
    
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <algorithm>
// #include <functional>
#include <iostream>
#include "priority_queue.h"
#include "student.h"

//---------------------------------------------
int main() {
    CP::priority_queue<int> x;
    x.push(65);
    x.push(52);
    x.push(1);
    x.push(5);
    x.push(9);
    x.push(31);
    x.change(5,72);
    while(!x.empty()){
        std::cout<<x<<" ";
    }



}

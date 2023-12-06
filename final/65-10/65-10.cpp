#include <iostream>
#include <vector>

using namespace std;

#include "q.h"

int main() {
CP::priority_queue<int> a,b;
  std::vector<int> v = {1,5,4,2,-3,9,6};
  for (auto &x : v) {
    a.push(x);
    b.push(x);
  }
  cout<<a.contain(9);
}


#include <stdexcept>
#include <iostream>
#include "map_avl.h"
#include <vector>

using namespace std;

int main(){
    CP::map_avl<int, string> tree;  // Assuming KeyT is int and MappedT is string

    // Example: Inserting keys into the tree
    for(int i = 0 ; i <50 ; i +=2){
         tree.insert({i*2, "><"});
    }
    // tree.insert({10, "Ten"});
    // tree.insert({20, "Twenty"});
    // tree.insert({5, "Five"});
    // tree.insert({8, "Eight"});
    // tree.insert({12, "Twelve"});
    // tree.insert({7, "Seven"});
    // tree.insert({6, "Six"});
    // Add more insertions as needed

    int inputKey;
    cout << "Enter the key to find the upper bound: ";
    cin >> inputKey;

    auto it = tree.upper_bound(inputKey);
    if (it != tree.end()) { // Assuming there's an 'end()' function in your map_avl class
        cout << "Upper bound for " << inputKey << " is: " 
             << it->first << " -> " << it->second << endl;
    } else {
        cout << "No upper bound found for " << inputKey << endl;
    }

    return 0;
}

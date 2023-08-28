#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {9, 1, 2, 3, 4, 5, 6, 7};

    auto it = std::find(v.begin(), v.end(), 1); // Find the iterator pointing to the number 1

    if (it != v.end()) {
        v.insert(it + 1, 5, 20); // Insert 20 after number 1, 5 times
    } else {
        std::cout << "Number 1 not found in the vector." << std::endl;
    }

    // Print the updated vector
    for (int num : v) {
        std::cout << num << " ";
    }
    
    return 0;
}

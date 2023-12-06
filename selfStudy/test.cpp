// #include <iostream>
// #include <functional>
// #include <string>

// int main() {
//     // Create a std::hash object for std::string
//     std::hash<std::string> hasher;

//     // Use the hasher to create hash values
//     std::string data = "Hello, world!";
//     size_t hashValue = hasher(data);

//     std::cout << "Hash value for '" << data << "' is: " << hashValue << std::endl;

//     return 0;
// }
#include <iostream>
#include <algorithm>

struct Node {
    int key;
    Node *left, *right;
    int height;

    Node(int value) : key(value), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
public:
    Node* root;

    AVLTree() : root(nullptr) {}

    // Function to get the height of the tree
    int height(Node* N) {
        if (N == nullptr)
            return 0;
        return N->height;
    }

    // Function to right rotate subtree rooted with y
    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        // Perform rotation
        x->right = y;
        y->left = T2;

        // Update heights
        y->height = std::max(height(y->left), height(y->right)) + 1;
        x->height = std::max(height(x->left), height(x->right)) + 1;

        // Return new root
        return x;
    }

    // Function to left rotate subtree rooted with x
    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        // Perform rotation
        y->left = x;
        x->right = T2;

        // Update heights
        x->height = std::max(height(x->left), height(x->right)) + 1;
        y->height = std::max(height(y->left), height(y->right)) + 1;

        // Return new root
        return y;
    }

    // Get balance factor of node N
    int getBalanceFactor(Node* N) {
        if (N == nullptr)
            return 0;
        return height(N->left) - height(N->right);
    }

    // Insert a key into the tree and returns the new root of the subtree
    Node* insert(Node* node, int key) {
        // Perform the normal BST insertion
        if (node == nullptr)
            return(new Node(key));

        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);
        else // Equal keys are not allowed in BST
            return node;

        // Update height of this ancestor node
        node->height = 1 + std::max(height(node->left), height(node->right));

        // Get the balance factor of this ancestor node to check whether
        // this node became unbalanced
        int balance = getBalanceFactor(node);

        // If this node becomes unbalanced, then there are 4 cases

        // Left Left Case
        if (balance > 1 && key < node->left->key)
            return rightRotate(node);

        // Right Right Case
        if (balance < -1 && key > node->right->key)
            return leftRotate(node);

        // Left Right Case
        if (balance > 1 && key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Right Left Case
        if (balance < -1 && key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        /* return the (unchanged) node pointer */
        return node;
    }

    // Function to print the tree (for debugging purpose)
    void preOrder(Node* root) {
        if (root != nullptr) {
            std::cout << root->key << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
};

int main() {
    AVLTree tree;
    // Add nodes to the tree
    tree.root = tree.insert(tree.root, 10);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 25);
    coutt
}

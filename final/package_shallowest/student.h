#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include<queue>

//you can use this function
// template <typename KeyT,
//           typename MappedT,
//           typename CompareT>
// int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
//   if(!n){
//     return -1;
//   }
//   if(!(n->right)){
//     return 1+shallowest_leaf(n->right);
//   }
//   if(n->left){
//     return 1+shallowest_leat(r->left)
//   }
//    return 1+ std::min(shallowest_leaf(n->left),shallowest_leaf(n->right));

// }

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
if (mRoot == nullptr) return -1; // Empty tree

            std::queue<std::pair<node*, int>> q;
            q.push({mRoot, 0}); // Push root with depth 0

            while (!q.empty()) {
                auto front = q.front();
                q.pop();

                node *node = front.first;
                int depth = front.second;

                // Check if it's a leaf node
                if (node->left == nullptr && node->right == nullptr) {
                    return depth;
                }

                // Enqueue children with incremented depth
                if (node->left != nullptr) q.push({node->left, depth + 1});
                if (node->right != nullptr) q.push({node->right, depth + 1});
            }

            // This point is theoretically unreachable since at least the root exists
            return -1;
        }



#endif

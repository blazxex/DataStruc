#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {

  if(!n){
    return 0;
  }
  return process(n->right)+process(n->left)+1;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mSize == 0){
    return std::pair<KeyT,MappedT>();
  }
  if(mRoot->right != NULL){
    right.clear();
    node *n = mRoot->right;
    right.mRoot = n;
    right.mSize = process( right.mRoot);
    mRoot->right = NULL;
  }

  if(mRoot->left != NULL){
    left.clear();
    node *n = mRoot->left;
    left.mRoot = n;
    mRoot->left = NULL;
    left.mSize = process(left.mRoot);

  }
  mSize = 1;
  return mRoot->data;
 
  
}

#endif


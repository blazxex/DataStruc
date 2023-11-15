#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if(!n){
    return 0;
  }
  return 1+process(n->right)+process(n->left);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mSize!=0){
    left.clear();
    right.clear();
    if(mRoot->left!=NULL){
      
      left.mRoot = mRoot->left;
      mRoot->left = NULL;
      left.mSize = process(left.mRoot);


    }
    if(mRoot->right!=NULL){

      right.mRoot = mRoot->right;
      
      mRoot->right = NULL;
      right.mSize = process(right.mRoot);
      

    }
    mSize = 1;


    return mRoot->data;
  }
  return std::pair<KeyT,MappedT>();
}

#endif


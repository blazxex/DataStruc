#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,size_t level,size_t tmp,std::vector<KeyT> &v) {
  //you MAY need to use this function
  if( tmp==level){
    v.push_back(n->data.first);
  }
  if(tmp>level){
    return;
  }
  tmp++;
  if(n->right!=NULL){
    my_recur(n->right,level,tmp,v);
  }
  if(n->left!=NULL){
    my_recur(n->left,level,tmp,v);
  }
 


  
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
  std::vector<KeyT> v;
  if(level==0){
    v.push_back(mRoot->data.first);
  }
  else{my_recur(mRoot,level,0,v);}

  return v;
  //write your code here
}


#endif



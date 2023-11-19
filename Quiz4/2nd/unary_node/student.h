#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) const {
  //you may write additional code here
  if(n->left == NULL && n->right != NULL){
    return 1+ process(n->right);
  }
  if(n->left != NULL && n->right == NULL){
    return 1+ process(n->left);
  }
  if(n->left == NULL && n->right == NULL){
    return 0;
  }
  return process(n->left)+process(n->right);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  if(mSize == 0){
    return 0 ;
  }
  return process(mRoot);
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename KeyT,
          typename MappedT,
          typename CompareT >

node* check(node* n, KeyT val){
  if(n->data.first>val && n->data->parent.data<= n ){
    return n;
  }
  if(compare(n->data.first,val)==1){
    return check(n->left,val)
  }
  if(compare(n->data.first,val)==-1){
    return check(n->left,val)
  }


  
}
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node *target = check(mRoot,val);
  if(mLess (target->parent.data,target->data.first)){  //target > parent -> right
    if(mLess(mRoot->data.first,target->data.first)){
      if(target->left !=NULL){
        target->parent->right =   target->left;
        target->left->parent = target->parent;
      }
        result.mRoot = target;
        target.parent = NULL;
    }
    else{   
      if(target->left !=NULL){
        target->parent->right =   target->left;
        target->left->parent = target->parent;
      }
      result.mRoot = mRoot;
      result.mRoot->left = target;
      mRoot = target->parent->parent;
      

    }

  }
  else{
    

  }
  CP::map_bst<KeyT,MappedT,CompareT> result;

  return result;
}

#endif

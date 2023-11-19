#ifndef STUDENTH
#define STUDENTH

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT,MappedT,CompareT> result;

  node* curr = mRoot;
  mRoot = NULL;
  result.mRoot = NULL;
  node* currOrigin = NULL; // create old root
  node* currResult = NULL;  //crearte resutl root 


  while(curr!=NULL){
    int comp = compare(curr->data.first, val);
    if(comp == -1){ // less than val
      child_link(currOrigin, curr->data.first) = curr;
      curr->parent = currOrigin;

      // move and cut
      currOrigin = curr;
      curr = curr->right;
      currOrigin->right = NULL;
    }
    else{
      result.child_link(currResult, curr->data.first) = curr;
      curr->parent = currResult;

      // move and cut
      currResult = curr;
      curr = curr->left;
      currResult->left = NULL;
    }
  }
  return result;
}

#endif

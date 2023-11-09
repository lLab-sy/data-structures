#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  while(mRoot != NULL){
    if(compare(mRoot->data.first, val) != -1){
      if(result.mRoot == NULL){
        result.mRoot = mRoot;
        mRoot = mRoot->parent;
        result.mRoot->parent = NULL;
      }else{
        result.mRoot->left = mRoot;
        mRoot = mRoot->parent;
        result.mRoot->left->parent = result.mRoot;
        result.mRoot = result.mRoot->left;
      }
      if(mRoot != NULL) mRoot->right = NULL;
      if(result.mRoot->left != NULL){
        if(mRoot == NULL){
          mRoot = result.mRoot->left;
          result.mRoot->left = NULL;
          mRoot->parent = NULL;
        }else{
          mRoot->right = result.mRoot->left;
          result.mRoot->left = NULL;
          mRoot->right->parent = mRoot;
          mRoot = mRoot->right;
        }
      }
    }else{
      if(mRoot->right == NULL) break;
      mRoot = mRoot->right;
    }
  }

  while(mRoot != NULL and mRoot->parent != NULL) mRoot = mRoot->parent;
  while(result.mRoot != NULL and result.mRoot->parent != NULL) result.mRoot = result.mRoot->parent;

  return result;
}

#endif

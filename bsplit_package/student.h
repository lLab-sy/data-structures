#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* ptr1 = mRoot;
  node* ptr2 = NULL;
  while(ptr1!=NULL){
    int cmp = compare(ptr1->data.first, val);
    if(cmp >= 0){
      
      node* parent1 = ptr1->parent;
      if(ptr2 == NULL){
        result.mRoot = ptr1;
        ptr2 = result.mRoot;
        ptr2->parent = NULL;
      }else {
        ptr2->left =  ptr1;
        ptr1->parent = ptr2;
      }

      ptr1 = parent1;

      if(ptr2->left != NULL){
        if(ptr1 == NULL){
          mRoot = ptr2->left;
          ptr1 = mRoot;
          ptr1->parent = NULL;
        }else{
          ptr1->right = ptr2->left;
          ptr2->left->parent = ptr1;
        }

        ptr2->left = NULL;
      }
      
    }else{
      ptr1=ptr1->right;
    }
  }

  return result;
}

#endif

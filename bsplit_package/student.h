#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* root1 = mRoot;
  node* root2 = result.mRoot;
  node* ptr1 = root1;
  node* ptr2 = root2;
  while(ptr1!=NULL){
    int cmp = compare(ptr1->data.first, val);
    if(cmp >= 0){
      // cut this node from this
      node* parent = ptr1->parent;
      ptr1->parent = NULL;
      if(ptr2==NULL){
        root2 = ptr1;
        ptr2 = root2;
      }
      else{
        ptr2->left = ptr1;
        ptr1->parent = ptr2;
        ptr2 = ptr2->left;
      }
      ptr1 = parent;
      if(ptr1!=NULL) ptr1->right = NULL;
      while(ptr2!=NULL){
        int cmp2 = compare(ptr2->data.first, val);
        if(cmp2 == -1){
          node* parent2 = ptr2->parent;
          ptr2->parent = NULL;
          if(ptr1==NULL){
            root1 = ptr2;
            ptr1 = root1;
          }else{
            ptr1->right = ptr2;
            ptr2->parent = ptr1;
            ptr1 = ptr1->right;
          }
          ptr2 = parent2;
          if(ptr2!=NULL) ptr2->left = NULL;
          break;
        }else{
          ptr2 = ptr2->left;
        }
      }
    }else{
      ptr1=ptr1->right;
    }
  }
  result.mRoot = root2;
  mRoot = root1;

  return result;
}

#endif

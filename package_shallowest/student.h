#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if(n == NULL) return 2e9;
  if(n->left == NULL and n->right == NULL) return 1;
  int ml = shallowest_leaf(n->left), mr = shallowest_leaf(n->right);
  return 1+((ml < mr)?ml:mr);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if(mSize == 0) return -1;
  return shallowest_leaf(mRoot)-1;
}


#endif

#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> res(k, std::vector<T>());
  for(int i=0;i<mSize;++i){
    res[(mSize-i-1)%k].push_back(mData[i]);
  }
  return res;
}

#endif


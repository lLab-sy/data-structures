#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;
  last--;first--;
  while(first!=last) push(*(last--));
}

#endif

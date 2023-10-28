#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  for(int i=0;i<mSize;++i)
    if((2*i+1 < mSize and mLess(mData[i], mData[2*i+1])) or (2*i+2 < mSize and mLess(mData[i], mData[2*i+2]))) return false;
  return true;
}

#endif
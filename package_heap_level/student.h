#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  int s=0,e=0;
  while(k--) {s = 2*s+1; e = 2*e+2; if(s >= mSize) return r;}
  for(int i=s; i<=e and i<mSize; ++i) r.emplace_back(mData[i]);
  std::sort(r.begin(), r.end(), mLess);
  std::reverse(r.begin(), r.end());

  return r;
}

#endif


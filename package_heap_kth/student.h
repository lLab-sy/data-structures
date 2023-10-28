#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  std::vector<T> v;
  for(int i=0;i<mSize and i<7;++i) v.push_back(mData[i]);
  std::sort(v.begin(), v.end(), mLess);
  std::reverse(v.begin(), v.end());
  return v[k-1];
}

#endif

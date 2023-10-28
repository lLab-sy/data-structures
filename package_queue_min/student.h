#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  T res;
  for(size_t i=0;i<pos.size();++i){
    if(pos[i] < mSize){
      res = mData[(mFront+pos[i])%mCap];
      break;
    }
  }
  for(auto &p: pos){
    if(p < mSize and comp(mData[(mFront+p) % mCap], res)) res = mData[(mFront+p) % mCap];
  }
  return res;
}

#endif

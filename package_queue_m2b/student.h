#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T t = mData[(mFront+pos)%mCap];
  int idx = mFront+pos, nidx = mFront+pos+1;
  for(int i=pos;i<mSize-1;++i){
    if(idx >= mCap) idx -= mCap;
    if(nidx >= mCap) nidx -= mCap;
    mData[idx++] = mData[nidx++];
  }
  mData[(mFront+mSize-1)%mCap] = t;
}

#endif

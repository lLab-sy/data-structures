#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  int i = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
  if (i == aux.size()) i--;
  if (i > 0) index -= aux[i - 1];
  mData[i].insert(mData[i].begin()+index, value.begin(), value.end());
  for(int j=i;j<aux.size();++j) aux[j] += value.size();

  if(mData[i].size() > 2000){
    mData.insert(mData.begin()+i+1, std::vector<T>(mData[i].begin()+mData[i].size()/2, mData[i].end()));
    aux.insert(aux.begin()+i+1, aux[i]);
    mData[i].erase(mData[i].begin()+mData[i].size()/2, mData[i].end());
    aux[i] -= mData[i+1].size();
  }
  
  mCap += value.size();
  mSize += value.size();
}

#endif
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data) {
  //write your code here

  sort(data.begin(), data.end());
  T *nData = new T[mSize+data.size()]();

  // index in data, index in nData
  int p=0,j=0;
  // index in mData
  for(int i=0;i<mSize;++i){
    if(p<data.size() and data[p].first == i) nData[j++] = data[p++].second;
    nData[j++] = mData[i];
  }

  if(p<data.size()) nData[j++] = data[p++].second;
  delete [] mData;
  mData = nData;
  mSize = mSize+data.size();
  mCap = mSize;
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> unq;
  int j = 0;
  for(int i=0;i<mSize;++i){
    if(unq.find(mData[i]) == unq.end()){
      mData[j++] = mData[i];
      unq.insert(mData[i]);
    }
  }
  mSize = j;
}

#endif

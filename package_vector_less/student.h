#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if(mSize == 0 or other.mSize == 0) return mSize < other.mSize;
  int i=0;
  while(i<mSize and i<other.mSize){
    if(mData[i] != other[i]) return mData[i] < other[i];
    i++;
  }
  if(mSize < other.mSize) return true;
  return false;
}

#endif

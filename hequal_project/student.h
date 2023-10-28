#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if(mSize == other.size()){
    if(mData[0] == other.mData[0]) return true;
  }
  return false;
}

#endif

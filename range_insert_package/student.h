#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int pSize = last-first;
  int p = position-begin();
  ensureCapacity(mSize + pSize);
  position = begin()+p;
  for(int i=mSize-1;i>=p;--i){
    mData[i+pSize] = mData[i];
  }
  while(first != last){
    *(position++) = *(first++);
  }

  mSize += pSize;
}

#endif

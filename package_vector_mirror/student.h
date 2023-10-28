#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  size_t newSize = mSize*2;
  size_t newCap = mCap;
  if(newSize >= mCap) newCap *= 2;

  T *newData = new T[newCap]();
  for(size_t i=0;i<mSize;++i) *(newData+i) = *(mData+i);
  for(size_t i=0;i<mSize;++i) *(newData+mSize+i) = *(mData+mSize-i-1);

  mSize = newSize;
  mCap = newCap;
  
  delete [] mData;
  mData = newData;
}

#endif

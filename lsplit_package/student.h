#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here

  CP::list<T> result;
  if(pos == mSize) return result;
  result.mHeader->next = it.ptr;
  result.mHeader->prev = end().ptr->prev;
  end().ptr->prev->next = result.mHeader;  
  
  mHeader->prev = it.ptr->prev;
  it.ptr->prev->next = mHeader;

  it.ptr->prev = result.mHeader;
  result.mSize = mSize-pos;

  mSize = pos;

  return result;
}

#endif

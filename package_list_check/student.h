#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  auto it = begin();
  if(mHeader->next == NULL or mHeader->prev == NULL) return false;
  for(int i=0;i<mSize;++i,it++)
    if(it.ptr->next == NULL or it.ptr->prev == NULL or it.ptr->next->prev != it.ptr or it.ptr->prev->next != it.ptr) return false;
  return it.ptr == mHeader;
}


#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  while(a!=b){
    if(*a == value){
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      auto pa = a;
      a++;
      mSize--;

      // output.push_front(value);
      pa.ptr->prev = output.begin().ptr->prev;
      pa.ptr->next = output.begin().ptr;
      output.mHeader->next->prev = pa.ptr;
      output.mHeader->next = pa.ptr;
      output.mSize++;
    }else a++;
  }
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(a == b) return a;
  b--;
  auto na = a;
  while(a != b){
    T tmp = *a;
    *a = *b;
    *b = tmp;
    a++;
    if(a == b) break;
    b--;
  }
  return na;
}

#endif

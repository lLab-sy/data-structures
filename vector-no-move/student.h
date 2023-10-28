#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int pos = upper_bound(aux.begin(), aux.end(), idx) - aux.begin() - 1;
  return mData[pos][idx-aux[pos]];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  if(aux.size() < 1){
    aux.push_back(0);
  } 
  aux.push_back(mCap);
}

#endif

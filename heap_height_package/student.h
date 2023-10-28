#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  if(mSize == 0) return -1;
  int res = 0, cur = mSize-1;
  while(cur > 0){
    cur = (cur-1)/2;
    res++;
  } 
  return res;
}

#endif


#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T> > &ls) {
  //write your code here
  for(auto it=ls.begin();it!=ls.end();++it){
    if((*it).size() == 0) continue;
    (*it).begin().ptr->prev = mHeader->prev;
    mHeader->prev->next = (*it).begin().ptr;
    mHeader->prev = (*it).end().ptr->prev;
    (*it).end().ptr->prev->next = mHeader;
    mSize += (*it).size();
    (*it).mHeader = new node();
    (*it).mSize = 0;
  }
}

#endif

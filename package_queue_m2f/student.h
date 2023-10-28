#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    using std::swap;
    swap(mData[mFront], mData[(mFront+pos)%mCap]);
    for(int i=pos-1;i>0;--i) swap(mData[(mFront+i)%mCap], mData[(mFront+i+1)%mCap]); 
}

#endif

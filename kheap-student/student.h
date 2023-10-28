#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx > 0){
        size_t p = (idx-1)/4;
        if(mLess(tmp, mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    if(idx >= mSize) return;
    T mx = mData[idx];
    for(size_t i=idx*4+1;i<=idx*4+4 and i<mSize;++i){
        if(mLess(mx, mData[i])) mx = mData[i];
    }
    if(mx == mData[idx]) return ;
    for(size_t i=idx*4+1;i<=idx*4+4 and i<mSize;++i){
        if(mx == mData[i]){
            T tmp = mData[idx];
            mData[idx] = mData[i];
            mData[i] = tmp;
            fixDown(i);
            break;
        }
    }
}

#endif


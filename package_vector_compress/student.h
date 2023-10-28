#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *nData = new T[mSize]();
    for(int i=0;i<mSize;++i) nData[i] = mData[i];
    delete [] mData;
    mData = nData;
    mCap = mSize;
}

#endif

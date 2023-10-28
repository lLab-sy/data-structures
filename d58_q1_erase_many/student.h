#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int i = 0, j = 0; 
  int p = 0;
  while(j < mSize){
    if(p < pos.size() and j == pos[p]){
      j++;p++;
    }else{
      mData[i++] = mData[j++];
    }
  }
  mSize -= pos.size();
}

#endif

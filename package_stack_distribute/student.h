#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T> > CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T> > res(k);
  int c=mSize/k, p=mSize%k, z=mSize-1;
  for(int i=0;i<k;++i){
    res[i] = std::vector<T>(c+(i<p));
    for(int j=0;j<c+(i<p);++j) res[i][j] = mData[z--];
  }
  return res;
}
#endif

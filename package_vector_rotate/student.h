#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  size_t n = last-first;
  if(k != 0) k = k%n;
  T *rd = new T[n]();
  for(auto i=first+k;i<last;++i) rd[i-first-k] = *i;
  for(auto i=first;i<first+k;++i) rd[i-first+n-k] = *i;
  for(auto i=first;i<last;++i) *i = rd[i-first];
  delete [] rd;
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(a < begin() or b < begin() or a >= end() or b >= end() or a + m > end() or b + m > end() or m == 0 or m > abs(b-a)) return false;
  
  for(int i=0;i<m;++i) std::swap(*(a++), *(b++));

  return true;
}

#endif

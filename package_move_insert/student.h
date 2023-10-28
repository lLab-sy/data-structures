#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  stack<T> topS, topS2;
  while(k-- and !empty()){
    topS.push(top());
    pop();
  }
  while(m-- and !s2.empty()){
    topS2.push(s2.top());
    s2.pop();
  }
  while(!topS2.empty()){
    push(topS2.top());
    topS2.pop();
  }
  while(!topS.empty()){
    push(topS.top());
    topS.pop();
  }
}
#endif

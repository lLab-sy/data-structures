#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> res;
  for(auto& [o, val]: v){
    if(o == 1){
      res.push(val);
    }else{
      int a, b;
      b = res.top();
      res.pop();
      a = res.top();
      res.pop();

      int c;
      if(val == 0){
        c = a+b;
      }else if(val == 1){
        c = a-b;
      }else if(val == 2){
        c = a*b;
      }else{
        c = a/b;
      }
      res.push(c);
    }
  }
  return res.top();
}

#endif

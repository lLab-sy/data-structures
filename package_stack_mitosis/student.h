#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    stack<T> topS;
    for(int i=0;i<a;++i){
        topS.push(top());
        pop();
    }
    for(int i=a;i<=b;++i){
        topS.push(top());
        topS.push(top());
        pop();
    }
    while(!topS.empty()){
        push(topS.top());
        topS.pop();
    }
}

#endif
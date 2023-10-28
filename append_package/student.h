#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> rs;
        while(!empty()){
            rs.push(top());
            pop();
        } 
        while(!s.empty()){
            rs.push(s.top());
            s.pop();
        }
        while(!rs.empty()){
            push(rs.top());
            rs.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> rs;
        while(!empty()){
            rs.push(top());
            pop();
        } 
        while(!q.empty()){
            rs.push(q.front());
            q.pop();
        }
        while(!rs.empty()){
            push(rs.top());
            rs.pop();
        }
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}

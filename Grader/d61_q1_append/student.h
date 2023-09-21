#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
         size_t newSize = size()+s.size();
        T *arr = new T[newSize]();
        int j = 0;
        for(int i = 0 ; i< s.size();i++){
            arr[i] = s.mData[i];
        }
        for(int i = s.size() ; i< newSize;i++){
            arr[i] = mData[j++];
        }
        delete [] mData ;
        // ensureCapacity(newSize);
        mData = arr;
        
        mSize = newSize;



     
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        size_t newSize = size()+q.size();
        T *arr = new T[newSize]();
        size_t i = newSize-1;

        while(!empty()){
            arr[i--] = top();
            pop();
        }
        while(!q.empty()){
            arr[i--] = q.front();
            q.pop();

        }

        delete [] mData ;
        // ensureCapacity(newSize);
        mData = arr;
        
        mSize = newSize;

        

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

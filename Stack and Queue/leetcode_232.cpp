#include<iostream>
#include<stack>
using namespace std;
// class MyQueue {
// public:
//     //using two stacks
//     stack<int> s1;
//     stack<int> s2;
//     MyQueue() {
        
//     }
    
//     void push(int x) {
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s2.push(x);
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
    
//     int pop() {
//        int ele = s1.top();
//         s1.pop();
//         return ele;    
//     }
    
//     int peek() {
//         return s1.top();
//     }
    
//     bool empty() {
//         return s1.empty();
//     }
// };
//using one stack
class MyQueue {
public:
    //using two stacks
    stack<int> s1;
    MyQueue() {
        
    }
    
    void push(int x) {  
        helper(x);
    }
    void helper(int x){
        if(s1.empty()){
                s1.push(x);
                return;
         }
        int data = s1.top();
        s1.pop();
        helper(x);
        s1.push(data);
        return;    
    }
    int pop() {
       int ele = s1.top();
        s1.pop();
        return ele;    
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

#include <stack>

class MinStack {
public:
    MinStack() {
        min_stk.push(INT_MAX);
    }
    
    void push(int val) {
        // push the val to the main stack
        stk.push(val);
        
        // ensure that the min stack has the smallest value pushed to it 
        // (sorting) 
        min_stk.push(min(val, min_stk.top()));
    }
    
    void pop() {
        min_stk.pop();
        stk.pop();
    }
    
    int top() { 
        return stk.top();
    }
    
    int getMin() {
        // naive approach o(n) time :
        // we can iterate through the entire stack and compare each element to each other
        // doing this would need us to have some sort of int comparison variable
        
        // alternative? 
        // use another stack and sort each pushed element into the sorted stack
        // sort stack by comparing a pushed value into the stack 
        // 
        return min_stk.top();
    }

private:
    stack<int> stk;
    stack<int> min_stk;
};

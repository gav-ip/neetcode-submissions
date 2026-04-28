#include <stack>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // brute force
        // for each string element append to the stack
        // if the element is not and operand, push the element onto the stack
        // otherwise we apply the operand on the previous 2 elements
        // then push the resulting value back onto the stack for other operands to be applied
        int result;
        stack<int> p;
        
        for (const string& s : tokens){
            
            if (s == "+"){
                int val_1 = p.top(); p.pop();
                int val_2 = p.top(); p.pop();
                result = val_2 + val_1;
                p.push(result);
            }
            else if (s == "-"){
                int val_1 = p.top(); p.pop();
                int val_2 = p.top(); p.pop();
                result = val_2 - val_1;
                p.push(result);
            }
            else if (s == "*"){
                int val_1 = p.top(); p.pop();
                int val_2 = p.top(); p.pop();
                result = val_2 * val_1;
                p.push(result);
            }
            else if (s == "/") {
                int val_1 = p.top(); p.pop();
                int val_2 = p.top(); p.pop();
                result = val_2 / val_1;
                p.push(result);
            }
            else{
                p.push(stoi(s));
            }
        }
        return p.top();
    }
};

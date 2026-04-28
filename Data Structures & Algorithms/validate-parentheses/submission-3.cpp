#include <stack>
#include <map>

class Solution {
public:
    bool isValid(string s) {
        /*
        include stack data structure (Last in First out)
        
        create a map for matchign corresponding open and closed brackets

        for character in string
            if char is parentheses '(' or '[' or '{'
                push(char) onto stack
            else if char is closing parentheses
                if top of stack == stack pop(char)
                    return false "incorrect order"
                else if (stack is not empty)
                    return false
                            
        return true
        */

        stack<char> p;

        map<char, char> matching = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        for (char c : s) {
        if (matching.find(c) != matching.end()) {
            if (p.empty() || p.top() != matching[c]) {
                return false;
            }
            p.pop();
        } else {
            p.push(c);
        }
    }
    return p.empty();
    }
};

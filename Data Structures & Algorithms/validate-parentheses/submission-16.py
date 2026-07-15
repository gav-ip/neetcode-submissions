class Solution:
    def isValid(self, s: str) -> bool:
        
        if not s:
            return False
        
        b = {
            ']' : '[',
            '}' : '{',
            ')' : '('
        }
        
        stack = []

        # keep pushing elements in the stack 
        # if the elemenet is not in the stack we keep it, 
        # if we see another corresponding bracket we push
        
        # ([{ }    
        for ch in s: 
            if ch in b:
                if stack and b[ch] == stack[-1]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(ch) 

            
        return not stack
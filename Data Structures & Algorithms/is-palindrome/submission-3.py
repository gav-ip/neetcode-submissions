class Solution:
    def alphaNum(self, c: str) -> bool:
        return (c >= 'A' and c <= 'Z' or c >= 'a' )


    def isPalindrome(self, s: str) -> bool:
        newStr = ""

        # transformer s so that it is alpha numeric 
        for ch in s: 
            if ch.isalnum():
                newStr += ch.lower()
    
        s_reverse = newStr[::-1]

        return newStr == s_reverse

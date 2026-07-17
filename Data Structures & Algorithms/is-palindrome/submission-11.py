class Solution:

    def isPalindrome(self, s: str) -> bool:
        newStr = ""

        # transformer s so that it is alpha numeric 
        for ch in s: 
            if ch.isalnum():
                newStr += ch.lower()
    
        return newStr == newStr[::-1]

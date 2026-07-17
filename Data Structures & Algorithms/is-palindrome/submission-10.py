class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        if len(s) < 1:
            return True

        # build new string that only takes in numbers and letters
        # all lower case
        newStr = ""

        for ch in s: 
            if ch.isalnum():
                newStr += ch.lower()
        
        i = 0
        j = len(newStr) - 1
        
        while (i < j):
            # two pointer technique where we compare 
            # if the first and last charcters in newStr are the same  
            if newStr[i] != newStr[j]:
                return False
            i += 1
            j -= 1

        return True
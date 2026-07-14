class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""

        for word in strs:
            word_len = str(len(word))
            res += word_len + "#" + word

        return res


    # outputs look like this 
    
    # 5#Hello5#World    
    
    # we want to simply extract the substring of each
    def decode(self, s: str) -> List[str]:
        
        if not s:
            return []

        res, i = [], 0

        while (i < len(s)):

            j = i

            while (s[j] != "#"):
                j += 1

            length = int(s[i:j])
            i = j + 1
            j = i + length
            word = s[i:j]
            res.append(word)
            i = j
        return res
            
        

                

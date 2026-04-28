class Solution {
public:
    bool isPalindrome(string s) {
        
        // erase every whitespace in the string
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        // erase punctionation
        for (int i = 0; i < s.length(); i++){
            if (!isalnum(s[i])) {
                s.erase(i, 1);
                i--;
            }
        }

        // capitalize the whole string
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        // two pointer technique 
        int left = 0; 
        int right = s.length() - 1;

        // iterate through the list
        while(left < right){
            // if each character from the left and right pointers return true
            if(s[left] != s[right]){
                return false;
            }
            // move pointers
            left++; 
            right--;
        }

        return true;

    }
};
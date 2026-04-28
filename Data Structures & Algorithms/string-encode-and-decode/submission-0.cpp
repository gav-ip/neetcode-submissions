class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        
        // for each string element, append to a single string variable?
        string encoded;

        for(string& s : strs){
            encoded += to_string(s.length());
            encoded += "#";
            encoded += s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        if(s.empty()) return{};
        vector<string> result;

        // iterate through the entire length of s

        int n = s.length();
        int i = 0;

        while(i < n){
            
            int len = 0;
            while (s[i] != '#'){
                
                // extracting length over the substring 
                len = len * 10 + (s[i] - '0');
                ++i;
            }
            // skip over the seperator '#'
            ++i;

            string temp = s.substr(i, len);
            result.push_back(temp);
            
            // move index to end of the substring
            i+=len;
        }

        return result;
    }
};

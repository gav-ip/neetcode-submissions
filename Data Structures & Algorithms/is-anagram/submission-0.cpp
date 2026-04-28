class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq_s(256, 0), freq_t(256, 0);

        for (unsigned char c : s) freq_s[c]++;
        for (unsigned char c : t) freq_t[c]++;

        if (freq_s.size() != freq_t.size()) return false;

        for (size_t i = 0; i < freq_s.size(); i++){
            if (freq_s[i] != freq_t[i])
                return false;
        }
        return true;
    }
};

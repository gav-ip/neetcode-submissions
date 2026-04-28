class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result(n);
        
        
        // solution 
        // create two arrays: prefix and suffix for elements to the left and right of i 
        // then multiply prefix[i] * suffix[i] to get the output at i 
        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = 1;
        suffix[n - 1] = 1;

        // at element i any elements that are before i are sorted into the prefix 
        // otherwise they are sorted into suffix


        // 1 2 4 6 
        for (int i = 1; i < n; ++i){
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }
        for (int i = n - 2; i >= 0; --i){
            suffix[i] = nums[i + 1] * suffix[i + 1];
        }

        for (int i = 0; i < n; ++i){
            result[i] = prefix[i] * suffix[i];
        }
        return result;
    }
};

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // concatentate two arrays 
        // size of new array is 2n (where n is the length of nums)
        // since it is a vector we don't need to initialize a new size 
        int n = nums.size();
        vector<int> ans(2 * n);

        
        // copy the values of nums into ans 
        
        for(int i = 0; i < n; ++i){
            ans[i] = nums[i];          
            ans[i + n] = nums[i];
        }

        return ans;
    }
};
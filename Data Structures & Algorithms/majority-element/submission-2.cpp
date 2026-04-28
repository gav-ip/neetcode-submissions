class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> num_count;
        
        int majority = 0, res = 0;

        for (int i = 0; i < nums.size(); ++i){
            
            num_count[nums[i]]++;

            if (num_count[nums[i]] > majority){
                res = nums[i];
                majority = num_count[nums[i]];
            }
        }
        return res;
    }
};
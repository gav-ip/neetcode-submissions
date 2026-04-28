class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> num_count;

        for (int i = 0; i < nums.size(); ++i){
            num_count[nums[i]]++;
        }

        int majority = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (num_count[nums[i]] > nums.size() / 2){
                majority = nums[i];
            }
        }
        return majority;
    }
};
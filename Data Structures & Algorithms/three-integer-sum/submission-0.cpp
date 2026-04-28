class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;
        // sort array 
        sort(nums.begin(), nums.end());
        int n = nums.size();
       
        for (int i = 0; i < n; ++i){
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1; 
            int k = n - 1; 
            int target = -nums[i];
            
            while (j < k){
                // search for target by taking the sum of nums[j] + nums[k]
                if (nums[j] + nums [k] == target){
                    // append the triple into the result 
                    result.push_back({nums[i], nums[j], nums[k]});

                    ++j;
                    k--;
                    
                    // skipping over duplicate numbers
                    while (j < k && nums[j] == nums[j-1]) j++;
                    
                }
                else if (nums[j] + nums[k] < target){
                    // increase j
                    ++j;
                }
                else{
                    // decrease k
                    k--;
                }
            }    
        }    
        return result;    
    }
};

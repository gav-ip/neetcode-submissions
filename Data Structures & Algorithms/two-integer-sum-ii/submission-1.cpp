class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // two pointer technique where we search from the beginning and the end 
        // of the array 
        // compare if nums[0] + nums[n-1] > target
        // decrease right pointer 

        // compare if nums[0] + nums[n - 1] < targext
        // increase left pointer 
        
        // return indicies when nums[0] + nums[n - 1] = target
        int i = 0; 
        int n = numbers.size() - 1;

        while (i < n){
            if (numbers[i] + numbers[n] == target){
                break;
            }
            else if (numbers[i] + numbers[n] > target){
                n--;
            }
            else{
                ++i;
            }
        }
        return {i + 1, n + 1};
    }
};

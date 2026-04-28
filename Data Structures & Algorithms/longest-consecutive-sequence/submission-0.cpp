class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int maxLen = 0;

        unordered_set<int> hashset(nums.begin(), nums.end());

        for (int x : hashset){
            hashset.insert(x);
        }

        // find the potential strating element 

        for (int num : hashset){
            
            // find if num - 1 exists for a starting element
            if (hashset.find(num - 1) == hashset.end()){

                int length = 1;
               
                // finding the next highest element 
                while (hashset.find(num + length) != hashset.end()){
                    // increase the sequence length
                    length++;
                }

                // maximize the longest length subarray
                maxLen = max(maxLen, length);
            }
        }

        return maxLen;
    }
};

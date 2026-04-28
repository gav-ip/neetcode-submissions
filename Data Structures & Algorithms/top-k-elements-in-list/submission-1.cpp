class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // using bucket sort, to pick the most occured frequencies
        // iterate through the list if the element has occured more 
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        vector<pair<int,int>> arr;
        for(const auto& n : freq){
            arr.push_back({n.second, n.first});
        }   

        sort(arr.rbegin(), arr.rend());

        // concatinate all buckets into a single array
        vector<int> result;
        for(int i = 0; i < k; ++i){
            result.push_back(arr[i].second);
        }

        return result;
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // we want to replace the placeholder 0 values in nums1 with 
        // the values in nums2 

        // then once we place the values in nums1 we simply just 
        // call the sort function on nums1

        int j = 0; 
        int i = m;
        while (i < m + n) {
            nums1[i] = nums2[j];
            ++i;
            ++j;
        }

        // sort nums1
        sort(nums1.begin(), nums1.end());
    }
};
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // brute force
        // iterate thrugh each element and when the i + 1 element
        // is greater than that of i
        // append the days counter to the result  
        
        int n = temperatures.size();
        vector<int> result(n);
        
        for (int i = 0; i < n; ++i){
            int counter = 1;
            int j = i + 1;
            while (j < n){
                if (temperatures[j] > temperatures[i]){
                    break;
                }
                j++;
                counter++;
            }
            counter = (j == n) ? 0 : counter;
            result[i] = counter;
        }
        return result;
    }
};

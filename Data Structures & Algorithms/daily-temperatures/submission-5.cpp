class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);

        stack<pair<int, int>> temps; // temp, index

        for (int i = 0; i < n; ++i){
            int t = temperatures[i];

            while (!temps.empty() && t > temps.top().first){
                auto top = temps.top();
                temps.pop(); 
                result[top.second] = i - top.second;
            }
            temps.push({t, i});
        }
        return result;        
    }
};

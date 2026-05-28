class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;

        // Count frequency
        for(int num : nums) {
            freq[num]++;
        }

        // Store into vector
        vector<pair<int,int>> vec;

        for(auto it : freq) {
            vec.push_back(it);
        }

        // Sort descending by frequency
        sort(vec.begin(), vec.end(),
            [](pair<int,int>& a, pair<int,int>& b) {
                return a.second > b.second;
            });

        // Take first k elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};

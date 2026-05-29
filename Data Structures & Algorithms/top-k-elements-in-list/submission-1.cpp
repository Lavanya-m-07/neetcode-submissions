class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        // Step 1: Count frequency
        for(int n : nums)
        {
            mp[n]++;
        }

        // Step 2: Create buckets
        vector<vector<int>> bucket(nums.size() + 1);

        // Put numbers into their frequency bucket
        for(auto it : mp)
        {
            int num = it.first;
            int freq = it.second;

            bucket[freq].push_back(num);
        }

        vector<int> result;

        // Step 3: Traverse from highest frequency
        for(int i = bucket.size() - 1; i >= 0; i--)
        {
            for(int n : bucket[i])
            {
                result.push_back(n);

                if(result.size() == k)
                {
                    return result;
                }
            }
        }

        return result;
    }
};

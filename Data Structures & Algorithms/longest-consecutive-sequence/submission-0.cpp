class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int maxCount = 1;

        for(int i = 0; i < nums.size() - 1; i++) {

            // Skip duplicates
            if(nums[i] == nums[i + 1])
                continue;

            // Consecutive sequence
            if(nums[i + 1] == nums[i] + 1) {

                longest++;

                maxCount = max(maxCount, longest);
            }
            else {
                longest = 1;
            }
        }

        return maxCount;
    }
};

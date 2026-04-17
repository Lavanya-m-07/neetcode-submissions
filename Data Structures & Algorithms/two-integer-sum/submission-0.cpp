class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Create the hash map
        // Key = number in the array, Value = its index
        unordered_map<int, int> prevMap; 

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            // Step 2: Check if 'diff' is in the map
            // .find() returns an iterator to the end() if not found
            if (prevMap.find(diff) != prevMap.end()) {
                // Step 3: If found, return the indices
                return {prevMap[diff], i};
            }

            // Step 4: Otherwise, add the current number to the map
            prevMap[nums[i]] = i;
        }

        return {}; // Default return if no solution is found
    }
};

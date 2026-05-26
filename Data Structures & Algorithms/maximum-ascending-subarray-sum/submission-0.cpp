class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            // ascending continues
            if(nums[i] > nums[i - 1]) {
                currSum += nums[i];
            }
            else {
                // start new subarray
                currSum = nums[i];
            }

            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    
    }
};
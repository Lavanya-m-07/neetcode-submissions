class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int maxSum=0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==1)
            {
                current = current+1;
                maxSum=max(maxSum,current);
            }
            else
              current = 0;
        }

        return maxSum;
    }
};
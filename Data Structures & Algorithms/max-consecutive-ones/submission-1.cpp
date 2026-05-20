class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0 , max_count = 0;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                current = current+1;
                max_count = max(current, max_count);
            }
            else
             current = 0;
        }

        return max_count;
    }
};
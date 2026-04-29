class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0, max_count = 0;
        for ( int num : nums)
        {
            if( num == 1)
            {
                current = current +1 ;
                max_count = max(max_count, current );

            }
            else 
             current = 0;
        }

        return max_count;
    }
};
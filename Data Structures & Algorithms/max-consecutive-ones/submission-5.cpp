class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int maxCount= 0;
        int n= nums.size();

        if(n==0) return 0;
        
    

        for(int i = 0; i < n; i++)
        {

            if(nums[i]==1)
            {
                current++;
                maxCount=max(maxCount,current);
            }
              
            else{
              
                 current = 0;
            }
              
        }

        return maxCount;
    }
};
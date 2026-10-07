class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int result = 0;
        vector<int> num;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (nums[i] != val)
            {
                nums[result] = nums[i];
                result++;
            }
        }

        return result;
        
    }
};
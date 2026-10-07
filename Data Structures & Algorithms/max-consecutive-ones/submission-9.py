class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maximum = 0
        consec = 0
        for i in range(len(nums)):
            if(nums[i]==1):
                consec = consec+1
                maximum = max(maximum,consec)
            else:
                consec = 0
        return maximum

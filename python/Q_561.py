class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort();
        result=0
        for i in range(0,len(nums)-1,2):
            print("ak")
            result = result + nums[i];
        return result
            
            

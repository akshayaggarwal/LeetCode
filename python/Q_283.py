class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        j=0
        i=0
        while i<len(nums):
            if nums[i]!=0:
                nums[j]=nums[i]
                j=j+1
            i=i+1
        while j<len(nums):
            nums[j]=0
            j=j+1

class Solution:
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        i=0
        ret=[]
        while i<len(nums1):
            j=0
            while nums2[j]!=nums1[i]:
                j=j+1
            while j<len(nums2) and nums2[j]<=nums1[i]:
                j=j+1
            if j==len(nums2):
                ret.append(-1)
            else:
                ret.append(nums2[j])
            i=i+1
        return ret

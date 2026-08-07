class Solution(object):
    def findGCD(self, nums):
        a=0
        for i in range (0,max(nums)+1):
            if (min(nums)%(i+1)==0 and max(nums)%(i+1)==0):
                a=i+1
        return a
        """
        :type nums: List[int]
        :rtype: int
        """
        
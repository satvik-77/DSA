class Solution(object):
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = max(nums)
        count = 0
        for i in range(len(nums)):
            m = n-nums[i]
            count += m
        return count
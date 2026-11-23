class Solution(object):
    def minMoves2(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = []
        nums.sort()
        y = len(nums)
        median = nums[y/2]
        for i in range(len(nums)):
            n = abs(nums[i] - median)
            l.append(n)
        return sum(l)

         
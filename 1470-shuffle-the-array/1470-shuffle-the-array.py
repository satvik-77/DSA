class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        l = []
        j = n
        for i in range(0,n):
            l.append(nums[i])
            l.append(nums[j])
            j += 1
        return l
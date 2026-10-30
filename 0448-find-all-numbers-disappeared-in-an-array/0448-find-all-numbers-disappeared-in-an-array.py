class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = []
        r = []
        for i in range(1, len(nums)+1):
            l.append(i)
        y = l + nums
        f = {}
        for i in y:
            f[i] = f.get(i, 0) + 1
        for k, v in f.items():
            if v == 1:
                r.append(k)
        return r
                

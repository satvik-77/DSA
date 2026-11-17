class Solution(object):
    def numberOfPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        f = {}
        pairs = 0
        left = 0 
        for i in nums:
            if i in f:
                f[i] += 1
            else:
                f[i] = 1
        for k,v in f.items():
            pairs += f[k]//2
            left += f[k]%2
            # if f[k] % 2 == 0:
            #     n = f[k]//2
            #     pairs += n
            # else:
            #     g = f[k]%2
            #     left += g
        
        l = []
        l.append(pairs)
        l.append(left)
        return l
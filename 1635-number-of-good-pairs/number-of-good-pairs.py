import numpy as np

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        
        x = 0
        num = np.array(nums)
        unique_nums, counts = np.unique(num, return_counts=True)
        
        for count in counts:
            if count > 1:
                x += count * (count - 1)
        
        return x // 2
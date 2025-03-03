class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr = max_sum = nums[0]
        for i in range(1,len(nums)):
            curr = max(nums[i],nums[i]+curr)
            max_sum = max(curr,max_sum)
        return max_sum
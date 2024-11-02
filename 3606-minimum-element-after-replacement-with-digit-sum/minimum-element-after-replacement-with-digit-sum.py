class Solution:
    def minElement(self, nums: List[int]) -> int:
        ls = []
        for i in nums:
            sum = 0
            for j in str(i):
                sum += int(j)
            ls.append(sum)
        return min(ls)
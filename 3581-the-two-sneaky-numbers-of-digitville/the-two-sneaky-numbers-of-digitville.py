class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        freq = {num: nums.count(num) for num in set(nums)}
        return [key for key, value in freq.items() if value == 2]
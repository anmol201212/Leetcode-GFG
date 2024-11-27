class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 1:
            return 1  # Base case
        # Initialize the first two values
        first, second = 1, 1
        for _ in range(2, n + 1):
            first, second = second, first + second
        return second
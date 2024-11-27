class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        if n == 1 and digits[0] == 9:
            return [1,0]
        
        if 9*n == sum(digits):
            return [1] + [0]*n
        for i in range(n):
            if digits[(n-i-1)] < 9:
                digits[(n-i-1)] = digits[(n-i-1)] + 1
                break
            # print(digits[(n-i-1)])
            if digits[(n-i-1)] == 9:
                digits[(n-i-1)] = 0

            

        return digits

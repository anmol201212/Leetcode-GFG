class Solution:
    def reverse(self, x: int) -> int:
        try:
            is_neg = x < 0
            x = abs(x)
            t = int(str(x)[::-1])
            if is_neg:
                t = -t
            
            if -2**31 <= t <= 2**31 - 1:
                return t
            else:
                return 0 
        except:
            return 0
# The rand7() API is already defined for you.
# def rand7():
# @return a random integer in the range 1 to 7

class Solution:
    def rand10(self):
        while True:
            a = rand7()
            b = rand7()
            c = (a-1)*7 + b
            if c<=40:
                return 1+(c-1)%10
            
        
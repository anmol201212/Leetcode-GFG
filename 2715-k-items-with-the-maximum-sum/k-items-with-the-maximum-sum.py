class Solution:
    def kItemsWithMaximumSum(self, numOnes: int, numZeros: int, numNegOnes: int, k: int) -> int:
        output=[]
        if numOnes:
            for i in range(numOnes):
                output.append(1)
        if numZeros:
            for i in range(numZeros):
                output.append(0)
        if numNegOnes:
            for i in range(numNegOnes):
                output.append(-1)
        output.sort(reverse=True)
        print(output)
        return sum(output[:k])
        
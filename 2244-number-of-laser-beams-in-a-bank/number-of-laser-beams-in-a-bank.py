class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        if len(bank)==1:
            return 0
        temp = []
        for i in range(len(bank)):
            x = bank[i]
            x = str(x)
            y = x.count('1')
            if y != 0:
                temp.append(y)
        # if temp.find('0'):
        #     temp.remove(0)

        if len(temp)==0:
            return 0
        mul = 0
        for i in range(1,len(temp)):
            mul1 = temp[i-1] * temp[i]
            mul = mul1 + mul
            
        return mul
            
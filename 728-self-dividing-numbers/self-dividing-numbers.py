class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        ans = []
        for i in range(left,right+1):
            temp = [int(j) for j in str(i)]
            count = 0
            for k in range(0,len(temp)):
                if temp[k] == 0:
                    continue
                if (i % temp[k] == 0):
                    count = count+1
            if count == len(temp):
                ans.append(temp)
        converted_list = [int(''.join(map(str, sublist))) for sublist in ans]



        return converted_list


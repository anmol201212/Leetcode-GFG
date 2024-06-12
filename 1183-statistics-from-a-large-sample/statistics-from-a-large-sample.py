import numpy as np
class Solution:
    def sampleStats(self, count: List[int]) -> List[float]:
        ans = []
        count1 = np.array(count)
        temp = count1[np.nonzero(count1)]

        #min
        ans.append(min(np.flatnonzero(count1)))

        # max
        ans.append(max(np.flatnonzero(count1)))

        # Mean
        sum1 = 0 
        for i in range(0,256):
            sum1 = sum1 + i*count[i]
        count1 = np.array(count)
        temp = count1[np.nonzero(count1)]
        mean = sum1/np.sum(temp)
        ans.append(mean)

        # Median
        sum1 = (np.sum(count))//2
        index = 0
        cumulative_count = np.cumsum(count)
        if (np.sum(temp))%2 != 0:
            median = next(i for i in range(256) if cumulative_count[i] > sum1)
            
            ans.append(median)    
        else:
            first = next(i for i in range(256) if cumulative_count[i] > sum1 - 1)
            second = next(i for i in range(256) if cumulative_count[i] > sum1)
            median = (first + second) / 2
            ans.append(median)

        # Mode
        ans.append(np.argmax(count))

        return ans




        
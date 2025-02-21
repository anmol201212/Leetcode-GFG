class Solution:
    def stoneGameVI(self, aliceValues: List[int], bobValues: List[int]) -> int:
        t = list(zip(aliceValues,bobValues))
        t = sorted(t, key = lambda x: sum(x),reverse=True)
        # print(t)
        al = sum([i[0] for i in t[::2]])
        # print(al)
        bb = sum([i[1] for i in t[1::2]])
        # print(bb)
        if al>bb:
            return 1
        elif al<bb:
            return -1
        return 0
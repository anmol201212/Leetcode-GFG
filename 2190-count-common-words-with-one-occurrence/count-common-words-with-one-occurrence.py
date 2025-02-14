class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        count = 0
        a = Counter(words1)
        b = Counter(words2)
        for i in words1:
            if a[i]==b[i]==1:
                count += 1
        return count
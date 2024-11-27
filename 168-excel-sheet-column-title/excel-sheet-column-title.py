class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        result = []
        while columnNumber > 0:
            columnNumber, remainder = divmod(columnNumber - 1, 26)
            print(remainder)
            result.append(chr(65 + remainder))  # 65 is ASCII for 'A'
        return ''.join(reversed(result))
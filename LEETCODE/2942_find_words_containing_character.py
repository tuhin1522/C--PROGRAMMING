class Solution(object):
    def findWordsContaining(self, words, x):
        """
        :type words: List[str]
        :type x: str
        :rtype: List[int]
        """
        ans = []
        a = len(words)
        for i in range(a):
            if x in words[i]:
                ans.append(i)
        return ans

sol = Solution()
x = "a"
words = ["abc","bcd","aaaa","cbc"]
n = sol.findWordsContaining(words, x)
a = len(n)
for i in range(a):
    print(n[i], end=" ")
print("\n")
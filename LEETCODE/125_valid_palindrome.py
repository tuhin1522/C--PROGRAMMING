class Solution(object):
    def f(self, s):
        lt = []
        for char in s:
            if char.isalnum():
                lt.append(char.lower())
        r = ''.join(lt)
        rv = r[::-1]
        return r == rv

sl = Solution()
s = " "
x = sl.f(s)
print(x)

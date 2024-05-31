class Solution(object):
    def shuffle(self, nums, n):
        """
        :type n: int
        :rtype: int
        """
        ans = []
        for i in range(n):
            ans.append(nums[i])
            ans.append(nums[i+n])
        return ans

sol = Solution()
n = 4
nums = [1,2,3,4,4,3,2,1]
x = sol.shuffle(nums, n)
a = len(x)
for i in range(2*n):
    print(x[i], end=" ")
print("\n")
class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        ans = []
        for i in range(len(nums)):
            a = nums[i]**2
            ans.append(a)
        ans.sort()
        return ans


s = Solution()
nums = [-4,-1,0,3,10]
x = s.sortedSquares(nums)
print(x)

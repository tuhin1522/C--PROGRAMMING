class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = float('-inf')  
        size = len(nums)
        sum = 0
        for i in range(0, size):
            sum = sum + nums[i]
            if ans < sum:
                ans = sum
            if sum < 0:
                sum = 0
        return ans
sol = Solution()
# Driver function to check the above function
a = [-2,1,-3,4,-1,2,1,-5,4]
ans = sol.maxSubArray(a)
print("Maximum contiguous sum is", ans)

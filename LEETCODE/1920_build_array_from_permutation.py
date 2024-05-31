class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        n = len(nums)
        for i in range(n):
            ans.append(nums[nums[i]])
        return ans

x = Solution()
r = [5,0,1,2,3,4]
a = x.buildArray(r)
print(a)
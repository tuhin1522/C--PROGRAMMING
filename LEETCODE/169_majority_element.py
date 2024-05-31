class Solution(object):
    def majorityElement(self, nums):
        l = {}
        for i in range(len(nums)):
            l[nums[i]] = l.get(nums[i], 0) + 1
        a = max(l, key=l.get)
        return a


s = Solution()
nums = [2,2,1,1,1,2,2]
x = s.majorityElement(nums)
print(x)
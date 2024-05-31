class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        ans = nums[-k:] + nums[:-k]
        nums[:] = ans
        return nums

s = Solution()
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
x = s.rotate(nums, k)
print(x)

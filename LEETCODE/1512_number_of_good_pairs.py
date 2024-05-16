class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt=0
        n = len(nums)
        for i in range(n):
            for j in range(i+1,n):
                if nums[i]==nums[j]:
                    cnt = cnt + 1
        return cnt
        
sol = Solution()
nums = [1,2,3,1,1,3]
x = sol.numIdenticalPairs(nums)
print(x)
class Solution(object):
    def check(self, nums):
        ax = sorted(nums)
        if ax == nums:
            return True 
        minValue = float('inf')
        for i in range(0, len(nums)):
            if nums[i] < minValue:
                minValue = nums[i]
                index = i
        start = 0
        end = index + 1
        cnt=1
        for i in range(0,index-1):
            if nums[i] < nums[i+1]:
                cnt += 1

        cnt1 = 1
        for i in range(index+1, len(nums)-1):
            if nums[i] < nums[i+1]:
                cnt1 += 1
        if cnt == index and cnt1 == len(nums)-index-1:
            while start < index and end < len(nums):
                if nums[start] < nums[end]:
                    return False
                start += 1
                end += 1
            return True
        return False
        

cl = Solution()
nums = nums = [1,2, 3]
ans = cl.check(nums)
print(ans)
class Solution(object):
    def shuffle(self, nums, n):
        x = []
        y = []
        for i in range(len(nums)):
            print(i)
            if i < n:
                x.append(nums[i])
            else:
                y.append(nums[i])
        new_list = []
        for j in range(n):
            new_list.append(x[j])
            new_list.append(y[j])
        return new_list


sol = Solution()
n = 4
nums = [1,2,3,4,4,3,2,1]
x = sol.shuffle(nums, n)
a = len(x)
for i in range(2*n):
    print(x[i], end=" ")
print("\n")
class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        cnt=0
        for i in hours:
            if target <= i:
                cnt = cnt + 1
        return cnt
sol = Solution()
hours = [5,1,4,2,2]
x = sol.numberOfEmployeesWhoMetTarget(hours,6)
print(x)
class Solution(object):
    def finalValueAfterOperations(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        n = len(operations)
        ans=0
        for i in range(n):
            if operations[i]=="++X" or operations[i]=="X++" :
                ans += 1
            elif operations[i]=="--X" or operations[i]=="X--" :
                ans -= 1
        return ans


x = Solution()
r = ["++X","++X","X++"]
a = x.finalValueAfterOperations(r)
print(a)
class Solution:
    def factorialNumbers(self, N):
    	#code here 
        fac = 1
        x = 2 
        ans = [] 
        while fac <= N: 
            ans.append(fac)
            fac *= x 
            x += 1 
        return ans
        
if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.factorialNumbers(N)
        for i in ans:
            print(i, end=" ")
        print()
        
# } Driver Code Ends
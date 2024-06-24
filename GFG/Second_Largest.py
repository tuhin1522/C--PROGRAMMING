#User function Template for python3
class Solution:
	def print2largest(self,arr, n):
		# code here
        if n < 2: return -1
        first = second = float('-inf')
        for i in range(n):
            if arr[i] > first:
                second = first
                first = arr[i]
            elif arr[i] > second and arr[i] != first:
                second = arr[i]
        return second

    def secondSmallest(arr, n):
        if (n < 2):
            return -1
        small = float('inf')
        second_small = float('inf')
        for i in range(n):
            if (arr[i] < small):
                second_small = small
                small = arr[i]
            elif (arr[i] < second_small and arr[i] != small):
                second_small = arr[i]
        return second_small


if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.print2largest(arr, n)
        print(ans)
        tc -= 1

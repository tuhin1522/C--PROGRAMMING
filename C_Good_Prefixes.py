import sys
input = sys.stdin.readline
gi = lambda: list(map(int, input().split()))
gs = lambda: list(input().split())

t = int(input())
for _ in range(t):
    n = int(input().strip()) 
    a = gi()
    prefixMax = -1
    prefixSum = 0
    ans = 0
    for i in range(n):
        prefixMax = max(prefixMax, a[i])
        prefixSum += a[i]
        if prefixSum - prefixMax == prefixMax:
            ans += 1
    print(ans)
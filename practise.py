# import sys
# input = sys.stdin.readline
# gi = lambda: list(map(int, input().split()))
# gs = lambda: list(input().split())

# def solve():
#     n = int(input().strip()) 
#     a = gi()
#     if n==1:
#         print(1,a[0],0)
#         return
#     alice = bob = f = level = al= bb = 0
#     i=0
#     j = n-1
#     while i<=j:
#         if f==0:
#             level += 1
#             al += a[i]
#             while al<= bb and i<j:
#                 i += 1
#                 al += a[i]
#             alice += al
#             bb = 0
#             i += 1
#             f=1
#         elif f==1:
#             level += 1
#             bb += a[j]
#             while al>= bb and i<j:
#                 j -= 1
#                 bb += a[j]
#             bob += bb
#             al = 0
#             j -= 1
#             f = 0
#     print(level, alice, bob)


# t = int(input().strip()) 
# for _ in range(t):
#     solve()

for s in[*open(0)][2::2]:
    a=[*map(int,s.split())];i=1;c=0;m=[-1,0];r=[0,0]
    print(a)
    while a:
        if m[i]>m[i^1]:
            r[i]+=m[i]
            print(r)
            i^=1;m[i]=0;c+=1
        m[i]+=a.pop(-i)
    r[i]+=m[i];print(c,*r)
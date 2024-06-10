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

# for s in[*open(0)][2::2]:
#     a=[*map(int,s.split())];i=1;c=0;m=[-1,0];r=[0,0]
#     print(a)
#     while a:
#         if m[i]>m[i^1]:
#             r[i]+=m[i]
#             print(r)
#             i^=1;m[i]=0;c+=1
#         m[i]+=a.pop(-i)
#     r[i]+=m[i];print(c,*r)

# def f(i,sum):
#     if i<1:
#         print(sum)
#         return
#     f(i-1, sum+i)

# n = int(input().strip())
# sum = 0
# f(n,sum)

# def NonDecending(a):
#     l = len(a)
#     ans = []
#     ans.append(a[0])
#     for i in range(1,l):
#         ans.append(a[i]+1000*i)
#     return ans

# a = [1095, 1094, 1095]
# ans = NonDecending(a)
# print(ans)

# def Reversed(l, r, a):
#     if l>=r/2:
#         return a
#     a[l],a[r-l-1] = a[r-l-1], a[l]
#     return Reversed(l+1,r, a)

# a = [1,2,3,4,5]
# n = len(a)
# ans = Reversed(0, n, a)
# print(ans)

# def element_frequency(lst):
#     frequency = {}
#     for elem in lst:
#         if elem in frequency:
#             frequency[elem] += 1
#         else:
#             frequency[elem] = 1
#     return frequency

# # Example usage
# lst = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
# print(element_frequency(lst))

test_list = [12, 67, 98, 34]

print("The original list : "+ str(test_list))
res = list(map(lambda ele: sum(int(sub) for sub in str(ele)), test_list))
# for ele in test_list:
#     sum = 0
#     for digit in str(ele):
#         sum += int(digit)
#     res.append(sum)

print("The original list : "+ str(res))



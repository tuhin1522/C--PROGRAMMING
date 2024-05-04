t = int(input())
for k in range(t):
    a,b,c = map(int, input().split())
    if a==b and a!=c:
        print(c)
    elif a==c and a !=b:
        print(b)
    elif b==c and a != b:
        print(a)
t = int(input())
for _ in range(t):
    a, b = input().split()
    al = list(a)
    bl = list(b)
    al[0], bl[0] = bl[0], al[0]
    a = ''.join(al)
    b = ''.join(bl)
    print(a, b)

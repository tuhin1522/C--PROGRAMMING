def solve():
    n = int(input().strip())
    colors = input().strip()
    b = r = 0
    f = False
    for c in colors:
        if c == 'B': 
            b += 1
        elif c == 'R': 
            r += 1
        elif c == 'W': 
            if (b == 0 and r != 0) or (b != 0 and r == 0):
                f = True
            b = 0
            r = 0
    if (b == 0 and r != 0) or (b != 0 and r == 0):
        f = True
    if f: 
        print("NO")
    else: 
        print("YES")

t = int(input().strip()) 
for _ in range(t):
    solve()

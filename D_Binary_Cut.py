t = int(input())

for _ in range(t):
    s = input()
    cnt = 1
    f = False
    
    for i in range(len(s) - 1):
        if s[i] == '0' and s[i + 1] == '1' and not f:
            f = True
        elif s[i] == '0' and s[i + 1] == '0':
            continue
        elif s[i] == '1' and s[i + 1] == '1':
            continue
        else:
            cnt += 1
            
    print(cnt)

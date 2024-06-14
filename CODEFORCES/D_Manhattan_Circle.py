t = int(input())
for _ in range(t):
    n, m = map(int, input().strip().split())
    a = []
    for _ in range(n):
        s = input()
        a.append(s)
    y=0
    w = []
    for row in a:
        cnt = row.count('#')
        w.append(cnt)
    if w:
        max_cnt = max(w)
        max_index = w.index(max_cnt)
    ans = a[max_index]
    for i in range(len(ans)):
        if ans[i]=='.':
            y += 1
        if(ans[i]=='#'):
            break
    
    if(max_cnt==1):
        print(max_index+1,y+1)
    else:
        print(max_index+1,y+max_cnt//2+1)


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    mp = {}
    for num in a:
        if num in mp:
            mp[num] += 1
        else:
            mp[num] = 1
            
    cnt = 0
    for key, value in mp.items():
        if value >= 3:
            print(key)
            return
        else:
            cnt += 1
    
    if cnt == len(mp):
        print("-1")

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()

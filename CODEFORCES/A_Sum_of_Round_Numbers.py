def round_numbers(n):
    arr = []
    post = 1
    while n > 0:
        digit = n % 10
        if digit > 0:
            arr.append(digit * post)
        n //= 10
        post *= 10
    return arr

t = int(input())
for _ in range(t):
    n = int(input())
    ans = round_numbers(n)
    print(len(ans))
    print(*ans)

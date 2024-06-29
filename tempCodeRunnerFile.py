t = int(input())
for _ in range(t):
  s = input()
  cnt=0
  f = False
  for i in range(len(s)):
    if s[i]=='0' and s[i+1]=='1' and f==False:
      f=True
      continue
    elif s[i]=='0' and s[i+1]=='0':
      continue
    elif s[i]=='1' and s[i+1]=='1':
      continue
    else:
      cnt += 1
  if cnt ==0:
    print(1)
  else:
    print(cnt)
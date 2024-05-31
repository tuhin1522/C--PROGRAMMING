# import sys
# input = sys.stdin.readline
# gi = lambda: list(map(int, input().split()))
# gs = lambda: list(input().split())

# t = int(input().strip()) 
# for _ in range(t):
#     n = int(input().strip()) 
#     a = gi()  

# def encrypt(text, s):
#     result = ""
#     for char in text:
#         if char.isupper():
#             result += chr((ord(char) + s - 65) % 26 + 65)
#         else:
#             result += chr((ord(char) + s - 97) % 26 + 97)
#     return result

# print(encrypt("jung qbrf gur sbk fnl", 13))

from collections import deque

deque = deque()

deque.append("Jerry")
deque.append("Matthew")
deque.append("Ryan")

print(deque[-1])
deque.pop()
print(deque)
import sys

n = int(sys.stdin.readline())
l = 1
while n > l:
    n -= l
    l += 1
if l % 2 == 0:
    a = n
    b = l - n + 1
elif l % 2 == 1:
    a = l - n + 1
    b = n

print(f'{a}/{b}')

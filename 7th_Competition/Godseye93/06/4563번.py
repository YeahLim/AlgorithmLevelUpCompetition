import sys

input = sys.stdin.readline

a = int(input())
while a != 0:
    cnt = 0
    for k in range(1, a):
        if (a*a) % k == 0 and ((a*a)//k - k) % 2 == 0:
            b = ((a*a)//k - k)//2
            if b <= a:
                break
            cnt += 1
    print(cnt)
    a = int(input())
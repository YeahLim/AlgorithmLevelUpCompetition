import sys

input = sys.stdin.readline

n = int(input())
lst = list(map(int,input().split()))
lst.sort()

cnt = 0

while sum(lst) != 0:
    check = 0
    for i in range(n):
        if lst[i] % 2 != 0 or lst[i] == 0 or lst[i] == 1:
            if lst[i] == 0:
                continue
            else:
                lst[i] -= 1
                cnt += 1
            check = 1
    if check == 0:
        for i in range(n):
            lst[i] //= 2
        cnt +=1

print(cnt)

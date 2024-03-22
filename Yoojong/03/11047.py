import sys
n, m = map(int, sys.stdin.readline().split())

coins = list()
for _ in range(n):
    coins.append(int(sys.stdin.readline()))

coins.reverse()
ans = 0
count =0

i = 0
while True:

    if coins[i] > m:
        i +=1
        continue
    #일단 추가
    ans += coins[i]
    count +=1

    if ans == m:
        break
    if ans > m:
        ans -= coins[i]
        count -= 1
        i +=1
print(count)

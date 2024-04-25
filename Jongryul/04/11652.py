import sys
input = sys.stdin.readline

n = int(input())
dic = {}
for _ in range(n):
    num = int(input())
    if dic.get(num):
        dic[num] += 1
    else:
        dic[num] = 1

rlt = []

for i in dic:
    rlt.append((dic[i], i*-1))
rlt.sort(reverse=True)

print(rlt[0][1] * -1)
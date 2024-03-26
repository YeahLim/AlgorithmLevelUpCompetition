import sys
input = sys.stdin.readline

n = int(input())
dic = {}
mx = 0
for _ in range(n):
    book = input().rstrip()
    if not dic.get(book):
        dic[book] = 1
    else:
        dic[book] += 1
    if dic[book] > mx:
        mx = dic[book]
rlt = []

for b in dic:
    if dic[b] == mx:
        rlt.append(b)
print(sorted(rlt)[0])
import sys

input = sys.stdin.readline

n = int(input())

lst = []
num = [i for i in range(1, n+1)]

while len(num) !=1:
    lst.append(num.pop(0))
    num.append(num.pop(0))

for i in lst:
    print(i, end=' ')

print(num[0])
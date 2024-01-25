import sys
input = sys.stdin.readline

n = int(input())
arr1 = sorted(list(map(int, input().split())))
arr2 = sorted(list(map(int, input().split())), reverse=True)

rlt = 0
for i in range(n):
	rlt += arr1[i] * arr2[i]

print(rlt)

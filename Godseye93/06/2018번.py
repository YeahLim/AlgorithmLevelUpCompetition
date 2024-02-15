import sys
input = sys.stdin.readline

n = int(input())

end = 0
cnt = 0
numSum = 0

for start in range(1, n+1):
    while numSum < n and end < n+1:
        end += 1
        numSum += end

    if numSum == n:
        cnt += 1

    numSum -= start
print(cnt)
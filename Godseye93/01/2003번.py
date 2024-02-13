import sys
input = sys.stdin.readline

n, m = map(int,input().split())
arr = list(map(int,input().split()))

cnt = 0
numSum = 0
end = 0

# i 를 증가시키면서 반복
for i in range(n):
    # end 만큼 이동
    while numSum < m and end < n:
        numSum += arr[end]
        end +=1
    # 부분합이 m일 때 카운터 증가
    if numSum == m:
        cnt += 1
    numSum -= arr[i]

print(cnt)
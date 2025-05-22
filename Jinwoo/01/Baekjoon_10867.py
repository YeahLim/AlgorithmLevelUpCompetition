import sys
input = sys.stdin.readline

n = int(input())
numbers = list(map(int, input().split()))

# -1000부터 1000까지 총 2001개의 인덱스를 갖는 배열 사용
exist = [False] * 2001

# 중복 없이 존재 여부만 체크
for num in numbers:
    exist[num + 1000] = True


for i in range(2001):
    if exist[i]:
        print(i - 1000, end=' ')

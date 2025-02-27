import sys
import math

N = sys.stdin.readline().strip()

# 0~9까지 숫자 등장 횟수 저장 리스트
count = [0] * 10

# 숫자 개수 세기
for i in range(len(N)):
    num = int(N[i])

    # 6과 9는 서로 공유 가능
    if num == 6 or num == 9:
        if count[6] <= count[9]:
            count[6] += 1
        else:
            count[9] += 1
    else:
        count[num] += 1

# 가장 많이 필요한 숫자의 개수 출력
print(max(count))
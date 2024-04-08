import sys

Paper = int(input())                                                        # 색종이 갯수
area = [[0 for i in range(100)] for j in range(100)]                        # 가로 세로 100의 도화지를 2차원 배열로 구현

#print(area)
resault = 0                                                                 # 겹치는 부분이 중복되지 않는 색종이 총 합 넓이

for i in range(Paper):                                                      # 색종이 수만큼 반복하여 색종이의 x, y 시작 좌표값을 입력받는다.
    x, y = map(int, sys.stdin.readline().split())

    for j in range(10):                                                     # 2차원 배열에 색종이 영역만큼 1 집어넣기
        for k in range(10):
            if area[y+j][x+k] == 0:                                         # 이미 칠해진 영역이 아니라면 = 배열의 인덱스 값이 0이라면
                area[y+j][x+k] += 1                                         # 1을 추가한다
                resault += 1                                                # 칠한 카운트 값 = 중복되지 않은 색종이 넓이 값
    # 시간 복잡도 O(1) = 10+10+10+10
# 시간 복잡도 O(N)
print(resault)
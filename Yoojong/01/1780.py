'''
문제
N×N크기의 행렬로 표현되는 종이가 있다. 종이의 각 칸에는 -1, 0, 1 중 하나가 저장되어 있다.
우리는 이 행렬을 다음과 같은 규칙에 따라 적절한 크기로 자르려고 한다.
만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
(1)이 아닌 경우에는 종이를 같은 크기의 종이 9개로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.

입력
첫째 줄에 N(1 ≤ N ≤ 37, N은 3k 꼴)이 주어진다.
다음 N개의 줄에는 N개의 정수로 행렬이 주어진다.

출력
첫째 줄에 -1로만 채워진 종이의 개수를, 둘째 줄에 0으로만 채워진 종이의 개수를, 셋째 줄에 1로만 채워진 종이의 개수를 출력한다.
'''

import sys

def count_picture(matrix, count):
    size = len(matrix)
    flag = 0
    first = matrix[0][0]
    for i in range(size):
        for j in range(size):
            if matrix[i][j] != first:
                flag = 1
                break
    if flag == 1:
        new_size = size // 3
        for i in range(3):
            row_start = i*new_size
            row_end = row_start + new_size
            for j in range(3):
                column_start = j*new_size
                column_end = column_start + new_size
                new_matrix = [row[column_start:column_end] for row in matrix[row_start:row_end]]
                count_picture(new_matrix, count)
    else:
        count[matrix[0][0]] += 1
        return

n = int(sys.stdin.readline().rstrip())
matrix = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
count = [0, 0, 0]

count_picture(matrix, count)
print(count[-1])
print(count[0])
print(count[1])
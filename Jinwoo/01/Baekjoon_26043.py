from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
queue = deque()

A = []  # 좋아하는 메뉴 먹은 학생
B = []  # 싫어하는 메뉴 먹은 학생
C = []  # 식사 못한 학생

for _ in range(n):
    data = input().split()
    if data[0] == '1':
        # 유형 1: 학생 번호와 좋아하는 메뉴 번호
        student_id, fav_menu = int(data[1]), int(data[2])
        queue.append((student_id, fav_menu))
    else:
        # 유형 2: 식사 준비된 메뉴
        food_menu = int(data[1])
        if queue:
            student_id, fav_menu = queue.popleft()
            if fav_menu == food_menu:
                A.append(student_id)
            else:
                B.append(student_id)

# 줄에 남아 있는 학생은 식사 못한 학생
while queue:
    student_id, _ = queue.popleft()
    C.append(student_id)

for lst in [sorted(A), sorted(B), sorted(C)]:
    print(*lst if lst else ['None'])

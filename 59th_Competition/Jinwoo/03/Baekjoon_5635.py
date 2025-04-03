import sys
input = sys.stdin.readline

n = int(input())
students = []

for _ in range(n):
    info = input().split()
    name = info[0]
    day = int(info[1])
    month = int(info[2])
    year = int(info[3])
    students.append((year, month, day, name))

# 생일 기준으로 정렬 (가장 오래된 생일이 먼저)
students.sort()

# 나이가 가장 적은 사람: 생일이 가장 최근
print(students[-1][3])

# 나이가 가장 많은 사람: 생일이 가장 오래됨
print(students[0][3])
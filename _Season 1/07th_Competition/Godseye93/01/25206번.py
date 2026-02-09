import sys

input = sys.stdin.readline

point = 0
credit_sum = 0
obj_point = 0

for i in range(20):
    obj, n, m = input().split()
    if m == 'A+':
        obj_point = 4.5
    elif m == 'A0':
        obj_point = 4.0
    elif m == 'B+':
        obj_point = 3.5
    elif m == 'B0':
        obj_point = 3.0
    elif m == 'C+':
        obj_point = 2.5
    elif m == 'C0':
        obj_point = 2.0
    elif m == 'D+':
        obj_point = 1.5
    elif m == 'D0':
        obj_point = 1.0
    elif m == 'F':
        obj_point = 0
    elif m == 'P':
        continue
    point += float(n) * obj_point
    credit_sum += float(n)

print(point/credit_sum)
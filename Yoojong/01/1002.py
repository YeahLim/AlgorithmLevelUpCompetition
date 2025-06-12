import math


def turret():
    t = int(input())
    for _ in range(t):
        x1, y1, r1, x2, y2, r2 = map(int, input().split())

        distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

        if distance == 0 and r1 == r2:
            print(-1)
        elif abs(r1 - r2) == distance or r1 + r2 == distance:
            print(1)
        elif distance > r1 + r2 or distance < abs(r1 - r2):
            print(0)
        else:
            print(2)
turret()
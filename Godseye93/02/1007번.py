import sys
import math

input = sys.stdin.readline


def vector_length(x, y):
    return math.sqrt(x ** 2 + y ** 2)


def min_vector_sum(points, n, selected, idx, start_count, link_count):
    if idx == n:
        if start_count == n // 2:
            start_x_sum, start_y_sum = 0, 0
            link_x_sum, link_y_sum = 0, 0
            for i in range(n):
                if selected[i]:
                    start_x_sum += points[i][0]
                    start_y_sum += points[i][1]
                else:
                    link_x_sum += points[i][0]
                    link_y_sum += points[i][1]
            return vector_length(start_x_sum - link_x_sum, start_y_sum - link_y_sum)
        else:
            return float('inf')

    min_diff = float('inf')
    if start_count < n // 2:
        selected[idx] = True
        min_diff = min(min_diff, min_vector_sum(points, n, selected, idx + 1, start_count + 1, link_count))
    if link_count < n // 2:
        selected[idx] = False
        min_diff = min(min_diff, min_vector_sum(points, n, selected, idx + 1, start_count, link_count + 1))

    return min_diff


t = int(input())
for _ in range(t):
    n = int(input())
    points = [tuple(map(int, input().split())) for _ in range(n)]
    selected = [False] * n
    print(min_vector_sum(points, n, selected, 0, 0, 0))

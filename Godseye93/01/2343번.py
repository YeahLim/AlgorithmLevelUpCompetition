import sys

input = sys.stdin.readline

N, M = map(int, input().split())
lessons = list(map(int, input().split()))

left = max(lessons)
right = sum(lessons)
answer = right

def can_divide(size):
    count = 1
    current = 0
    for lesson in lessons:
        if current + lesson > size:
            count += 1
            current = lesson
            if count > M:
                return False
        else:
            current += lesson
    return True

while left <= right:
    mid = (left + right) // 2
    if can_divide(mid):
        answer = mid
        right = mid - 1
    else:
        left = mid + 1

print(answer)
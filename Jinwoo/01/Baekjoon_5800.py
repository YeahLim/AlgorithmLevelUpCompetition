import sys

input = sys.stdin.readline

K = int(input().strip())

for class_num in range(1, K + 1):
    data = list(map(int, input().split()))
    scores = data[1:]  # 첫 값은 학생 수이므로 제외

    scores.sort(reverse=True)

    max_score = scores[0]
    min_score = scores[-1]

    largest_gap = 0
    for i in range(len(scores) - 1):
        gap = scores[i] - scores[i + 1]
        largest_gap = max(largest_gap, gap)

    print(f"Class {class_num}")
    print(f"Max {max_score}, Min {min_score}, Largest gap {largest_gap}")

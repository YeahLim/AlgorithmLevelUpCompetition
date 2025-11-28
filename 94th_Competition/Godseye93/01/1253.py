import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
arr.sort()

count = 0

for i in range(n):
    target = arr[i]
    left = 0
    right = n - 1

    while left < right:
        total = arr[left] + arr[right]

        if total == target:
            if left != i and right != i:
                count += 1
                break
            elif left == i:
                left += 1
            elif right == i:
                right -= 1
        elif total < target:
            left += 1
        else:
            right -= 1

print(count)
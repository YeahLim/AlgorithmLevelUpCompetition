import sys
from bisect import bisect_left

def binary_search(arr, target):
    idx = bisect_left(arr, target)
    if idx < len(arr) and arr[idx] == target:
        return 1
    return 0

T = int(sys.stdin.readline())

for _ in range(T):
    N = int(sys.stdin.readline())
    A = sorted(map(int, sys.stdin.readline().split()))

    M = int(sys.stdin.readline())
    B = list(map(int, sys.stdin.readline().split()))

    for num in B:
        print(binary_search(A, num))
import sys
input = sys.stdin.readline

n = int(input())
arr = sorted(list(map(int, input().split())))
m = int(input())
lst = list(map(int, input().split()))

def bi(num):
    start, mid, end = 0, n//2, n

    while start < end:
        if arr[mid] == num:
            return 1
        if num <= arr[mid]:
            end = mid 
            mid = (start + end) // 2
        else:
            start = mid + 1
            mid = (start + end) // 2
    return 0

for i in lst:
    print(bi(i), end=' ')
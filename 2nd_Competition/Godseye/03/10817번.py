import sys

input = sys.stdin.readline

arr = list(map(int, input().split()))

for i in range(2, 0 , -1):
    for j in range(i):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]

print(arr[1])


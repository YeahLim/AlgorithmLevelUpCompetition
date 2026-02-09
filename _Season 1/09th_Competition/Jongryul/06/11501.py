import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t): 
    n = int(input())
    arr = list(map(int, input().split()))
    ben = 0
    mx = arr[-1]
    for i in range(n-1, -1, -1):
        if mx < arr[i]:
            mx = arr[i]
        else:
            ben += mx - arr[i]
    
    print(ben)
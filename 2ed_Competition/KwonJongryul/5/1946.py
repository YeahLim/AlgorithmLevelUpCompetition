import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    arr = sorted([tuple(map(int, input().split())) for _ in range(n)])
    
    rlt = 1
    top = arr[0][1]

    for i in arr:
        if i[1] < top:
            rlt += 1
            top = i[1]
    print(rlt)
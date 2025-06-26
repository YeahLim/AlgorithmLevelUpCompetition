# [백준 - S5] 1004. 어린왕자

## ⏰  **time**
15분

## :pushpin: **Algorithm**
수학

## ⏲️**Time Complexity**
$O(n^2)$

## :round_pushpin: **Logic**
1. 두 점과 원의 중심사이의 거리를 활용!
```python
for _ in range(n):
    cnt = 0
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    N = int(sys.stdin.readline())
    for i in range(N):
        cx, cy, cr = map(int, sys.stdin.readline().split())
        dist1 = (x1 - cx) ** 2 + (y1 - cy) ** 2
        dist2 = (x2 - cx) ** 2 + (y2 - cy) ** 2
        if (dist1 < cr**2 and dist2 > cr**2) or ( dist1 > cr**2 and dist2 < cr**2):
            cnt += 1
```

## :black_nib: **Review**
- 

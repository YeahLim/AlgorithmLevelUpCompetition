# [백준 - 골드 5] 제곱수 찾기 (1025)
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
브루트 포스

## ⏲️**Time Complexity**

$O(n^3 * m^3)$

## :round_pushpin: **Logic**
- 브루트포스

```python
for i in range(n):
    for j in range(m):
        for row_d in range(-n,n):
            for col_d in range(-m,m):
                s = ""
                x , y = i , j
                if row_d == 0 and col_d == 0:
                    continue
                while 0 <= x < n and 0 <=y <m:
                    s += graph[x][y]
                    if sqr(s):
                        answer = max(answer, int(s))
                    x += row_d
                    y += col_d
```

## :black_nib: **Review**

# [백준 - 실3] 9095. 1,2,3 더하기
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식: db[i] = db[i-1] + db[i-2] + db[i-3], i>=4
```python
    for i in range(1, n+1):
        if i ==1:
            db[i] = 1
        elif i == 2:
            db[i] = 2
        elif i == 3:
            db[i] = 4
        else:
            db[i] = db[i-1] + db[i-2] + db[i-3]
```

## :black_nib: **Review**
- 점화식을 찾는데 오래걸렸다.

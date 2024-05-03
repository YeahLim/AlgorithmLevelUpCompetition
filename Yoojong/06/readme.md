# [백준 - 골5] 5430. AC 
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. bfs
```python
    for i in range(len(a)):
        if a[i] == 'R':
            R += 1
        elif a[i] == 'D':
            if len(dq) == 0:
                print('error')
                flag = 0
                break
            else:
                if R % 2 == 0:
                    dq.popleft()
                else:
                    dq.pop()
```

## :black_nib: **Review**
- 처음에 시간초과가 발생
- 바로바로 reverse 하지 말고 나중에 개수 파악해서 한꺼번에 reverse 하니 해결됨

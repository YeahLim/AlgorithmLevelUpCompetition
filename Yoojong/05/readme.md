# [백준 - 실버 5] 요세푸스 (11866)

## ⏰  **time**

10분

## :pushpin: **Algorithm**
queue

## ⏲️**Time Complexity**

$O(k*N)$

## :round_pushpin: **Logic**
deque 사용
```
deq = deque([i for i in range(1, n+1)])

ans = []
while len(deq) != 0:
    for _ in range(k-1):
        deq.append(deq.popleft())
    ans.append(str(deq.popleft()))
```

## :black_nib: **Review**
- queue 사용

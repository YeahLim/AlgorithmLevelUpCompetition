# [백준 - 실2] 1927. 최소 힙
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

heapq

## ⏲️**Time Complexity**

$O(NlgN)$

## :round_pushpin: **Logic**
1. heapq
```python
	for _ in range(n):
    num = int(sys.stdin.readline())
    if num == 0 and len(q) == 0:
        print(0)
    elif num ==0:
      print(heapq.heappop(q))
    else:
        heapq.heappush(q, num)
```

## :black_nib: **Review**
- import heapq, heapq.heappush, heapq.heappop

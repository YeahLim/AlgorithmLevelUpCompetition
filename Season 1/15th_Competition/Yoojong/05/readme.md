# [백준 - 실2] 11279. 최대 힙 
 
## ⏰  **time**

15분

## :pushpin: **Algorithm**
최대 힙

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. 최대힙
```python
		
for _ in range(n):
    x = int(sys.stdin.readline())
    if x == 0 and  len(heap)== 0:
        print(0)
    elif x ==0:
        print(-heapq.heappop(heap))

    else:
        heapq.heappush(heap, -x)
```

## :black_nib: **Review**
- 최대 힙은 -로 힙에 넣고 -로 빼야 한다.

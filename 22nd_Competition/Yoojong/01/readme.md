# [백준 - 골드 5] 최소비용 구하기 (1916)
 
## ⏰  **time**

1시간 30분

## :pushpin: **Algorithm**

다익스트라

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
'''python
while heap:
    current_cost, current_node = heapq.heappop(heap)
    if costs[current_node] < current_cost:
        continue

    for next_node, next_cost in graph[current_node]:
        sum_cost = current_cost + next_cost
        if costs[next_node] <= sum_cost:
            continue

        costs[next_node] = sum_cost
        heapq.heappush(heap, [sum_cost, next_node])
'''

## :black_nib: **Review**
- 힙큐 이용한 다익스트라

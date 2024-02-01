# [백준] 백도어 (17396번)

## ⏰ **time**

1시간 30분

## :pushpin: **Algorithm**

다익스트라

## ⏲️**Time Complexity**

## :round_pushpin: **Logic**

똑같은 다익스트라 문제지만 양방향이다. 즉, 간선 정보를 받을때 양방향으로 받아야 한다는 소리다

```
for _ in range(m):
	s, e, l = map(int, input().split())
	graph[s].append((e, l))
	graph[e].append((s, l))
```

처음엔 받아올때 시작점, 끝점이 갈수 없는 곳이면 받지 않았는데 이렇게 하니까 약간의 예외가 발생했는지 계속 틀렸다.

그리고 이 문제의 핵심은 시간초과인데, heapq를 검사할 때 heappop으로 나온 녀석의 시간이 이미 그 분기의 시간을 넘으면 아예 검사하지 않는 로직을 추가해야한다

```
while q:
	cst, now = heappop(q)
	if cst > distance[now] or ward[now]: # 이부분
		continue
	for i in graph[now]:
		cost = cst + i[1]
		if cost < distance[i[0]]:
			distance[i[0]] = cost
			heappush(q, (cost, i[0]))
```

## :black_nib: **Review**

- 여러 함정이 많았다...처음엔 1e9를 최대값으로 잡았는데 이문제는 값이 1e10까지 나오는 모양이다.
  처음엔 양방향인걸 놓쳐서 30분 날리고 테스트케이스 크기는 생각을 안하고 있어서 또 30분 날렸다 ㅜ 이부분을 잘 체크하자

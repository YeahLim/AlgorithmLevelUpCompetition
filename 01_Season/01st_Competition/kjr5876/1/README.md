# [백준] 스타트링크(5014번)

## ⏰ **time**

1시간30분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(V+E)$

## :round_pushpin: **Logic**

1. BFS

deque를 이용한 간단한 문제다.

```python
q = deque([(현재위치, 카운트)])
while q:
	현재위치, 카운트 = q.popleft()

  현재위치가 목표 위치와 같으면 breck

  방문한적 없고 현재위치 + 업버튼이 총 층보다 작으면
  q.append((현재위치+업, 카운트+1))
  v[현재위치+업] = 1
  다운도 마찬가지로
```

## :black_nib: **Review**

- 오랜만에 알고리즘이라 잔실수하다 시간 다보냈다...U랑 D착각하고 S랑 G착각하고 등등 그래도 로직을 겨우겨우 기억해내서 풀수있었다

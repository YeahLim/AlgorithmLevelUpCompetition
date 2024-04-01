# [백준] 연결 요소의 개수 (11724번)

## ⏰  **time**
20분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N+M)$

## :round_pushpin: **Logic**
- 1부터 N까지 for문으로 돌려서 방문안한 경우에만 count를 올린다. 이 count가 곧 연결 요소의 개수이다.
  ```
  		int answer = 0; // 연결 요소의 개수
  		
  		for (int i = 1; i <= N; i++) {
  			if (!visited[i]) {
  				searchConnected(i);
  				answer++;
  			}
  		}
  ```

## :black_nib: **Review**
- BFS로 풀 생각은 없었는데, 내 손이 자연스럽게 BFS를 구현하고 있었다 하하
- 이런 문제는 보통 BFS로 푸는게 편해졌다. 다음에는 union-find나 DFS로 풀어야겠다

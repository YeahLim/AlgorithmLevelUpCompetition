# [프로그래머스 - 레벨 3] 가장 먼 노드
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 시작 노드있고 그래프 문제라길래 다익스트라인줄;
- 가중치가 없는 간선이었기 때문에 bfs로 풀기 쌉가눙.

## :black_nib: **Review**
- `vector<vector<int>> graph(n+1)` (o) 
- `vector<vector<int>> graph(n+1, n+1)` (o)
- `vector<vector<int>> graph()` (x)
- `vector<vector<int>> graph` (세모) 왜냐면, `graph[e[0]].push_back(e[1])` 여기서 오류 남 `graph.push_back({e[0], e[1]})`은 가능함.
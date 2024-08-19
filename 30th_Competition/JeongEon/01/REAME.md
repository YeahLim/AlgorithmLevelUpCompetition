# [백준 - 골드 5] 2589. 보물섬
 
## ⏰  **time**
4시간

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 육지면 1, 아니면 0으로 맵(배열)을 만든다.
2. 맵을 완전 탐색하며 1일 때 BFS를 돈다.
3. BFS를 돌 때 방향벡터를 통해 육지를 판단한다.
4. 육지라면 방문했던 곳인지 확인한다
   if) visited[ny][nx] == -1 -> 방문하지 않았던 곳
   => cnt + 1을 visitied에 저장한다.
5. cnt중에 가장 큰 값을 max에 저장하여 반환한다.
6. 계속 탐색하며 나온 결과값 중 가장 큰 값을 출력한다.

## :black_nib: **Review**
- 탐색 문제 싫어ㅠㅜ

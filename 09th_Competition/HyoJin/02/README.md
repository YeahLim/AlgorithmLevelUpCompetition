# [백준 - 골드 5] 보물섬 (2589)
## ⏰ time
1시간

## 📌 Algorithm
BFS

## ⏲️Time Complexity

## 📍 Logic
구하고자 하는 것은 L -> L 이동할 때 가장 긴 곳의 거리
L인 곳에서 bfs 진행, L인 곳 사방으로 이동하면서 시작점에서의 거리 dist에 저장
새로 bfs 진행할때마다 visited, depth 초기화해주고 dist저장된 거리보다 클 때 갱신 

## ✒️ Review
bfs새로 할 때마다 변수 초기화
뭔가 더 좋은 방법이 있을 것 같다.
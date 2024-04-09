# [백준] 치즈 (2638)
 
## ⏰  **time**
시간초과

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
1. bfs로 외부인지 내부인지 구별하기
2. 외부에 2곳 이상 노출된 치즈 녹이기
3. 1-2를 계속 반복해서 치즈가 다 녹아진 시간 구하기

## :black_nib: **Review**
- 엄청나게 초보적인 실수해서, 디버깅 오래함.. 예행 연습잘했고, 앞으로 더 이 실수는 금지...^^
    - `visited[nx][ny] = true`처리 안해줌.
    - 인덱스 범위 처리에서 `ny >= M`이 아닌 `ny <= M`으로 잘못 처리함.
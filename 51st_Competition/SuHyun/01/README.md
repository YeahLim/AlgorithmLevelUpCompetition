# [백준 - 골드 4] 끝나지 않는 파티
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
플로이드 워셜

## ⏲️**Time Complexity**
$O(N^3)$

## :round_pushpin: **Logic**
- 어디부터 어디까지의 최단거리를 구하는지 모르기 떄문에 모든 노드간의 최단거리를 구해야한다
- 다익스트라를 모든 노드별로 하는것이 시간 복잡도가 좋으나 N이 500이하이고 코드간결성을 위해 플로이드 워셜 사용

## :black_nib: **Review**
- 모든 노드간의 최단거리 = 플로이드 워셜

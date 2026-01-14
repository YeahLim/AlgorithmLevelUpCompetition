# [백준 - 골드 2] 물 대기

## ⏰  **time**
30분

## :pushpin: **Algorithm**
MST(크루스칼 알고리즘)

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 우물을 파는 경우가 꼭 있어야 논에 물을 댈 수 있다
  - 그러므로 우물을 파는 경우를 우물이라는 가상의 노드를 만들어서 우물부터 각 노드까지의 엣지로 표현하여 MST를 구한다

## :black_nib: **Review**
- 엣지 중심은 크루스칼 알고리즘
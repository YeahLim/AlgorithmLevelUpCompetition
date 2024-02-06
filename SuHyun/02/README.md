# [백준 - 실버1] 오목(2615)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 문제 풀이
- 5개의 색이 연달아 있는지 확인하는 문제
- 이때 6개 이상은 승리하지 않는다.
  - 이동방향과 반대방향의 돌을 선택해서 같은색인지 아닌지 판단해 같은 색이면 6목 이상이므로 패스한다.
- 완성된 5개의 연속된 돌인경우 가장 왼쪽의 좌표(세로방향인 경우 위아래로)를 한다.
  - 가장 왼쪽의 좌표를 구해야 하기 때문에 가장 왼쪽을 시작점으로 아래, 오른쪽 대각, 오른쪽 4방향으로 방향 벡터를 만든다.


## :black_nib: **Review**
- 중간에 값이 나와 반복문을 중단해야 한다면 메소드로 나눈다.
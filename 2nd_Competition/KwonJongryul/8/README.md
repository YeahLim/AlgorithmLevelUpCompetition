# [백준] 퇴사 (14501번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

## :round_pushpin: **Logic**

1. 배열을 다 받아 준 뒤 dp를 총 일수 +1 만큼 만들어 준다
2. 받은 배열을 모두 돌며, 2차반복으로는 dp[현재 일수 + 현재 배열 시간값]의 현재시간의 dp값 + 현재 배열 비용값과 dp[현재 일수 + 현재 배열 시간값]의 값을 비교해
   더 큰 값을 올려준다

## :black_nib: **Review**

- 거의 구현했는데 디테일한 부분에서 빼먹었다. 후의 시간 전부를 배열 끝까지 돌며 계산해줘야 했는데 그 부분을 놓쳤다.. 더 연습해보도록 하자

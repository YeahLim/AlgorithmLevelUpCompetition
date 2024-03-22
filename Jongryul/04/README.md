# [백준 - 실버 2 ] 제곱수의 합 (1699번)

https://www.acmicpc.net/problem/1699

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. dp값은 인덱스로 초기화 해준다.
2. 구하고자 하는 값을 큰 반복문으로, 안쪽 반복문은 자기까지의 수로 하되 안쪽 수의 제곱이 i를 넘어가면 break한다
3. i에서 작은 반복문의 제곱수를 빼면 결국 그 제곱수의 가장 큰 배수가 나오니, 안쪽 반복문으로 모든 수를 검사해 준다.
4. 그 배수 +1과 dp[i]값 중 큰 값을 구해준다.

## :black_nib: **Review**

- 실버 2치고는 너무어려웠다.. 좀 더 생각을 유연하게 해야겠다.

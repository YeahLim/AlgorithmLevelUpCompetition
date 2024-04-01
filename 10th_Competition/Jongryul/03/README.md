# [백준 - 실버 2 ] 1, 2, 3 더하기 3 (15988번)

https://www.acmicpc.net/problem/15988

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 5까지만 직접 찾아보면 로직은 dp[i] = dp[i-1] + dp[i-2] + dp[i-3]이 된다.
2. 매 테스트 케이스마다 새로 dp를 구하면 비효율적이니 dp배열은 하나만 만들어 주고 재활용한다.

## :black_nib: **Review**

- 직접 100만까지 테스트했을때는 시간은 충분하다 생각했는데 생각지도 못한데서 시간초과가 났다. 이런유형은 정말 처음이라 앞으로도 참고해야겠다.

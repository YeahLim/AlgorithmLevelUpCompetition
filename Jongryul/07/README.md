# [백준 - 골드 5] 동전1 (2293번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(kn)$

## :round_pushpin: **Logic**

1. 각 경우의 수가 늘어나는 규칙을 적어보면 dp[i-현재 동전] + 현재dp가 되는것을 알 수 있다.
2. dp[0]의 경우 0원을 만들기 위해서 아무 동전도 넣지 않으면 되므로 경우의수는 1이 된다.

## :black_nib: **Review**

- 원리만 알면 쉬우면서도 그 과정이 너무어렵다....

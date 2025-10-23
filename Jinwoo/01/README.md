# [백준 - 실버 2] 사사의 사차원 사탕 봉지 (27968 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 이분 탐색
- 누적 합

## ⏲️**Time Complexity**

$O(N log M)$

## :round_pushpin: **Logic**

먼저 A 배열에 대해 누적합 배열 S를 만듭니다.
```commandline
S[i] = A[0] + A[1] + ... + A[i]
```

이는 앞에서부터 i+1번 꺼냈을 때 총 꺼낸 사탕 개수를 의미합니다.

2. 각 아이의 요청 Bᵢ에 대해 이진 탐색

Bᵢ보다 크거나 같은 최소의 S[i] 인덱스를 찾으면, 해당 인덱스 + 1이 꺼낸 횟수가 됩니다.

못 찾으면 "Go away!"

## :black_nib: **Review**

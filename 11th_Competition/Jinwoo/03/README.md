# [백준 - 골드 3] 나머지 합 (10986 번)

## ⏰  **time**

1시간 이상

## :pushpin: **Algorithm**

수학
누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- N개의 수 중 구간의 합이 M으로 나눠지는 구간의 개수를 구하는 문제이다.
- N개의 값들을 M으로 나눠준 나머지값들의 개수를 리스트의 인덱스 값에 맞게 추가시킨 후
- 0으로 나눠 떨어지는 수들과 그렇지 않은 수들의 경우의 수를 구해주면 구간의 갯수를 구할 수 있다.

## :black_nib: **Review**

- N개의 수 중 구간의 합이 M으로 나눠지는 구간의 개수를 구하는 문제이다.
- 조건에 맞는 구간을 구하기 위해 N개의 수 리스트이 모든 구간의 누적합을 구하여 리스트로 만들고, 그 리스트들 중 총 합이 M으로 나누어 떨어지는 조건을 세어 출력하면 문제풀이를 할 수 있다고 생각했다.
- 하지만 이 방법은 복잡하고 i, j 까지의 구간의 경우를 구하려면 시간복잡도가 O(N^(2))이 나올 수 밖에 없었다.

- 따라서 나머지 값들의 각 갯수를 누적합 하여 리스트로 만들었고
- 경우의 수를 구하는 식을 검색하여 찾아본 후 문제풀이를 진행할 수 있었다.
- 누적합의 개념과 문제의 의도를 이해하고 풀이를 진행하였으면 금방 풀 수 있었을거같다.
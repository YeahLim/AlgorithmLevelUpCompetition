# [백준 - 골드 4] 좋다 (1253 번)

## ⏰  **time**

1시간 30분

## :pushpin: **Algorithm**

자료구조
정렬
이분탐색
두 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- N개의 수 중 어떤 수가 다른 수 두개의 합으로 나타낼 수 있는 수라면 그 수를 GOOD이라고 한다.
- 좋은 수가 몇개인지 구하는 문제이다.
- i번째 수를 제거하고 경우의 수를 생각해아 하므로
- compare = N_list[:i] + N_list[i+1:]
- 위 식을 이용하여 반복문을 돌떄마다 i번째 수가 제외되고 두 수의 합을 통해 경우를 구할 수 있도록 하였다.

## :black_nib: **Review**

- 두 포인터를 활용하여 문제풀이를 진행하였습니다.
- 두 포인터를 한쪽에 몰아 놓는것 보다 양 끝에서 좁혀오는 것이 시간복잡도가 덜 나온다는 것을 알았습니다.
- 경우에 맞게 리스트의 슬라이더를 활용하면 원하는 범위를 지정하여 계산을 할 수 있다는 것을 알았습니다.
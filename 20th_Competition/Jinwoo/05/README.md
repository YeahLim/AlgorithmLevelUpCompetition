# [백준 - 골드 5] 개똥벌레 (3020 번)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

이분탐색
누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 장애물 갯수 N과 동굴의 높이 H를 입력 받는다.
- 장애물은 석순(bottom)과 종유석(top) 번갈아 가며 나타나며, 파괴해야 하는 장애물의 최솟값과 그 구간의 갯수를 출력하는 문제이다.
- 이분 탐색을 활용하여 석순과 종유석의 장애물 인덱스 값 리스트를 따로 선언했습니다.
- 입력받는 순서가 짝수일때는 석순, 홀수일때는 종유석 리스트에 장애물 값을 추가해주고, 그 리스트들을 누적합 시켜 주었습니다.
- 최종적으로 현재 구간의 최솟값이 이전 최솟값보다 파괴해야하는 장애물 수가 작을 경우 값을 최신화 시켜준 후 cnt 값을 1로 만들어 주었습니다.
- 값이 같을 경우는 cnt 값만 늘려주어 최소로 파괴할 수 있는 장애물 갯수와 구간의 수를 구할 수 있었습니다.

## :black_nib: **Review**

- 이분탐색을 통해 누적합 범위를 나눠 구간별 최솟값을 구할 수 있는 방법을 학습할 수 있었습니다.


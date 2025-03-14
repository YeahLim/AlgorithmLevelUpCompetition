# [백준 - 골드 4] 공유기 설치 (2110 번)

## ⏰  **time**

50 분

## :pushpin: **Algorithm**

- 이분 탐색
- 매개 변수 탐색

## ⏲️**Time Complexity**

$O(logN)$

## :round_pushpin: **Logic**

- 집들의 좌표가 주어지고, 설치해야하는 공유기 수가 주어진다.
- 이중 인접한 두 공유기 사이의 최대 거리를 구하는 문제이다.
- 이분 탐색할 기준을 정하였다. = 라우터 간의 거리를 이분 탐색 해야한다.
- 이분 탐색시 나온 결과값 = 현재 라우터간의 거리로 설치할 수 있는 라우터의 최대 수
- 이것이 설치해야하는 라우터 수보다 적으면 거리를 줄여야 하므로 왼쪽 탐색 `end = mid - 1`
- 설치해야 하는 라우터 수보다 많으면 거리를 늘려야 하므로 `start = mid + 1`

## :black_nib: **Review**

- 처음에 문제의 의도를 전혀 파악하지 못해 다른 사람 해설을 참고하여 풀이를 시작했다.
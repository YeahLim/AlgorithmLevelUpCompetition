# [백준 - 실버 4] ATM (11399 번)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

그리디 알고리즘
정렬

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 줄 선 사람들 N, 사람마다 소요되는 시간을 입력 받는다.
- 각 사람이 돈을 인출하는데 걸리는 최소 시간을 구하는 문제이다.
- 문제에 답이 나와 있어서 당황스러웠다.
- 줄을 선 마지막 사람까지 걸리는 소요시간을 계산해보니 배열 왼쪽값을 계속 반복해서 더해줘야 했다.
- 즉, 배열 시작점에는 무조건 작은 숫자가 와야 한다.
- 따라서 오름차순 정렬을 해준 후 배열에 있는 숫자들을 하나씩 반복하여 누적해 더해주면 된다.

## :black_nib: **Review**

- 사람이 줄을 서있는데 최솟값을 구해야 할 경우 이번 문제를 떠올리며 풀이를 진행해야겠다.
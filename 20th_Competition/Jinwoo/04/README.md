# [백준 - 실버 3] 블로그 (21921 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

누적 합
슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 일수 N 만큼의 일일 블로그 방문자 수 값을 입력받은 후, 구간 X별 블로그 방문자 수 합의 최대를 구하는 문제이다.
- X구간별 최대 방문자 수와, 그 최댓값의 갯수를 출력해야 하며
- 최대 방문자 수가 0일 경우 "SAD"를 출력해야 한다.
- 우선 입력받은 N값의 누적합 리스트를 만들어 주었다.
- 그리고 그 누적합 리스트를 X만큼 반복문을 사용하여 탐색을 해보았다. 전체 경우를 보려면 N-X+1만큼 반복해야 했다.
- X범위의 최댓값: X_max 보다 현재 탐색한 X범위의 합이 더 크다면 최댓값을 다시 갱신시켜야 하므로 현재 값을 X_max에 넣어준 후, cnt값을 1로 초기화 시켜준다. (새로운 최댓값 이므로 1)
- X_max가 현재 X범위값과 같을 경우 cnt만 올려준다.
- 전체 범위를 둘러본 X_max과 cnt를 출력한다.
- X_max가 0일경우 "SAD"를 출력한다.

## :black_nib: **Review**

- 누적합 리스트에 특정 범위 X를 지정해 최댓값을 구하는 방법을 공부할 수 있었다.
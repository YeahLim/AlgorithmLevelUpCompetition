# [백준 - 실버 4] 순서쌍의 곱의 합 (13900 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

수학
누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- N만큼의 정수를 입력 받고, 모든 정수의 곱을 더한 값을 출력하는 문제이다.
- 입력받은 정수를 N_list 배열에 넣어주고
- 누적합을 담을 결과값 result와 곱할 값을 담을 변수 N_sum을 0으로 선언했다.
- 모든 정수의 곱을 구해야 하므로 N_list[i] * N_list[i-1]을 reuslt에 넣어주면 누적합을 구할 수 있었다.
- 윗 부분을 N_sum을 통해 전의 N_list[i]값을 N_sum에 담아주어 모든 정수의 곱 경우를 구할 수 있었다.

## :black_nib: **Review**

- 2중for문을 사용하지 않고 전의 값을 현재값을 가져오는 방법을 사용하여 풀이를 진행하였다.
# [백준 - 실버 3] N과 M (3) (15651 번)

## ⏰  **time**

30 분

## :pushpin: **Algorithm**

- 백트래킹

## ⏲️**Time Complexity**

$O(N!/(N-M)!)$

## :round_pushpin: **Logic**

- 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 문제
  - 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
  - 같은 수를 여러번 골라도 된다.

### 재귀함수만 반복하여 같은 수 여러번 출력하기
- 15649번 문제에서 앞자리수와 뒷자리수가 중복이 되어도 상관이 없는 문제이다.
- 따라서 기존의 조건문을 없애주어 중복되지 않는 수열도 출력할 수 있도록 풀이하였다.

## :black_nib: **Review**

- 재귀함수를 통해 자리수를 구현할 수 있었다.
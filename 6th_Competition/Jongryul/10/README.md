# [백준 - 실버 1] 오르막 수 (11057번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(n^3)$

## :round_pushpin: **Logic**

1. 2차배열로 dp를 만들어준다.
2. 하나 하나 그려서 0~9로 시작하는 수들 중에서 각 n자리의 수가 나오는 개수를 세보면 전의 자릿수에서 자기 이상의 수들의 가짓수를 모두 더한 가짓수가 된다.
3. 배열을 채워 나가며 마지막에 자릿수의 개수들을 더해주면 정답이다.

## :black_nib: **Review**

- 모듈러 연산을 처리할때 애초에 더할때 나머지만 더해줬는데 이렇게 하니까 오답이였다. 웬만하면 마지막에 처리하기로 하자

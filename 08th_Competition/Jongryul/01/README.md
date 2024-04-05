# [백준 - 골드 4 ] LCS 2 (9252번)

https://www.acmicpc.net/problem/9252

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. LCS문제와 동일하게 풀고, 역추적을 통해서 문자열을 구한다.
2. 간단하게 역추적 로직을 설명하자면, dp값을 모두 구한 상태에서 가장 끝에서 부터 시작한다.
3. 같은 열이나 행에서 dp값이 같은 값이 있다면, 그 좌표로 이동한다.
4. 없으면 i-1, j-1 위치로 이동하며, 그 값에 있는 a[i]나 b[j]값을 저장한다.
5. 문자열 배열을 뒤집어서 출력하면 끝

## :black_nib: **Review**

- 처음엔 문자열 자체를 저장하는 방식으로 했는데, 시간복잡도가 o(n^3)가 되어버려서 시간초과가 났다. 마지막에 역추적으로 로직을 바꿔서 해결했다.
  갑자기 input txt를 js가 못읽는다..
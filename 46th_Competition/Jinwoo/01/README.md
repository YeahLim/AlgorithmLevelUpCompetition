# [백준 - 실버 3] N과 M (2) (15650 번)

## ⏰  **time**

30 분

## :pushpin: **Algorithm**

- 백트래킹

## ⏲️**Time Complexity**

$O(N!/(N-M)!)$

## :round_pushpin: **Logic**

- 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 문제
  - 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
  - 고른 수열은 오름차순이어야 한다.

### DFS를 재귀함수로 반복하여 모든 경우의 수 가지치기
- M으로 자리수를 정해놓고 각 자리에 들어가는 숫자는 중복되지 않음
  - 예를 들어 M이 2일때 첫번째 자리 수에 1이 들어온 경우 둘째 자리는 1을 제외한 나머지 숫자만 올 수 있다.
- 문제가 있다면 자리수가 두개인 경우는 이중 반복문을 통해 풀이하면 되지만 M이 늘어나면 늘어날수록 반복문을 중첩해야 하는 문제가 발생한다.
- 따라서 백트래킹을 통해 이미 사용(방문)한 경우 제외를 시키면 된다.

### start 변수를 추가하여 오름차순이 아닌 수열 제거
- 문제조건 자체는 15649과 비슷하지만, 앞의 숫자가 뒤의 숫자보다 작은 경우를 제외해야 한다.
- 기존에는 1부터 n까지 모든 숫자를 사용했지만, 오름차순만 출력하기 위해 start부터 n까지의 숫자를 사용하도록 코드를 수정하였다.

## :black_nib: **Review**

- 간단히 범위를 start부터 n까지 범위를 지정하여 오름차순만 출력하게 풀이할 수 있었다.
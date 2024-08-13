# [백준 - 실버 5] 다리 놓기 (9655 번)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

- 수학
- 다이나믹 프로그래밍
- 게임이론

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 돌 개수 N개를 입력받고 상근이와 창영이가 겨루는 문제.. 돌을 마지막으로 가져간 사람이 이긴다.
- 돌은 1개 or 3개씩만 가져갈 수 있다.
- 홀수개씩 가져가므로 N이 홀수면 상근이가 이기고 N이 짝수면 창영이가 이긴다.

## :black_nib: **Review**

### DP를 통한 풀이방법

```commandline
n = int(input())

win = [-1]*10001

win[1] = 1 #SK
win[2] = 0 #CY
win[3] = 1 #SK

for i in range(4,n+1):
    if win[i-1] == 1 or win[i-3] == 1:
        win[i] = 0
    else:
        win[i] = 1

if win[n]==1:
    print('SK')
else:
    print('CY')
```
n=1 -> 상근이가 먼저 1개 가져가고 끝난다 : SK

n=2 -> 상근이가 1개, 창영이가 1개 : CY

n=3 -> 상근 1, 창영 1 상근 1 or 상근 3 : SK

 

n=3까지는 한 번에 가져갈 수 있는 돌의 개수가 1개 혹은 3개이기에 간단하게 알 수 있다. 

 

n=4 -> 상근 1, 창영 3 or 상근 1, 창영 1, 상근 1 , 창영 1 or 상근 3, 창영 1 -> CY

어떤 경우에도 창영이가 이기게 된다.

 

근데 경우들을 살펴보면

상근이가 1개를 먼저 가져간 경우는 

창영이가 먼저 게임을 시작하는 n=3일 경우와 같다.

그리고 상근이가 3개를 먼저 가져간 경우는

창영이가 먼저 게임을 시작하는 n=1일 경우와 같다.

 

그럼 n=5일때도 살펴보면

 

n=5 -> 상근 1, 창영 3, 상근 1 or 상근 1, 창영 1, 상근 1, 창영 1, 상근 1 or 상근 3, 창영 1 상근 1 -> SK

 

이번에도 따져보면

상근이가 1개를 먼저 가져가면

창영이가 먼저 게임을 시작하는 n=4의 경우와 같다.

그리고 상근이가 3개를 먼저 가져가면

창영이가 먼저 게임을 시작하는 n=2의 경우와 같다.

 

즉 n-1 or n-3이 이미 존재한다면 그 결과의 반대가 나오게 된다.

따라서 n-1이나 n-3의 결과를 반대로 저장해주면 된다.
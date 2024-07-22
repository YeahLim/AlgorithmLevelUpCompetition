# [백준 - 실버 3] 퇴사 (14501 번)

## ⏰  **time**

1시간 30분 이상

## :pushpin: **Algorithm**

- 다이나믹 프로그래밍
- 브루트포스 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- Dynamic Programing은 큰 문제를 작은 부분 문제로 나누고, 그 작은 부분 문제들이 반복되는 것을 이용하여 풀어가는 방법입니다.
- 모든 작은 문제들을 단 한번만 풀어야 하며, 그 결과를 어딘가 기록해 둠으로써 재사용 합니다.
- DP는 부분문제를 푸는 순서에 따라서 Top-Down과 Bottom-up으로 나뉜다고 합니다.

- 그중에 저는 Bottom-up 문제풀이 방법을 선택하였습니다.
- 부분 문제 풀이를 기록할 dp라는 리스트를 생성해줍니다.
- dp에는 i번째 일까지 일했을 때 얻을 수 있는 최대 수익이 담기게 됩니다.
- 따라서 풀이는 리스트의 마지막 값 dp[-1]을 출력하면 됩니다.

## :DP Bottom-up 풀이방법

- schedule에는 각 인덱스마다 [상담기간, 비용]이 담기게 됩니다.
- 이중 반복문에서
  1. "i번째까지 일했을 때 얻는 최대 수익"을 계산하기 위한 i를 기준으로
  2. j는 i번째 날에 상담을 진행하였을 때, "상담이 가능한 모든 날짜", 즉 i + "상담 기간"부터 마지막 날까지 입니다.
  3. 그리고, j를 기준으로 상담을 진행했었을 때 얻는 최대 수익을 dp[j]에 저장하도록 합니다.

- 위 방법으로 진행해야 모든 input case에 대해서 처리가 가능 합니다.

## :black_nib: **Review**

```
import sys

N = int(input())
N_time = []
N_money = []
result = []

for i in range(N):
    a, b = map(int, sys.stdin.readline().split())

    N_time.append(a)
    N_money.append(b)


for i in range(N):
    temp = i                                                        # 시작할 인덱스 값
    money = 0                                                       # 시작한 인덱스에 따른 벌 수 있는 수익

    for j in range(N):
        if temp >= N:                                               # N은 최대가 15 이므로, 그 이상이면 반복문 break
            break

        else:
            if N_time[temp] + temp <= N:
                money += N_money[temp]
            temp += N_time[temp]

    result.append(money)


# print(N_time)
# print(N_money)
# print(result)
print(max(result))
```

- 처음에는 반복문 2개를 사용하여 시작 상담을 i로 했을때 남은 일수 중 상담할 수 있는 j값을 구한 후
- 각각의 시작 상담일 경우를 result 배열에 넣은 후 최대값을 구하는 형식으로 문제 풀이를 진행하였다.
- 하지만 다음 테스트 케이스에서 막혔다.

```commandline
10
5 50
4 40
3 30
2 20
1 10
1 10
2 20
3 30
4 40
5 50
```

- 족족 상담일수를 채우는 경우보다 몇 일 상담을 하지 않는 경우가 더 큰 비용값이 나올 수도 있어 풀이방법을 다시 생각해야 했다.
- 아무리 생각해봐도 식을 세우지 못하겠어서 인터넷 풀이를 뒤져 보았지만 처음에 DP 풀이 방법을 봐도 이해가 되지 않아 5번 이상은 봤었던거 같다.
- 퇴사 일수 전까지 상담이 가능한 경우의 비용을 dp로 구해주면 되는 풀이 방법이었다.
- 이렇게 풀이할 경우 마지막 일수의 최대값만 구하면 풀이가 됐다. DP 문제풀이를 더 해봐야 겠다.


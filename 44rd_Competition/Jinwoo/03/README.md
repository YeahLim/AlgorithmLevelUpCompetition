# [백준 - 실버 1] 회의실 배정 (1931 번)

## ⏰  **time**

50 분

## :pushpin: **Algorithm**

- 그리디 알고리즘
- 정렬

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- 회의의 개수: N과 각 회의의 정보를 입력받은 후
- 각 회의 시간이 겹치지 않도록 하며 가장 많은 회의를 할 수 있는 경우의 수를 구하는 문제이다.
- 읽고 30분정도 뇌정지 왔다가 끝에 값을 정렬한 후 나열된 회의시간에서
- 이전 회의의 끝나는 시간에서 다음 회의의 시간의 시작값을 고려하여 이으면 된다는 것을 깨닳았다.

### 풀이 (끝나는 시간 순으로 정렬)
```commandline
import sys
input = sys.stdin.readline

N = int(input())        # 회의의 개수: N
arr = []
cnt = 1

# 회의실 예약 시간들 입력 받은 후 이중배열로 넣어주기
for i in range(N):
    room_reservation = list(map(int, input().split()))
    arr.append(room_reservation)
#print(arr)

# 끝나는 시간 순으로 정렬
arr.sort(key=lambda x: (x[1], x[0]))
#print(arr)

find_start = arr[0]     # 끝나는 시간이 가장 작은 타임을 변수에 담고 이 값을 기준으로 다음 타임을 찾는다.
#print("----- 첫 회의 선택 -----")
#print(find_start)

for i in range(1,N):

    if find_start[1] <= arr[i][0]:  # 이전 회의의 끝나는 시간보다 같거나 커야 다음 회의를 진행할 수 있음
        find_start = arr[i]         # 이전 회의 값을 현재 선택한 회의로 바꿔주자 => 끝나는 시간을 기준으로 정렬이 되어 있으므로 처음 조건에 걸리는 부분이 최적의 값임.
        cnt += 1
        #print("-----", cnt, "번째 회의 -----")
        #print(find_start)

print(cnt)
```
- 끝나는 시간 순으로 정렬을 하면 일찍 끝나야 더 많은 회의를 할 수 있기 때문이다.
- 또한 끝나는 시간 값으로 정렬이 되어 있으므로 시작시간이 겹쳐도 탐색시 끝나는 시간이 빠른 쪽이 먼저 탐색되므로
- 이전 시간의 끝나는 값과 시작시간의 첫 값만 고려를 해주면 된다.

## :black_nib: **Review**

- 개인적으로 문제 풀이를 어떻게 진행할지 사고하는것이 어려웠던 문제이다.
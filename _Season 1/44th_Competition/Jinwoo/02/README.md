# [백준 - 실버 2] A → B (16953 번)

## ⏰  **time**

1 시간 이상

## :pushpin: **Algorithm**

- 그래프 이론 
- 그리디 알고리즘 
- 그래프 탐색 
- 너비 우선 탐색

## ⏲️**Time Complexity**

$O(B⋅log 
2
​
 (B))$

## :round_pushpin: **Logic**

### A가 B가 되기 위한 2가지 조건
- 2를 곱한다. 
- 1을 수의 가장 오른쪽에 추가한다. 

위 두가지 조건을 통해 B로 만드는데 필요한 최소의 연산 횟수를 구하는 문제이다.
풀이를 어찌할지 몰라 일단 종이에 그려보았다.
트리구조로 값들이 열마다 나열되고 있었고 이 값들을 배열에 담아 B와 같은 값이 나오는지 비교해 보며, 모든 배열의 값이 B보다 커질 경우 반복을 종료하고 A는 B가 될수 없다는 결론을 내리는 풀이 방법으로 진행을 하였다.

### 첫번째 풀이 (메모리 초과 발생)
```commandline
import sys
input = sys.stdin.readline

A, B = map(int, input().split())
cnt = 1         # 반복 연산 횟수
arr = [A]
result = 0

while True:
    cnt += 1

    # 이전의 값에서 두가지 선택지 경우를 계산해 배열에 담아 하나의 열로 만들자.
    temp = []
    for i in arr:
        temp.append(i * 2)                  # 1을 우측에 추가할 경우의 변수
        temp.append(int(str(i) + "1"))      # 2를 곱했을 경우의 변수
    arr = sorted(temp)


    if arr[0] > B:
        #print("비교 배열의 첫째값이 B보다 큼, 즉 A는 B가 될 수 없다.")
        print(-1)
        break

    # 현재 열의 배열중 B가 되는 경우가 있는지 탐색
    for j in arr:
        if B == j:
            #print("***** 현재 값이 B와 같음, A가 B가 됨! *****")
            #print("현재 cnt 값:", cnt)
            result = cnt
            #print("결과변수에 값을 담음")
            break
        elif B < j:
            #print("----- B보다 계산한 값이 큼, 다음 열로 ㄱㄱ -----")
            break

    # 결과값이 들어온 경우, 정답 출력 후 반복을 멈춤
    if result > 0:
        print(result)
        break
```
- 위 방법대로 구현을 해보았지만 **메모리 초과** 문제가 나왔다...
- 아무래도 모든 열의 값들을 배열에 담다 보니까 결국 최악의 경우에 메모리 초과에 도달한 모양이다.
- 따라서 아래 방법으로 수정해여 풀이를 진행하였다.

### BFS(너비 우선 탐색 풀이)

- 각 단계에서 가능한 값을 계산하여 배열에 추가하고, 이를 반복적으로 처리하며 목표 값 B에 도달할 수 있는지 확인하는 방법의 풀이 방법이다.
- 이 풀이 방법을 진행하기 위해서는 bottom-up 방법을 통해 풀이를 진행하였다.
- 위에서 발생한 메모리 초과 문제를 해결하기 위해 배열에 담기 전에 값을 비교하는 방법으루 구현하였다.
- 이렇게 될 경우 배열값을 한번 더 비교할 필요 없이 값을 배열에 담기 전에 비교를 하게 되므로 더 효율적인 풀이라 할 수 있겠다.

```commandline
import sys
input = sys.stdin.readline

A, B = map(int, input().split())
cnt = 1         # 반복 연산 횟수
arr = [A]
result = 0

while True:
    cnt += 1

    # 이전의 값에서 두가지 선택지 경우를 계산해 배열에 담아 하나의 열로 만들자.
    temp = []
    for i in arr:
        multi_2 = i * 2             # 2를 곱했을 경우의 변수
        add_1 = int(str(i) + "1")   # 1을 우측에 추가할 경우의 변수

        # B보다 작을때만 배열에 추가해주자
        if B > multi_2:
            temp.append(multi_2)
        elif B == multi_2:
            #print("***** 현재 값이 B와 같음, A가 B가 됨! *****")
            #print("현재 cnt 값:", cnt)
            result = cnt
            break

        if B > add_1:
            temp.append(add_1)
        elif B == add_1:
            #print("***** 현재 값이 B와 같음, A가 B가 됨! *****")
            #print("현재 cnt 값:", cnt)
            result = cnt
            break

    arr = sorted(temp)

    # 결과값이 들어온 경우, 정답 출력 후 반복을 멈춤
    if result > 0:
        print(result)
        break
    #print("----- 현재 배열 값과 반복 횟수 -----")
    #print(arr, cnt)

    # 모든 계산한 값이 B보다 전부 커서 배열에 값이 없을 경우
    if len(arr) < 1:
        #print("비교 배열에 담긴 값이 없음... 즉 A는 B가 될 수 없다.")
        print(-1)
        break

```

## :black_nib: **Review**

- 처음에 어떻게 로직을 구성해야 할지 감이잘 안잡혔다... 그래도 혼자 해내서 뿌듯했다.
- 풀이 후 인터넷을 찾아보니 백트래킹(역 추적) 방식으로 top-down하여 풀이를 진행한 방식이 있었다.
- 이 방식이 로직 이해도 훨씬 쉽고 효율적인 풀이 방식인거 같았다.
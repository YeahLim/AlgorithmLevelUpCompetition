# [백준 - 실버 3] queuestack (24511 번)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

자료 구조
스택
덱
큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 이번 풀이는 자료구조에 넣어야 할 원소값들을 빼고 넣으면 되는 문제이다.
- pop을 이용하여 빼기 때문에 스택의 자료구조는 생각할 필요가 없어서 큐 자료구조만 따로 모아 풀이를 진행하였다.

## :black_nib: **Review**

- 이번 문제는 문제를 이해하느라 시간이 많이 걸렸다.
- 처음 풀이할때 코드이다.
- 나름 완벽하다고 자부하고 제출했지만 처참히 시간초과가 되었다..

```commandline

from collections import deque
import sys

N = int(input())                                                                        # queuestack을 구성하는 자료구조 갯수 N 입력

A = list(map(int, sys.stdin.readline().split()))                                        # i번 자료구조가 큐라면 A(i) = 0, 스택이라면 A(i) = 1

B = deque(map(int, sys.stdin.readline().split()))                                       # B(i)는 i번에 들어있는 자료구조 값이다.

M = int(input())                                                                        # 삽입할 수열의 길이

C = list(map(int, sys.stdin.readline().split()))                                        # queuestack에 삽입할 원소를 갖고 있는 길이 M의 수열 C

#print(N, "\n", A, "\n", B, "\n", M, "\n", C)\

for i in C:                                                                             # 값을 넣고 빼는 작업을 자료구조 원소 갯수와 삽입할 원소 만큼 반복해야 한다.
    X_i = i                                                                             # X_i값은 x(0)dmf 1번 자료구조에 삽입한 뒤 1번 자료구조에서 원소를 pop 하여 나온 값을 또 2번째에 넣고 pop해 나온 값... 을 x(n)까지 반복하여 나온 값이다.

    for j in A:

        if j == 0:                                                                      # j 가 0이라면 자료구조가 '큐'이다.
            B.append(X_i)                                                               # 삽입할 원소를 리스트의 마지막에 추가한다. 그래야 다음 반복문에서 2번째 자료구조 원소값을 넣고 뺄 수 있다.
            X_i = B.popleft()                                                           # 자료구조가 큐라면 기존에 있던 숫자가 빠져야 하므로 원소를 뺀 후 X_i에 넣어준다. 여기서 중요한 점은 스택은 계산할 필요가 없기 때문에 다음 큐값이 들어오면 넣어줄 수 있도록 현재 pop한 값을 X_i에 넣어주는 것이다.

        elif j == 1:                                                                    # j가 1이라면 자료구조는 '스택'이다.
            B.append(B.popleft())                                                       # 따라서 기존 원소를 빼서 마지막으로 순서만 바꿔준다. (반복문이 다 돌면 원래의 순서대로 돌아간다.)

    print(X_i, end=" ")                                                                 # x(n-1)을 N번 자료구조에 삽입한 뒤 N번 자료구조에서 원소를 pop 한 X(n) 값이다. 다음 원소 삽입 전 출력 해준다.
'''
    print("원소 삽입 후 자료구조")
    print(B)
    print("리턴값:",X_i)
    print("----------------")
'''

```

- for문을 2중으로 겹쳐 풀이하였는데 문제 조건을 다시 한번 확인하고 오니 시간초과가 나올만 했던거 같다..
- 생각해보니 스택은 생각할 필요가 없었고, 큐 자료구조만 리스트를 따로 만들어 그대로 오른쪽 밀기를 하면 되는 간단한 문제였다.

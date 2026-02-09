# [백준 - 실버 5] 배열 합치기 (11728 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 정렬
- 두 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- A와 B 두 배열이 주어지고
- 첫번째와 두번째 배열을 합친 후 정렬한 결과를 출력하는 문제 입니다.
- A와 B 배열 각각의 포인터를 만들어 주어, 포인터의 현재값을 비교합니다.
- 비교 후 더 작은 값을 결과값 리스트에 넣어주게 되면 A와 B 배열을 합친 후 정려한 결과 리스트가 만들어 지게 됩니다.
- 그 후 정렬한 값을 차례대로 출력합니다.

## :black_nib: **Review**

- 두 포인터 복습

### 두 포인터
- 1차원 배열에서 각자 다른 원소를 가리키고 있는 2개의 포인터를 조작해가면서 원하는 값을 찾을 때 까지 탐색하는 알고리즘
- 리스트에 순차적으로 접근해야 할 때 두 개의 점(포인트)의 위치를 기록하면서 처리합니다.

### 첫번째 시행 착오

```python
import sys
input = sys.stdin.readline

A, B = map(int, input().split())        # N: 배열 A 크기, M: 배열 B 크기

A_list = list(map(int, input().split()))    # 배열 A 내용 입력
B_list = list(map(int, input().split()))    # 배열 B 내용 입력

# 배열 값 정렬
A_list.sort()
B_list.sort()

# A와 B배열 포인터 초기화
A_pointer = 0
B_pointer = 0

result = []

for i in range(A+B):

    if A_pointer < B_pointer:
        result.append(A_list[A_pointer])
        A_pointer += 1

    elif B_pointer <= A_pointer:
        result.append(B_list[B_pointer])
        B_pointer += 1

    #print(result)

print(result)

```

2개의 배열의 포인터를 0으로 초기화 하여
각 배열의 첫번째 인덱스 값을 비교 후 더 작은 값을 추가 (오름차순 정렬을 위해)

하지만 이렇게 될 경우 포인터가 배열의 인덱스 범위 값을 초과하는 오류가 발생

### 2번째 시행 착오

```python
A_list.append(sys.maxsize)
B_list.append(sys.maxsize)
```

각 배열의 끝에 정수의 최댓값을 넣어봄

근데 테스트 케이스 범위도 최댓값이여서  의미가 없었음

인덱스 값이 최대가 됐을때 고정을 한다던가 남은 배열 값만 출력하는 로직을 생각을 해야했고

후자를 선택하여 구현에 성공하였다.
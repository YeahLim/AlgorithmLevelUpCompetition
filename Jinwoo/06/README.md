# [백준 - 실버 5] 덱2 (28279 번)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

자료 구조
덱

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- N개의 풍선이 1부터 N까지 정렬해 있고, 풍선 안에 0을 제외한 양수, 음수값이 있다.
- 이때 1번째 풍선을 터트려 나온 숫자를 보고 양수면 오른쪽, 음수면 왼쪽으로 움직여 다음 풍선을 터트리고 이것을 풍선이 다 터질때 까지 반복한다.
- 따라서 풍선값을 deque()를 활용하여 배열로 만들어 배열의 첫번째 값을 터트리고
- 터트려 나온 풍선값이 양수라면 리스트의 첫번째 값을 빼 마지막(제일 오른쪽)에 추가시켜 풍선값들을 왼쪽으로 밀어주고
- 터트려 나온 풍선값이 음수라면 리스트의 마지막 값을 빼 첫번째(제일 왼쪽)에 추가시켜 풍선값들을 오른쪽으로 밀어주어
- 다음 반복때 풍선값을 빼 출력하는 과정을 반복하는 형식으로 문제풀이를 진행하였다.

## :black_nib: **Review**

- 풍선 값을 출력하는것이 아니라 풍선의 순서(인덱스 값)을 출력하는 문제이므로 방법을 고민하다 인덱스 값 리스트 count를 하나 더 만들어 풀이를 진행하였다.
- 값이 빠지고 이동하는 과정을 balloon_point 뿐만 아니라 count 값에도 적용하여 계산은 balloon_point, 출력은 count 리스트를 이용하였다.

## 인터넷 풀이 참고

- 문제를 풀고 다른사람들이 어떻게 풀었는지 검색해보았다.
- 정말 유용한 메서드를 발견하였다.

```commandline
    
    import sys
    from collections import deque
    input = sys.stdin.readline
    
    n = int(input())
    q = deque(enumerate(map(int, input().split())))
    ans = []
    
    while q:
        idx, paper = q.popleft()
        ans.append(idx + 1)
    
        if paper > 0:
            q.rotate(-(paper - 1))
        elif paper < 0:
            q.rotate(-paper)
    
    print(' '.join(map(str, ans)))  
```

## enumerate

터진 풍선의 '번호(인덱스+1)'를 출력하는 문제이므로 pop을 하더라도 초기 인덱스 정보는 끝까지 유지되어야 한다.
이를 위해 enumerate가 사용했다. enumerate 사용 전과 후의 덱 상태를 비교해보자.

- enumerate 사용 전

`deque([3, 2, 1, -3, -1])`

- enumerate 사용 후

`deque([(0, 3), (1, 2), (2, 1), (3, -3), (4, -1)])`

덱에 인덱스와 종이 값이 튜플로 묶여서 하나의 원소로 저장된다.
따라서 idx, paper = q.popleft()를 하면 idx에는 0이, paper에는 3이 저장된다.

- 이 메서드를 활용하면 인덱스 값과 풍선 안의 종이값이 튜플로 묶여 저장된다;;
- 이러면 리스트를 하나 더 만들 필요가 없었다.

## deque.rotate()

- rotate(-1)은 원형 큐를 반시계방향으로 1칸 회전시키고, rotate(1)은 시계방향으로 1칸 회전시킨다고 생각하면 쉽다. (개사기네;)
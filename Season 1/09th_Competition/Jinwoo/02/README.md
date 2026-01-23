# [백준 - 실버 4] 큐 2 (18258 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

자료 구조
큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 첫번째 줄에 입력받을 명령어 갯수 N을 선언한다.
- for문을 사용하여 N만큼 입력을 받는다. leadline.split()을 통해 입력받는 문자열과 정수를 나누었다.
- 반복문 안에서 조건문들을 활용하여 각 명령어의 조건을 만족할 수 있도록 풀이를 진행하였다.
- deque 메소드를 활용하여 리스트 안에 있는 값을 입, 출력 할 수 있도록 popleft() 함수를 활용 하였다.

## :black_nib: **Review**

- 이번 문제는 리스트의 왼쪽 부분에서 값을 넣거나 빼야 했다.
- 리스트의 인덱스 0번 값을 빼기 위해 처음에 pop(0)을 통해 값을 빼려 했지만 시간 초과가 나왔다.
- 구글링을 해보니 list.pop(0)은 시간복잡도가 O(N)이라는 것을 알게 되었다.
- 반복문 안에서 시간 복잡도가 O(N)의 list.pop(0)을 사용하였으므로 시간 복잡도는 O(N^2)가 되어 시간 초과가 나오게 된것이다.

## list.pop(0)

- 리스트의 첫번째 값을 출력해 주는 연산 입니다. 맨 뒤에 값을 빼내는 pop는 복잡도가 O(1)인데 이것은 O(N)인 이유는 맨 앞에 있는 값을 출력해 주기 위해 전체 복사를 해주기 위해서 입니다.
- 따라서 리스트 말고 deque 메소드를 이용하면 O(1)이 나옵니다.


## deque 정의

- 큐의 앞, 뒤에서 삽입, 삭베가 가능한 큐 (double-enden queue)의 줄임말

## deque 메소드

- collections 파일에 deque가 포함되어 있다. 따라서 deque 자료구조를 사용하기 위해서는 아래와 같이 선언 해줘야 한다.


    from collections import deque

- popleft(): 큐의 맨 왼쪽의 element를 삭제하고 반환. element가 없으면, IndexError가 발생.
````
    from collections import deque
    
    queue = deque()
    queue.append('b')
    # queue = ['b']
    
    queue.append('c')
    # queue = ['b', 'c']
    
    popped_left = queue.popleft()
    # popped_left = 'b'
```
# [백준 - 실버 5] 덱2 (28279 번)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

자료 구조
덱

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 각 조건의 정수를 N번 입력 받아 해당 정수의 명령을 실행하는 문제이다.
- 처음에 정수 N을 입력 받은 후 for문을 통해 N번만큼 반복하여 들어온 정수에 해당하는 조건문을 걸어 실행하도록 풀이하였다.
- 조건 중 리스트의 앞과 뒤, 양쪽에서 삭제와 삽입을 하는 조건이 있었으므로 deque의 메서드를 활용하여 풀이를 진행하였다.

## :black_nib: **Review**

## deque 란?

- deque() 란?, 양쪽에서 삭제와 삽입이 가능한 구조이며 스택과 큐의 연산을 모두 지원한다.

## 덱의 연산

-  덱은 양쪽 끝에서 데이터의 삽입과 삭제 연산을 모두 할 수 있기 때문에, 스택과 큐의 연산을 모두 구현

스택 연산

- front를 스택의 top으로 생각했을 때, 덱의 insertFront() 연산은 push() 연산, pop() 연산과 같다.
- rear를 스택의 top으로 생각했을 때, 덱의 insertRear() 연산과 deleteRear() 연산은 push() 연산, pop() 연산가 같다.

큐 연산

- insertRear() 연산과 deleteRear() 연산은 일반 큐의 enQueue() 연산, deQueue() 연산과 같다.
- Scroll: 입력 제한 덱 (입력이 한 쪽에서만 발생하고, 출력은 양쪽에서 일어날 수 있음)

- Shelf: 출력 제한 덱 (입력은 양쪽에서 일어나고, 출력은 한 쪽에서 일어나도록 제한)

덱의 연산은 collections 모듈에서 제공하는 deque 클래스로 구현 가능

- append(): 오른쪽에서 데이터를 삽입
- appendleft(): 왼쪽에서 데이터를 삽입
- pop(): 오른쪽에서 데이터를 삭제
- popleft(): 왼쪽에서 데이터를 삭제


# [프로그래머스 레벨 3] 이중우선순위큐

## ?  **time**
15분

## :pushpin: **Algorithm**
우선순위큐

## ??**Time Complexity**
$O(logN)$

## :round_pushpin: **Logic**


## :black_nib: **Review** 
- 이중 우선순위 큐 구현할때,
    - java : TreeMap (중복), TreeSet (중복X)
    - cpp : multiset (중복), set (중복x)

## :black_nib: **C++**
- erase(`iterator`) 나 erase(`value`) 가능
    - `iterator` 사용할 경우 포인터이기 때문에 값 하나만 제거
    - `value` 넣으면, 중복된 값 전부 제거
- erase()는 `iterator` type만 들어갈 수 있음. `reverse_iterator`type은 불가능함
- prev(`iterator`)하면 `iterator` 한 칸 앞을 가리킴
- `a.begin()`은 `iterator` = 포인터이기 때문에 `*a.begin()`해야지 값이 나옴
- `a.rbegin()`은 `reversed_iterator` = 포인터이기 때문에 `*a.rbegin()` 해야지 값 나옴
- `pq.end()`은 `iterator` = 포인터
- `pq.rend()`은 `reversed_iterator` = 포인터
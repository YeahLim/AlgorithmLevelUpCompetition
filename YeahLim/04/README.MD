# [프로그래머스 레벨 2] 호텔 대실

## ?  **time**
1시간

## :pushpin: **Algorithm**
PriorityQueue

## ??**Time Complexity**
$O(NlogN)$

## :round_pushpin: **Logic**

## :black_nib: **Review** 
- cpp겁나 어렵네.. sort랑 pq 오름차순/내림차순 부등호 방향이 다르다니

## :black_nib: **C++**
- `priority_queue<Time, vector<Time>, decltype(cmp)> pq(cmp)`
    - 첫번째인자는 타입
    - 두번째인자는 어떤 방식으로 넣을건지 default가 vector<>
    - 람다의 타입 - deltype()사용하면 컴파일러가 알아서 찾아줌
    - pq(여기가 실제 객체가 들어가야함)
- `priority_queue<int, vector<int>, greater<int>> pq;` // 최소힙
    - 이렇게 쓰면 comparator 구현안해도됨
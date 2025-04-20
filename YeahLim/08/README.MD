# [프로그래머스 - 레벨 3] 여행 경로
 
## ⏰  **time**
시간초과

## :pushpin: **Algorithm**
백트래킹

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**

## :black_nib: **Review**
- 백트래킹에서 가지치기용 flag는 전역에 변수초기화해야지 됨.
- STL 컨테이너는 기본적으로 깊은 복사
    - 따라서 이 경우에는 전역변수 tickets는 정렬이 안됨
    ```c++
        sort(tickets.begin(), tickets.end());
        ::tickets = tickets;
    ```
    - 아래처럼 해줘야 함.
    ```c++
        sort(tickets.begin(), tickets.end());
        ::tickets = tickets;
    ```
- C++에서 vector 내부에 <, == 연산자를 잘 정의해 두어서, 2차원 컨테이너도 “내용 동등”·“사전순 정렬”이 그대로 지원
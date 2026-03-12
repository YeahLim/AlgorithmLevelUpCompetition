# [프로그래머스 레벨 2] 두 큐 합 같게 만들기

## ?  **time**
1시간

## :pushpin: **Algorithm**
투 포인터

## ??**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 두 큐를 합쳐서, 포인터를 그 안에서 같이 씀. (0, QUEUE1의 길이) 
    - 일반적인 투포인터의 시작인덱스 차이는 1이지만, 이건 아님
- 목표치보다 큰 경우 queue1 값을 뺀다
- 목표치보다 작은 경우 queue2 값을 더한다

## :black_nib: **Review**
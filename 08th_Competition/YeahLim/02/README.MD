# [프로그래머스 레벨 2] [3차] 파일명 정렬

## ?  **time**
50분

## :pushpin: **Algorithm**
구현

## ??**Time Complexity**
$O(logN)$

## :round_pushpin: **Logic**


## :black_nib: **Review**   
- `PriorityQueue`는 정렬 시, 순서 보장이 안됨. 
    - 따라서 index값을 따로 설정해줘야함.
    - 혹은 `Arrays.sort()`나 `Collections.sort()`이용해야 함.

## :black_nib: **C++**
- cpp에서 `stable_sort`말고 다 불안정 정렬.
- sort함수 구현 시, `-` 사용 불가. `<` 사용해야 함.
- java의 `class` -> `struct`
    - 생성자 구현 익숙해지기!
- `transform(시작, 끝, 결과저장위치, 함수)`
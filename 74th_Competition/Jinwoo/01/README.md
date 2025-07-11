# [백준 - 실버 4] 우당탕탕 영화예매 (29700 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 구현
- 문자열
- 브루트포스 알고리즘
- 누적 합
- 슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- deque를 사용하여 영화관 대기열을 효율적으로 관리한다. 
- 명령어 1 a b는 (a, b) 쌍을 큐의 끝에 추가한다. 
- 명령어 2 b는 큐에서 맨 앞의 학생을 꺼내어, 좋아하는 메뉴와 일치 여부에 따라 A(좋아함), B(안 좋아함)에 분류한다. 
- 모든 명령 처리 후 대기열에 남은 학생들은 C(식사 못 함) 목록에 넣는다. 
- 출력 시 각 목록이 비어 있다면 "None"을 출력한다.

## :black_nib: **Review**

- 단순 시뮬레이션 문제지만 큐 자료구조를 이용해 깔끔하게 처리할 수 있다. 
- 조건 분기와 출력 형식만 주의하면 무난한 구현 문제. 
- 명령 순서와 학생 정보의 흐름을 파악하는 것이 중요 포인트.
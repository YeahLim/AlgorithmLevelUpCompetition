# [프로그래머스 - 레벨 2] 송전탑 둘로 나누기
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 둘 다 인접리스트로 구현
- 송전탑 와이어 끊는 부분에서 구현 차이가 있음
    - 첫번째는 인접리스트에서 실제로 제거
    - 두번째는 visited 처리로 count 처리가 되지않도록 방지

## :black_nib: **Review**
- `remove(범위시작, 끝, 지울 원소)`
    - 실제로 해당하는 원소를 지우는게 아니라, 지울 원소를 해당 범위에 맨뒤로
    - algorithm 라이브러리에 속해있음
    - vector의 메소드 아님
- `v.erase(지울 원소 위치)`
    - 그 원소를 v에서 지움
    - vector의 메소드
- `v.erase(범위시작, 끝)`
    - 해당하는 범위를 v에서 제거
- `v.erase(remove(v.begin(), v.end(), a), v.end())`
    - a라는 원소를 v 맨뒤로 위치하게해서 해당하는 범위를 지움
    - 즉 v에서 a가 제거가 됨
- 그래프 둘로 나눈다해서 반드시 유니온파인드 문제 아니다!!!
# [백준 - 골드 4] 세 수의 합
 
## ⏰  **time**
40분

## :pushpin: **Algorithm**
set

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- A,B,C, A+B+C가 모두 입력한 집합에 있어야 한다.
- 그러므로 A + B가 A+B+C - C에 있는지 확인하면 된다.
- A + B는 N^2로 충분히 구할 수 있으며 이를 hashSet으로 저장하면 O(1)의 시간복잡도로 구할 수 있다.

## :black_nib: **Review**
- N^3이 나온다면 N^2*logN을 생각해본다

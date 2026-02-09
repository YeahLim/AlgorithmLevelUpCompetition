# [백준] 문자열 복사 (2195)
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
그리디

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
- 단순히 문자열의 `contains`, `substring` 메소드를 이용해서 구현했다.

## :black_nib: **Review**
- 이론상 시간복잡도 $O(N^3)$
    - 문자열 P의 길이만큼 for문 : $O(N)$
    - `substring` 연산 : $O(N)$ + `contains` 연산 : $O(N^2)$ = $O(N^2)$
- 실질적으로 시간복잡도 $O(N^2)$
    - 문자열 P의 길이만큼 for문 : $O(N)$
    - `substring` 연산 + `contains` 연산 = $O(N)$
        - substring에 포함된 문자열이 길수록 (시간복잡도가 커짐), contains에서 찾는 수가 작아짐 (시간복잡도가 작아짐), 서로 반비례 관계
        - 예를 들어, substring이 최악의 경우가 index가 0이고 i+1이 O(N)인 경우인데, 이 경우 contains 시간복잡도가 O(1)임 
        - 반대로, substring의 길이가 1인 경우, continas의 시간복잡도는 O(N)이 되게 됨.

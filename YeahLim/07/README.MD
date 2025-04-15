# [프로그래머스 - 레벨 2] 소수 찾기
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
순열

## ⏲️**Time Complexity**
$O(N!)$

## :round_pushpin: **Logic**

## :black_nib: **Review**
- C++에서는 숫자도 bool값으로 인지됨. 0은 flase, 나머지는 true
- 순열 vs 조합
    - 순열에서의 같은 숫자 쓰는 중복 방지를 위해 visited 사용.
    - 조합에서의 순서는 다르지만 구성이 똑같을 때를 방지하기 위해, start = i+1 사용. (이렇게 사용하기 때문에 visited 애초에 필요없음)
- 소수 찾기
    - 제곱근이면 소수가 아니기 때문에, `for (int i = 3; i * i <= num; i += 2)` 이 방법 이용
- 전역변수 `::변수이름`이렇게 사용.
- 인자에서 초기화할 경우, 임시 변수라 참조(&) 못씀.
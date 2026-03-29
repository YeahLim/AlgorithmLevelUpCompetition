# [프로그래머스 레벨 2] 2개 이하로 다른 비트

## ?  **time**
1시간

## :pushpin: **Algorithm**
비트

## ??**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 비트연산자 1,2개 다른 숫자 찾기
    - 짝수는 0으로 끝나서 +1하면 됨
    - 홀수는 마지막 0찾아서 1로 바꾸고 그 다음 숫자 0으로 바꾸면 됨

## :black_nib: **Review** 


## :black_nib: **C++**
- java의 `Integer/Long.toBinaryString(num)` = cpp의 `bitset<64>(num).to_string()`
    - <64> : 64비트의 string으로 변환한다는 뜻
    - long long은 2^64
    - int는 2^32
    - long은 2^32 혹은 2^64
- java의 `Integer/Long.parseInt/Long("string", 2)`= cpp의 `stoi/stoll("string", nullptr, 2)`
    - `nullptr`은 null pointer 라는 뜻
    - 두번째 인자는 어디까지 변환했는지, 위치 저장하는 포인터
- java의 `a.indexof("a")`와 `a.lastIndexOf("a")` = cpp의 `a.find("a")`와 `a.rfind("a")`  
    - `a.find()`나 `a.rfind()`는 index를 반환   
    - `find()`그냥 한수는 iterator 반환
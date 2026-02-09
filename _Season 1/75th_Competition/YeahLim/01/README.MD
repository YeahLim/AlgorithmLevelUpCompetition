# [백준 브론즈 1 - 1157] 단어 공부
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. 직접 구현
2. max_element / count 이용

## :black_nib: **Review**
- char -> int 변환시에는 아스키 코드(`-65`)를 이용하기보다 바로 알파벳(`- 'a'`)을 뺴줘야 안 헷갈린다.
- `cout << flag ? '?' : char(max_char + 'A')` 는 항상 0과 1만 나온다.
    - `<< 연산자` 우선순위(5급) > `?: 연산자` 우선순위(13급) 
    - 따라서 `cout << (삼항연산자)`이런식으로 괄호로 묶어줘야 한다.
- `std::count`도 있으니 count라는 변수명은 짓지 않는게 좋겠다.
- `max_element()`는 가장 큰 값의 가리키는 iterator을 반환. 
    - iterator가 반환되는 경우는 해당값에 `변수.begin()`값을 뺀다. 그러면 `인덱스값`을 구할 수 있다.
    - `변수.begin()`는 첫번째 원소를 가리키는 iterator를 반환한다.
`*max_element()`는 가장 큰 값을 반환.
    - 값(value) 을 복사해서 돌려준다
    - 그 값을 벡터 안에서 어디서 찾았는지는 버리고 버퍼에선 사라져 버리기 때문에 `인덱스값`을 구할 수 없다.

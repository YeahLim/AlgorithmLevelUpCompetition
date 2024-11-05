# [백준 - 골드 5] 별 찍기 - 10 (2447 번)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

- 분할 정복
- 재귀

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 3의 거듭제곱을 입력 받아 일정 패턴의 별을 찍는 문제 입니다.
- 각 반복하는 함수 속에서 star_LEN의 값을 3으로 나누며 패턴을 이전 함수의 retrun 값으로 재정의하고 결합하는 풀이방식으로 진행하였습니다.

### 기본 케이스 정의
```commandline
    if star_LEN == 1:
        return ['*']
```

- 재귀적인 방법으로 함수를 계속 호출하여 `star_LEN`이 1이 되었을 때 `'*'`을 리턴하여 줍니다. 
- 그렇게 for문을 한번 돌린 L의 list는 `['***', '* *', '***']` 구조가 됩니다.

### 재귀함수 호출을 통해 패턴 재정의
```commandline
    Stars = draw_stars(star_LEN//3)
```
- 3이 입력된 경우 기본 패턴 정의를 함. 
- 그 다음인 9가 입력이 된 경우는 ['***', '* *', '***']가 기본 패턴 구조가 된다. 
- 따라서 9일때 첫번째, 두번째 세번째 for문을 돌린 경우
```commandline
['*********', '* ** ** *', '*********']
['***   ***', '* *   * *', '***   ***']
['*********', '* ** ** *', '*********']
```
- 다음과 같은 구조가 나오며 이것은 다음 재귀함수 호출때의 기본 구조가 됩니다.


### 리스트를 활용하여 패턴 병합
```commandline
    L = []

    for S in Stars:
        L.append(S*3)
    for S in Stars:
        L.append(S+' '*(star_LEN//3)+S)
    for S in Stars:
        L.append(S*3)
    return L
```
- 현재 실행 함수의 Stars의 패턴을 반복하거나,
- 공백이 있는 부분을 `' '*(star_LEN//3`로 공백을 생성합니다.

## :black_nib: **Review**

- 재귀함수를 사용하여 작은 패턴을 확장하여 큰 패턴을 만드는 방법을 알 수 있었다.
- 일정한 패턴이 반복된다는 것은 알았지만, 출력은 가로로 쭉 이어여쟈 하고 한번 줄 바꿈을 하면 돌이킬 수 없다는 점과
- 어떻게 패턴을 정의해야할지, 함수 안의 함수 패턴을 생각하다보니 머리가 터질거 같았다.
- 2시간동안 고민했지만 풀지 못해 결국 인터넷 해설을 보고 말았다.
- 풀이를 보고 풀어도 머리속이 복잡하지만 재귀 구조를 어느정도 이해할 수 있었던것 같다.
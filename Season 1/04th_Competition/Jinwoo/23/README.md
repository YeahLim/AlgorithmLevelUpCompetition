# [백준] A+B -4 (10951번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

수학
구현
사칙연산

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- a와 b의 값을 계속 반복해서 찍어낼 반복문 while을 항상 참으로 만들어 반복한다.
- 반복문속 try, expect으로 테스트케이스가 들어오지 않을 때 expect의 break함수롤 통해 반복문을 끝낸다.
- 반복문 안 try문은 a, b를 stdin으로 입력받고 split()과 map()함수를 이용해 a, b에 정수를 입력받는다.
- 테스트 케이스가 더이상 들어오지 않으면 반복문이 종료되어 문제풀이가 끝난다. 

## :black_nib: **Review**

* try, except
- try : try 안의 코드를 시도해봐라
- except : try코드가 안될경우 except 안의 명령어를 수행하라
- 테스트 케이스 (입력)이 얼마나 들어올지 모르는 상황에서 끝나는 시점의 조건도 걸려있지 않다.
- 이런경우 try, except로 테스트 케이스가 들어오지 않을 때(끝내야 할때) except의 break으로 while문을 종료시켜야한다.

- 처음에 문제풀이를 이해하지 못해 시간이 걸렸다. 입력이 얼마나 들어올지 모르는 상황에서 끝내야하는 조건도 걸려있지 않을때의 문제풀이법을 배웠다. 
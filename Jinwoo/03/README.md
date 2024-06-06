# [백준 - 실버 3] 합 구하기 (11441 번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

누적 합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- N만큼의 숫자를 입력받는다.
- M번 x ~ y까지의 구간합을 출력하는 문제이다.
- 구간합을 구하는 것이므로 누적합으루 문제풀이 접근을 하였다.
- 입력받은 숫자값을 누적합을 하여 sum_list에 저장하였다.
- 그리고 구간을 입력 받았을 때  sum_list[y] - sum_list[x-1]를 해주어 구간합을 구하였다.
- x-1을 해야하므로 누적합 리스트 제일 왼쪽에 0을 넣어주었다. (인덱스 x값을 포함하여 합을 해야 하므로)

## :black_nib: **Review**

- 누적합을 통하여 구간합을 구하는 방법을 공부할 수 있었다.


## 재귀함수란? (Recursion Function)

- 재귀의 뜻 그대로 재귀 함수란, 다시 돌아오는 함수 즉 자기 자신을 다시 호출해 작업을 수행하는 방식이다.
- 그렇기 때문에 특정 분기까지 자기 자신을 계속해서 호출해주는데, 주로 반복문을 구현할 때 사용하게 된다.
- 우리가 흔히 알고 사용하는 for, while, reduce 등이 있는데, 이러한 반복문으로 구현 가능한 로직은 모두 재귀 함수로도 가능하고 그 반대로도 역시 가능하다.
- 재귀 함수는 큰 목표 작업 하나를 동일하면서 간단한 작업 여러 개로 나눌 수 있을 때 유용한 프로그래밍 패턴이다.
- 목표 작업을 간단한 동작 하나와 목표 작업을 변형한 작업으로 단순화 시킬 수 있을 때도 재귀를 사용할 수 있다.


## 재귀함수를 사용한 문제 풀이 방법
```
def print_star(x,y):
    s = ""
    star = 0
    for i in range(x):
        star = 1 - star
        s += "*" if star else " "
    for i in range(y+y-1):
        s += "*" if x%2==0 else " "
    for i in range(x):
        star = 1 - star
        s += " " if star else "*"
    s += "\n"
    return s

n = int(input())
n = (n*2)-1
result = ""
for i in range(n,0,-1): result += print_star(n-i,i)
for i in range(2,n+1,1): result += print_star(n-i,i)
print(result)
```
- print 함수를 자주 사용하게 된다면 코드의 효율성이 떨어지기에 문자열에 담아두고, 마지막 결과값을 출력하는 풀이방법을 생각할 수 있다.
- 하단부의 for문 i 반복자의 초기값이 2로 설정하여, 하단부는 세로 중앙열에서 시작하는 것이 아닌 세로 중앙열 한칸 밑에서 부터 출력값을 잡는다.



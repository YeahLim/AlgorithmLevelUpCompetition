# [백준 - 골드 4] 문제 추천 시스템 Version 1 (21939)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

우선순위 큐, Set

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

1. 문제풀이

입력되는 모든 문제를 각 우선순위 큐에 넣어서 어려운/쉬운 문제를 찾으려 할 때 peek을 이용해서 빠르게 찾을 수 있다.

이때 이미 푼 문제는 출력하면 안되기 때문에 방문배열을 이용해 푼 문제를 저장해야 한다.

하지만 같은 문제 번호에 다른 난이도로 들어올 수 있으므로 모든 문제의 종류는 (문제 번호의 개수) * (난이도의 개수) = 100,000 * 100,000 = 100,000,000,000이다.'

이는 메모리 제한에 넘칠 수 있으므로 딱 입력된 문제만 저장할 수 있도록 set을 이용해 중복을 제거하고 번호-난이도로 유일키를 만들어 문제별로 구분하게 하여 방문set을 만들면 된다.

## :black_nib: **Review**
- 방문배열이 너무 커지면 set을 이용해 생성하자
- 데이터의 고유키가 무엇인지 확인해보자. 복합키의 경우의 수도 있다.
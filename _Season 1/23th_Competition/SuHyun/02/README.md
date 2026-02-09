# [백준 - 실버 3] 영단어 암기는 괴로워 (20920)
 
## ⏰  **time**

15분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

1. 문제풀이

우선순위 3개에 맞게 객체를 만들과 정렬한 뒤 길이 M 미만을 제거하면 된다.

이때 각 문자의 개수를 구해야 하므로 Map을 활용해 O(1)의 속도로 빠르게 이전에 나왔던 문자열을 이용해 객체를 찾을 수 있도록 하면 효율적으로 할 수 있다.

## :black_nib: **Review**
- Map을 이용해 객체를 빠르게 탐색하자
- 출력 시간이 오래 걸리면 BufferedWriter를 이용하자
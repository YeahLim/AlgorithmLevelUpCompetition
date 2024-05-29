# [백준 - 골드 4] List of Unique Numbers (13144)
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 문제풀이

연속한 범위의 숫자를 구해야 하므로 슬라이딩 윈도우를 이용해 숫자 범위를 표현한다.

이때 중복되는 수가 있으면 안되므로 지속적으로 윈도우 안의 숫자를 탐색해야한다.

이 때 윈도우 안의 숫자들을 Set을 이용해 저장하여 탐색 시간을 줄인다.

l~r의 범위로 만들 수 있는 경우의 수는 다음과 같다.

{num[l]} ,{num[l],num[l+1]} .. {num[l],num[l+1] ... num[r-1],num[r]}

그러므로 l~r의 범위로 만들 수 있는 경우의 수는 l~r의 길이와 같다.

## :black_nib: **Review**
- 총합은 항상 int인지 long인지 파악할 필요가 있다.
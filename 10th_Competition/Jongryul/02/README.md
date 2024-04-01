# [백준 - 실버 4 ] 베스트셀러 (1302번)

https://www.acmicpc.net/problem/1302

## ⏰ **time**

10분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. json혹은 dict에 문자열을 저장해가며 있는 값이라면 +=1, 없는 값이라면 1로 값을 만들어 준다.
2. dict, json 순서가 보장되지 않기때문에 max값과 같은 문자열들을 모조리 한 배열안에 넣어준다.
3. 정렬 후, 가장 앞에 있는 요소를 출력한다.

## :black_nib: **Review**

- 오늘 코딩테스트 후 문자열에 생각보다 많이 약하다는 느낌이 있어서 풀었다.

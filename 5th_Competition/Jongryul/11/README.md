# [백준 - 실버 5] 종이자르기 (2628번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(n^2)$

## :round_pushpin: **Logic**

1. 나중에 길이를 직사각형의 길이를 계산하기 위해 w, h 배열 만들기
2. 1이면 h, 2이면 w에 저장하기
3. 두 배열 정렬 후, 정렬된 값은 잘린 인덱스의 값들이기 때문에 가로, 세로 현재인덱스+1의 원소 - 현재인덱스 원소끼리 곱해준다.
4. max값을 갱신해가며 구하면 끝

## :black_nib: **Review**

- 실버5치곤 너무어려웠다ㅜㅜ 정렬한다던가 배열넣어서 저렇게 구현하는건 생각을 못했는데 하나 배웠다.

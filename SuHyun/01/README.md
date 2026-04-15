# [프로그래머스 - level 2] 뒤에 있는 큰 수 찾기

## ⏰  **time**
15분

## :pushpin: **Algorithm**
스택

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 뒤에 있는 수 중에 가장 가까이에있는 큰수를 찾으면 뒤에 있는 숫자는 아무래도 상관 없어진다
  - 그러므로 맨 뒤에 부터 뒤에 있는 큰 수를 확인하여 범위를 좁힌다

## :black_nib: **Review**
- list insert 문은 O(N)의 시간복잡도를 가지므로 처음부터 필요한 크기 만큼 만들고 인덱스로 접근하여 시간복잡도를 줄이자
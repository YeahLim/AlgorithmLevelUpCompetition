# [백준 - 실버 5] 나이순 정렬 

## ⏰  **time**
20분

## :pushpin: **Algorithm**
정렬

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 나이, 이름, 가입순 객체를 만들어 나이, 가입 오름차순으로 정렬

## :black_nib: **Review**
- 객체를 만들때 __self__로 생성자 생성
- int형으로 형변환을 해야 제대로 비교 가능
- lamda x : x 문법으로 정렬 키 설정
- -를 붙여 내림차순 정렬 가능
- 여러개인 경우 lamda x : (x[0],x[1]) 로 키를 여러개 설정 가능
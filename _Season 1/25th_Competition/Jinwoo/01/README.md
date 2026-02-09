# [백준 - 실버 5] 문서 검색 (1543 번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

- 문자열 
- 브루트포스 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 문서 데이터 문자열: file을 입력받고 검색할 문자: search 를 입력받는다. 이 문자가 문서안에 몇개 있는지 찾는 문제이다.
- 반복문을 사용하여 인덱스 포인터 i를 선언하고 문서를 처음부터 끝까지 file[i:len(search)]가 있는지 살펴본다.
- 있을경우 cnt 를 올려주고 없을 경우 포인터를 증가시켜 search단어가 file안에 몇개 있는지 확인해볼 수 있다. 

## :black_nib: **Review**

- 찾을 문자의 범위 file[i:len(search)]를 설정 후 i 라는 인덱스 포인트를 정해 문서의 처음부터 끝까지 확인할 수 있다.
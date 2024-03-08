# [백준] 숫자 카드 2 (10816)

## ⏰  **time**
10분

## :pushpin: **Algorithm**
자료 구조
## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
-dictionary에 넣어서 value값 증가 
    ```
cards_dic = {}
for i in cards:
    if i not in cards_dic.keys():
        cards_dic[i] = 1
    else:
        cards_dic[i] += 1
    ```

## :black_nib: **Review**
- key값이 없는 경우를 고려하지 않고 바로 출력하니 Key Error 9 이 떴다.
- Key Error 9는 dictionary에 key 값이 없는데 부르는 경우이다.

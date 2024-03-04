# [백준 - 골드 5] 숫자 카드 (10815)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

자료 구조
정렬
이분 탐색
해시를 사용한 집합과 맵

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- set에 추가가 되었으면 중복이 안된 것
- set에 추가가 되지 않았으면 중복이 된 것
- 길이로 판별
```
    for i in m_cards:
    check_length = len(n_cards)
    n_cards.add(i)
    #다를 경우
    if check_length != len(n_cards):
        n_cards.remove(i)
        print(0 , end=' ')
    else:
        print(1, end=' ')
```

## :black_nib: **Review**
- set .remove 의 time complexity 는 신기하게도 O(1), 무한 감사
- 왜냐면 hash table implementation 이기 때문

# [백준 - 골드 5] Fly me to the Alpha Centauri (1101)
 
## ⏰  **time**
15분

## :pushpin: **Algorithm**
수학

## ⏲️**Time Complexity**

$O(t * cnt)$

## :round_pushpin: **Logic**
- 이동 횟수는 (이동 횟수 % 2) 반복
- 이동 횟수 홀수 시, 반복되는 횟수 증가하는 규칙
```python
    while tmp < distance:
        cnt += 1
        if cnt % 2 != 0:
            moving += 1
        tmp += moving
    print(cnt)
```

## :black_nib: **Review**
- 원래 알고 있던 문제라 쉽게 풀렸다.

# [백준 - 골드 5] Fly me to the Alpha Centauri (51)
 
## ⏰  **time**
15분

## :pushpin: **Algorithm**
수학

## ⏲️**Time Complexity**

$O(t * cnt)$

## :round_pushpin: **Logic**
- 공간 장치 이동횟수는 (공간 장치 이동횟수 &2)만큼 반복
- 공간 장치 이동 횟수가 홀수가 될 때 반복되는 횟수가 증가하는 규칙.

```python
    while tmp < distance:
        cnt += 1
        if cnt % 2 != 0:
            moving += 1
        tmp += moving
```

## :black_nib: **Review**
- 규칙만 찾으면 간단히 풀리는 문제이다.

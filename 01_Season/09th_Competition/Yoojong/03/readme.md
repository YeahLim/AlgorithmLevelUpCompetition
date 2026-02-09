# [백준 - 실버 4] 동전 0 (11047)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(9*N)$

## :round_pushpin: **Logic**
들어갈 수 있는 큰 값부터 차곡차곡
```
while True:
    if coins[i] > m:
        i +=1
        continue
    #일단 추가
    ans += coins[i]
    count +=1
    if ans == m:
        break
    if ans > m:
        ans -= coins[i]
        count -= 1
        i +=1
print(count)
```

## :black_nib: **Review**
- 그리디 알고리즘

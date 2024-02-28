# [백준] 수 정렬하기 (2750🩶5️⃣)

## ⏰  **time**

2분

## :pushpin: **Algorithm**

구현
정렬

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 중복을 없애기 위해 set 사용
```
s = set()

for _ in range(n):
    s.add(int(input()))
s= list(s)
s = sorted(s)
```
  

## :black_nib: **Review**

- 중복을 없앨 땐 set!

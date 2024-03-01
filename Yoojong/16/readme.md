# [백준] 나이순 정렬 (10814번🩶5️⃣)

## ⏰  **time**
5분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- Labmda 이용
```
info = sorted(info , key = lambda x:int(x[0]))
```


## :black_nib: **Review**

- info = [ sys.stdin.readline().split() for i in range(n)]
- 앞으로 입력값을 이렇게 받도록 하자.

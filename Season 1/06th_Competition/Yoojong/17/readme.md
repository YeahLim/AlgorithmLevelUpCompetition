# [백준] 좌표 압축 (18870번🩶5️⃣)

## ⏰  **time**
1시간

## :pushpin: **Algorithm**

정렬, 값/좌표 압축

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- set(중복 없앰) -> list -> sort -> dic
```
x_list = list(map(int, sys.stdin.readline().split()))
x_sorted = sorted(list(set(x_list)))
dic = {x_sorted[i] : i for i in range(len(x_sorted))}

```
  

## :black_nib: **Review**

- #for i in x_list: sys.stdout.write(str(x_sorted.index(i))+' ' )
- 처음에 이렇게 풀었는데 시간초과 나옴
- 이유: index는 O(N)의 시간이 걸리는데 for문이 O(N)안에 있으니 O(N^2) 으로 시간초과
- for문 안에서 .index()로 찾지말고 바로 찾을 수 있도록 구현하기 위해 dictionary 사용

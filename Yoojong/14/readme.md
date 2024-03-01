# [백준] 좌표 정렬하기2 (11651번🩶5️⃣)

## ⏰  **time**

1분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(nlogn)$

## :round_pushpin: **Logic**

- lambda 이용
```
num_list = sorted(num_list, key = lambda x : ( x[1],x[0] ))

print((c*e-b*f)//(a*e-b*d), (a*f-d*c)//(a*e-b*d))
```


## :black_nib: **Review**

- 좌표 정렬하기와 같은 메커니즘 (순서만 바꿈)

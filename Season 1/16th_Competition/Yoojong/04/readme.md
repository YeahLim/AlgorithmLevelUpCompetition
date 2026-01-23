# [백준-실1] 1931. 회의실 배정
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

그리디 알고리즘

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
1. 끝나는 시간을 먼저 그다음 시작 이렇게 sort 해야한다. 한방에 구하는 방법.
```python
schedule.sort(key = lambda x : (x[1],x[0]))

end = schedule[0][1]
count = 1
for i in range(1, n):
    if schedule[i][0] >= end:
        count +=1
        end = schedule[i][1]
```

## :black_nib: **Review**
- 끝나는 시간을 먼저 sort 하지 않으면 한방에 구해지지 않고 for 문을 두 번 돌려야 하므로 시간초과가 걸린다.

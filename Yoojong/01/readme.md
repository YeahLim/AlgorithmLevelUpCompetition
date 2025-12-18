# [백준] 팔(1105 실1)

## ⏰  **time**
15

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

## :black_nib: **Review**

```python
if L == R:
    count = str(L).count('8')
elif len(L) == len(R):
    for i in range(len(L)):
        if L[i] == '8' and R[i] == '8':
            count += 1
        elif L[i] != R[i]:
            break
```

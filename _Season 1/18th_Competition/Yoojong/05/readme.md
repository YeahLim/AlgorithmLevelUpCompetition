# [백준 - 골드 5] 주사위 (1041)
 
## ⏰  **time**
1 시간

## :pushpin: **Algorithm**
그리디

## ⏲️**Time Complexity**

$O(n)$

## :round_pushpin: **Logic**
```python
if n == 1:
    arr.sort()
    for i in range(5):
        ans += arr[i]
else:
    min_lists.append(min(arr[0], arr[5]))
    min_lists.append(min(arr[1], arr[4]))
    min_lists.append(min(arr[2], arr[3]))
    min_lists.sort()

    min1 = min_lists[0]
    min2 = min_lists[0] + min_lists[1]
    min3 = sum(min_lists)

    n1 = 4 * (n - 2) * (n - 1) + (n - 2) ** 2
    n2 = 4 * (n - 1) + 4 * (n - 2)
    n3 = 4

    ans += min1 * n1
    ans += min2 * n2
    ans += min3 * n3
```

## :black_nib: **Review**
- 이건 그냥 수학문제 같다.

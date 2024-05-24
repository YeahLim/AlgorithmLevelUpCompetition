# [백준 - 골드 5] 감소하는 수 (1038)
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
브루트 포스

## ⏲️**Time Complexity**

$O(n)$

## :round_pushpin: **Logic**
```python
for i in range(1, 11):
	for j in combinations(range(10), i):
		num = ''.join(list(map(str, reversed(list(j)))))
		result.append(int(num))
```

## :black_nib: **Review**
- 브루트 포스

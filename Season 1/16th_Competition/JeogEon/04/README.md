# [SWEA D3️⃣] 11688. Calkin-Wilf tree 1
 
## ⏰  **time**

5분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. L ➡️ b = a + b
2. R ➡️ a = a + b
```cpp
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'L') {
				b = a + b;
			}
			else if (input[i] == 'R') {
				a = a + b;
			}
		}
```

## :black_nib: **Review**
- 

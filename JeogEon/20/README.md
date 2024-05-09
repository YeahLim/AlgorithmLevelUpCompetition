# [SWEA D3️⃣] 10032. 과자 분배
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. N/K = mini
2. if N%K != 0 ➡️ N/K + 1 = maxi
3. if N%K == 0 ➡️ N/K = maxi
```cpp
		int maxi = N / K;
		int mini = N / K;
		if (N % K != 0) {
			maxi++;
		}
```

## :black_nib: **Review**
- 

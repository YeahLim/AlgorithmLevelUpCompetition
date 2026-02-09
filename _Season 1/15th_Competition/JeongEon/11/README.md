# [SWEA - D3️⃣] 1217. [S/W 문제해결 기본] 4일차 - 거듭 제곱

## ⏰  **time**

3분

## :pushpin: **Algorithm**

재귀

## ⏲️**Time Complexity**

$O(M)$

## :round_pushpin: **Logic**
1. 재귀함수로 거듭 제곱을 나타냄
```cpp
int Jegop(int N, int M) {
	if (M == 0) return 1;

	return N * Jegop(N, M - 1);
}
```

## :black_nib: **Review**
- 

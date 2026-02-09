# [SWEA - D2️⃣] 두 개의 숫자열 (1959)
 
## ⏰  **time**

35분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N^T)$

## :round_pushpin: **Logic**
1. 더 작은 크기의 숫자열을 기준으로 곱해보고 가장 큰 값 확인
```cpp
int calculate(int x1, int x2, vector<int> arr1, vector<int> arr2) {
	int num = 0;

	int result = 0;
	while (num + x2 <= x1) {
		int sum = 0;
		for (int i = 0; i < x2; i++) {
			sum += arr1[i + num] * arr2[i];
		}
		
		if (result < sum) {
			result = sum;
		}
		num++;
	}

	return result;
}
```

## :black_nib: **Review**
- 

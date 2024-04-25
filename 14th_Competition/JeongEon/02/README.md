# [SWEA - D3️⃣] [S/W 문제해결 기본] 2일차 - Sum (1209)
 
## ⏰  **time**

34분

## :pushpin: **Algorithm**

합

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 가로세로대각선의 수의 합을 구한다.
   가로: arr[i][j]
   세로: arr[j][i]
   우대각선: arr[i][i]
   좌대각선: arr[i][100-i]
```cpp
int calculate(vector<int> arr[100]) {
	int result = 0;
	int Degak_left = 0;
	int Degak_right = 0;
	for (int i = 0; i < 100; i++) {
		Degak_right += arr[i][i];
		Degak_left += arr[i][100 - i];
		int sum_garo = 0;
		int sum_sero = 0;
		for (int j = 0; j < 100; j++) {
			sum_garo += arr[i][j];
			sum_sero += arr[j][i];
		}
		if (result < sum_garo) {
			result = sum_garo;
		}

		if (result < sum_sero) {
			result = sum_sero;
		}
	}

	if (result < Degak_left) {
		result = Degak_left;
	}

	if (result < Degak_right) {
		result = Degak_right;
	}

	return result;
}
```

## :black_nib: **Review**
- 

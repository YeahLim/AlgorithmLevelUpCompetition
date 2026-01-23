# [SWEA - D2️⃣] 스도쿠 검증 (1974)
 
## ⏰  **time**

50분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(81)$

## :round_pushpin: **Logic**
1. 가로 확인 & 세로 확인 (알고리즘 동일)
```cpp
int check_garosero(vector<int> sudoku[9]) {
	for (int i = 0; i < 9; i++) {
		bool check_garo_num[10];
		memset(check_garo_num, false, sizeof(check_garo_num));

		bool check_sero_num[10];
		memset(check_sero_num, false, sizeof(check_sero_num));

		for (int j = 0; j < 9; j++) {
			if (check_garo_num[sudoku[i][j]]) {
				return 0;
			}
			check_garo_num[sudoku[i][j]] = true;

			if (check_sero_num[sudoku[j][i]]) {
				return 0;
			}
			check_sero_num[sudoku[j][i]] = true;
		}
	}

	return 1;
}
```
2. 박스 확인
```cpp
int check_box(vector<int> sudoku[9]) {
	for (int k = 0; k < 9; k += 3) {
		for (int l = 0; l < 9; l += 3) {
			bool check_num[10];
			memset(check_num, false, sizeof(check_num));
			for (int i = k; i < k + 3; i++) {
				for (int j = l; j < l+ 3; j++) {
					if (check_num[sudoku[i][j]]) {
						return 0;
					}
					check_num[sudoku[i][j]] = true;
				}
			}
		}
	}

	return 1;
}
```

## :black_nib: **Review**
- 사중포문이라서 시간초과 날 줄 알았는데 30초나 줘서 가능했다..! 야호

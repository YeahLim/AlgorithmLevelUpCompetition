# [SWEA - D2️⃣] 1979. 어디에 단어가 들어갈 수 있을까
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 가로 방향으로 3글자가 들어가는 공간이 있는지 확인 (세로방향도 동일)
   if) 1이 연속으로 3개이면서 그 뒤로 0이나 끝일때 ➡️ result++
```cpp
int check_garo() {
	int result = 0;
	for (int i = 0; i < N; i++) {
		int cnt_garo = 0;
		for (int j = 0; j < N; j++) {
			if (crossword[i][j] == 0) {
				if (cnt_garo == K) {
					result++;
				}
				cnt_garo = 0;
			}
			else if (crossword[i][j] == 1) {
				cnt_garo++;
			}
		}
        if (cnt_garo == K) {
			result++;
		}
	}

	return result;
}
```

## :black_nib: **Review**
- 쓰기모드 너무 화난다.. 컴터 껐다 키기 귀찮아

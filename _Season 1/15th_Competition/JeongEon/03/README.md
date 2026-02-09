# [SWEA - D3️⃣] 1215. [S/W 문제해결 기본] 3일차 - 회문1
 
## ⏰  **time**

1시간

## :pushpin: **Algorithm**

구현, 펠린드롬(회문)

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. N/2 만큼 스텍에 넣고 스텍의 top과 나머지 N/2만큼을 비교.
   if) 다르다면 ➡️ result 추가 X (세로 동일)
```cpp
int Garo() {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= 8 - N; j++) {
			stack<char> check_garo;
			bool palindrome_garo = true;
			for (int k = 0; k < floor(N / 2); k++) {
				check_garo.push(arr[i][j + k]);
			}

			for (int k = N - floor(N / 2); k < N; k++) {
				if (check_garo.top() != arr[i][j + k]) {
					palindrome_garo = false;
					break;
				}
				check_garo.pop();
			}

			if (palindrome_garo) {
				result++;
			}
		}
	}

	return result;
}
```

## :black_nib: **Review**
- 반복문 조건 설정할 때 끝까지 안 돌아서 수정하느라 오래 걸렸다.

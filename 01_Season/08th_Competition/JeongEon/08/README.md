# [백준] 종이의 개수 (1780번 🩶2️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

분할정복

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 9칸으로 나누었을때 다른 색깔이 있는지 확인
```

- 분할정복: 9칸으로 나누어 확인 <br/>
```cpp
void solve(int y, int x, int size) {
	bool same = true;
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (paper[i][j] != paper[y][x]) {
				same = false;
				break;
			}
		}
		if (!same) {
			break;
		}
	}

	if (!same) {
		solve(y, x, size / 3); // 1번
		solve(y + size / 3, x, size / 3); // 2번
		solve(y + size / 3 + size / 3, x, size / 3); // 3번
		solve(y, x + size / 3, size / 3); // 4번
		solve(y + size / 3, x + size / 3, size / 3); // 5번
		solve(y + size / 3 + size / 3, x + size / 3, size / 3); // 6번
		solve(y, x + size / 3 + size / 3, size / 3); // 7번
		solve(y + size / 3, x + size / 3 + size / 3, size / 3); // 8번
		solve(y + size / 3 + size / 3, x + size / 3 + size / 3, size / 3); // 9번
	}
	else {
		if (paper[y][x] == -1) {
			result[0]++;
		}
		else if (paper[y][x] == 0) {
			result[1]++;
		}
		else {
			result[2]++;
		}
	}
}
```

## :black_nib: **Review**

- 문제 내용만 다르고 푸는 방식은 똑같당

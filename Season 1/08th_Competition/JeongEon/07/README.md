# [백준] 쿼드트리 (1992번 🩶1️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

분할정복

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 4칸으로 나눴을 때 한가지 색만 존재하는지 확인
```

- 분할정복: 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래, 이렇게 4개의 영상으로 나누어 압축 <br/>
```cpp
void solve(int y, int x, int size) {
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (video[i][j] != video[y][x]) {
				cout << "(";
				solve(y, x, size / 2);
				solve(y, x + size / 2, size / 2);
				solve(y + size / 2, x, size / 2);
				solve(y + size / 2, x + size / 2, size / 2);
				cout << ")";
				return;
			}
		}
	}

	cout << video[y][x];
}
```

## :black_nib: **Review**

- 

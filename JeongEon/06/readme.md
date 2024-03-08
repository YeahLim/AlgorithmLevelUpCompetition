# [백준] 바닥 장식 (1388번 🩶4️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색(DFS)
```
	if (i < 0 || j < 0 || i >= N || j >= M) {
		return;
	}

	if (room[i][j] == '|') {
		return;
	}

	if (room[i][j] == '-') {
		visited[i][j] = true;
		width(i, j + 1);
	}
```

## :black_nib: **Review**
- 가로 탐색, 세로 탐색

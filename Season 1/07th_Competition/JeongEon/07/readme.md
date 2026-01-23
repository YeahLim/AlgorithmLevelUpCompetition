# [백준] 안전 영역 (1388번 🩶1️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색(DFS)
```
	for (int i = 0; i < 4; i++) {
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny >= 0 && ny < n && nx >= 0 && nx < n) {
			if (!visited[ny][nx]) {
				dfs(ny, nx);
			}
		}
	}
```

## :black_nib: **Review**
-

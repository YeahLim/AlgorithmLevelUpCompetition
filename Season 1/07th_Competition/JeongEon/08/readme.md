# [백준] 뱀과 사다리 게임 (1388번 💛5️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 너비 우선 탐색 (BFS)
```
	queue<pair<int, int>> q;
	q.push({ 1, 0 });
	visited[1] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int nx = x + i;

			if (nx <= 0 || nx > 100) {
				continue;
			}

			if (nx == 100) {
				return cnt + 1;
			}

			while (board[nx] != 0) {
				nx = board[nx];
			}
			if (!visited[nx]) {
				q.push({ nx, cnt + 1 });
				visited[nx] = true;
			}
		}
	}

	return 0;
```

## :black_nib: **Review**
-

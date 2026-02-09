# [백준] 점프왕 쩰리 (Small) (16173번 🩶4️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 너비우선탐색(BFS)
```
	queue<pair<int, int>> q;
	q.push({ 0 ,0 });
	visited[0][0] = true;

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		if (map[y][x] == -1) {
			return true;
		}

		int move = map[y][x];

		for (int i = 0; i < 2; i++) {
			int ny = dy[i] * move + y;
			int nx = dx[i] * move + x;

			if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
				continue;
			}

			if (!visited[ny][nx]) {
				q.push({ ny, nx });
				visited[ny][nx] = true;
			}
		}
	}

	return false;
```

## :black_nib: **Review**
- 

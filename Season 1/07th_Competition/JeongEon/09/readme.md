# [백준] 벽 부수고 이동하기 (2206번 💛3️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 너비 우선 탐색 (BFS)
```
	queue <pair<pair<int, int>, int>> q;
	q.push({ { 1, 1 }, 0 });
	visited[1][1][0] = 1;

	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int wall = q.front().second;
		q.pop();

		if (y == N && x == M) {
			return visited[y][x][wall];
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			// 범위를 내라면!
			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N) {
				// 벽이 없다면!
				if (map[ny][nx] == 0 && visited[ny][nx][wall] == 0) {
					visited[ny][nx][wall] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall });
				}

				// 벽이 있고 아직 안 부셨다면!
				if (map[ny][nx] == 1 && wall == 0) {
					visited[ny][nx][wall + 1] = visited[y][x][wall] + 1;
					q.push({ { ny, nx }, wall + 1 });
				}
			}
		}
	}

	return -1;
```

## :black_nib: **Review**
-

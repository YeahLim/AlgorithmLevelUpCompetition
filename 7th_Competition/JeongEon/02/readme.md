# [백준] 섬의 개수 (4963번 🩶2️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(w*h)$

## :round_pushpin: **Logic**

- 너비우선탐색(BFS): 지도 상에서 1이면서 방문하지 않은 곳만 bfs한다.
```
				if (!visited[i][j] && map[i][j] == 1) {
					q.push({ i, j });
					visited[i][j] = true;
					// bfs
					while (!q.empty()) {
						int y = q.front().first;
						int x = q.front().second;
						q.pop();

						for (int i = 0; i < 8; i++) {
							int ny = y + dy[i];
							int nx = x + dx[i];

							if (ny <= 0 || nx <= 0 || ny > h || nx > w) {	// 지도 범위를 넘어가면
								continue;
							}

							if (map[ny][nx] == 1 && !visited[ny][nx]) {
								q.push({ ny, nx });
								visited[ny][nx] = true;
							}
						}
					}
					cnt++;
				}
```

## :black_nib: **Review**
- 아.. bfs내에서만 해결하고 싶었는데, 결국 외부 반복문 돌리면서 지도 전체를 보게 만들었다.

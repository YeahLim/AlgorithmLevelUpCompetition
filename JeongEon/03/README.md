# [백준] 빙산 (2573번 💛4️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

BFS, 벡트레킹(DFS)

## ⏲️**Time Complexity**

$O(NM)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 빙산 한 칸 당 상하좌우를 확인해 크기를 줄인다.
2. 빙하 덩어리 개수를 센다.
  if) x <= 1
      1번으로 돌아가 반복
  if) x >= 2
      해당 년수 출력
```

- 깊이우선탐색: 상하좌우에 존재하는 빙하 위치로 이동하여 덩어리를 확인한다 <br/>
 ⭐ 방문확인과 DFS를 이용해 전체 map을 이동하여 덩어리를 확인한다. <br/>
```cpp
for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
		if (map[i][j] != 0) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				Count(i, j);
				ice++;
			}
		}
	}
}

void Count(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (map[ny][nx] != 0) {
			if (!visited[ny][nx]) {
				visited[ny][nx] = true;
				Count(ny, nx);
			}
		}
	}
}
```
- 너비우선탐색: 빙하 한 칸 당 상하좌우에 0이 존재하는지 확인하여 빙하 크기를 줄인다. <br/>
  ⭐ 같은 년도에 빙하크기가 줄어 0이 된 부분은 포함하지 않는다. <br/>
```cpp
void Grobal_Warming() {
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] != 0) {
				q.push({ i, j });
			}
		}
	}

	queue<pair<pair<int, int>, int>> melt;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
				continue;
			}

			if (map[ny][nx] == 0) {
				cnt++;
			}
		}
		melt.push({ {y,x}, cnt });
	}

	while(!melt.empty()) {
		int y = melt.front().first.first;
		int x = melt.front().first.second;
		int cnt = melt.front().second;
		melt.pop();

		while (cnt > 0) {
			if (map[y][x] == 0) {
				break;
			}
			map[y][x]--;
			cnt--;
		}
	}
}
 ```

## :black_nib: **Review**

- 이런 문제는 시간효율 따져서 만들라 그러면 못 만들 거 같아..

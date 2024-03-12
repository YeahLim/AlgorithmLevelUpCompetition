# [백준] 연구소 (14502번 💛4️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

BFS, 벡트레킹(DFS)

## ⏲️**Time Complexity**

$O(2^{(NM)}*NM)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 벽 3개 세우기(맵 복사) (DFS)
2. 바이러스 퍼트리기 (BFS)
3. 바이러스가 퍼진 맵에 0 개수 세기
4. 최대안전영역(초기 0)과 비교
5. 1번~4번을 계속 반복
6. 최대 안전영역 출력
```

- 깊이우선탐색: 벽은 빈칸(0)에 세울 수 있으며 꼭 3개 세운다. <br/>
 ⭐ 맵에 3개 벽을 세울 수 있는 모든 경우의 수를 탐색한다. <br/>
```cpp
void wall(int cnt) {
	if (cnt == 3) {
		copy_lab();
		Virus();
		return;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (lab[i][j] == 0) {
				lab[i][j] = 1;	// 벽 세움
				wall(cnt + 1);
				lab[i][j] = 0;	// 초기화
			}
		}
	}
}
```
- 너비우선탐색: 바이러스는 상하좌우로 퍼진다.(단, 벽이 세워진 장소는 퍼지지 않는다.)<br/>
  ⭐ 초기에 바이러스 위치를 queue에 넣고 방향벡터를 이용해 퍼트린다. <br/>
```cpp
queue<pair<int, int>> q;
for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
		if (map[i][j] == 2) {
			q.push({ i, j });
		}
	}
}

while (!q.empty()) {
	int y = q.front().first;
	int x = q.front().second;
	q.pop();

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
			continue;
		}

		if (map[ny][nx] == 0) {
			map[ny][nx] = 2;
			q.push({ ny, nx });
		}
	}
}
 ```

## :black_nib: **Review**

- 이 문제 시간효율 따져서 만들라 그러면 못 만들 거 같아..

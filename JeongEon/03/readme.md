# [백준] 연결 요소의 개수 (11724번 🩶2️⃣)

## ⏰  **time**

10

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 너비우선탐색(BFS): 한 노드에서 연결된 모든 노드를 방문하고, 방문하지 않은 노드를 확인.
```
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			q.push(i);
			// bfs
			while (!q.empty()) {
				int x = q.front();
				q.pop();

				for (int i = 0; i < map[x].size(); i++) {
					if (!visited[map[x][i]]) {
						visited[map[x][i]] = true;
						q.push(map[x][i]);
					}
				}
			}
			cnt++;
		}
	}
```

## :black_nib: **Review**
- 맨 처음에 연결 요소가 무슨 소리인지 몰랐다. 그림 그려보니 노드끼리 연결된 묶음 개수를 말하는 거였다.

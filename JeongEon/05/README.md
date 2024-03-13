# [백준] 불! (4179번 💛4️⃣)

## ⏰  **time**

3시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(RC)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 불 배열을 만들어 상하좌우로 번지게 한다.
  if) 상하좌우에 이미 불이 번져있다면, 더 적은 시간을 배열에 저장한다.
2. 지훈이 배열을 만들어 상하좌우로 움직인다.
  if) 상하좌우에 이미 다녀온 곳이 있다면, 더 적은 시간을 배열에 저장한다.
3. 가장자리의 불이 번진 시간과 지훈이가 움직인 시간을 비교한다.
  if) 불이 번진 시간보다 지훈이가 움직인 시간이 더 적으면, 결과에 넣는다.
4. 우선순위 큐에 저장된 결과는 오름차순이므로 top()을 출력한다.
  if) 결과 큐가 비어있다면 IMPOSSIBLE을 출력한다.
```

- 너비우선탐색: 상하좌우에 움직일 수 있는지 확인하고, 시간을 비교하여 더 적은 시간을 저장한다. <br/>
 ⭐ 사람이 움직인 배열과 불이 번진 배열을 따로 저장하고, 더 적은 시간을 저장 <br/>
```cpp
void Fire() {  // 불이 번지는 로직과 사람이 움직이는 로직이 동일하다.
	memset(fire, 0, sizeof(fire));

	while (!F.empty()) {
		int y = F.front().first;
		int x = F.front().second;
		F.pop();


		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			// 범위 넘어가면
			if (ny < 0 || nx < 0 || ny >= R || nx >= C) {
				continue;
			}

			if (maze[ny][nx] == 0) {
				if (fire[ny][nx] == 0 || fire[ny][nx] > fire[y][x] + 1) {
					fire[ny][nx] = fire[y][x] + 1;
					F.push({ ny,nx });
				}
			}
		}
	}
}
```

## :black_nib: **Review**

- DFS로 풀려고 했는데, 복귀하는게 어려워서 다른 방법을 찾아봤다.
- 반례 생각 못 해서 엄청 틀렸다.
- 반례) 지훈이가 벽에 갇혀있는 경우, 지훈이가 가장자리에 있는 경우, 지훈이의 사방에 불이 있는 경우

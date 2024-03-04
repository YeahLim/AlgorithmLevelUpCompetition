# [백준] 촌수계산 (2644번 🩶2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N*M)$

## :round_pushpin: **Logic**

- 너비우선탐색(BFS): now로부터 다른 노드가 촌수가 어떻게 되는지 확인한다.
  촌수는 기준 노드로부터 위 아래로 움직일 때 +1씩 계산한다.
  ex)
 # _______________________
 #|       1          4    |
 #|     2   3      5   6  |
 #|   7 8 9               |
 #-------------------------
  위와 같은 가족표가 있을 때, 3은 7로부터 3촌인 것이다.
```
	while (!q.empty()) {
		now = q.front();
		q.pop();
		
		for (int i = 0; i < family[now].size(); i++) {
			if (visited[family[now][i]] == false) {
				q.push(family[now][i]);
				visited[family[now][i]] = true;
				depth[family[now][i]] = depth[now] + 1;
			}
		}
	}
```

## :black_nib: **Review**
- 촌수 계산법을 알았다. 위 아래로는 +1씩 계산, 좌우는 +2씩 계산.
- BFS 푸는 방식 중에 방문노드 확인하는 법이 있는데, 이걸 까먹었다. 그래서 오래 걸렸다.

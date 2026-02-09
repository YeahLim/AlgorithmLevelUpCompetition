# [SWEA] 달팽이 숫자 (1954번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

그래프 탐색

## ⏲️**Time Complexity**

$O(N*N)$

## :round_pushpin: **Logic**
1. 달팽이집처럼 뱅글뱅글 숫자 넣기
```cpp
		while (N * N >= cnt) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			// 범위를 넘어섰거나 이미 수가 있을 때
			if (ny < 0 || nx < 0 || ny >= N || nx >= N || arr[ny][nx] > 0) {
				dir += 1;
				if (dir == 4) {
					dir = 0;
				}
				continue;
			}

			arr[ny][nx] = cnt;
			x = nx;
			y = ny;
			cnt++;
		}
```

## :black_nib: **Review**
- 

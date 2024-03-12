# [백준] 적록색약 (10026번 💛5️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

벡트레킹(DFS)

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 모든 칸에 상하좌우가 같은 색인지 확인한다.
  if) R 근처에 G가 있다면 적록색약 방문확인에 방문처리한다.
2. 적록색약과 아닌 사람의 cnt를 다르게한다.
```

- 깊이우선탐색: 상하좌우에 존재하는 같은 색을 한 블록 처리 <br/>
 ⭐ 적록색약의 경우 R과 G는 같은 블록으로 처리 <br/>
```cpp
void Check_B(int y, int x) {  // 적록색약 방문처리 DFS
	if (visited_B[y][x]) {
		return;
	}

	visited_B[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
			continue;
		}

		if (picture[y][x] == 'R' || picture[y][x] == 'G') {
			if (picture[ny][nx] == 'R' || picture[ny][nx] == 'G') {
				Check_B(ny, nx);
			}
		}
		else if(picture[ny][nx] == picture[y][x]) {	 // 파란색
			Check_B(ny, nx);
		}
	}
}
```

## :black_nib: **Review**

- 재귀함수에 return 없으면 너무 깊게 들어가서 stackoverflow난다.
- 근데 왜 이전 문제는 return없어도 됐을까.. 의문

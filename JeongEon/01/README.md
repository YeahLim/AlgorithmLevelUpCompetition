# [백준] 숨바꼭질 3 (13549번 💛5️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

너비우선탐색, DP

## ⏲️**Time Complexity**

$O(100000)$

## :round_pushpin: **Logic**

- 너비우선탐색: 수빈이의 위치에서 +1, -1, *2를 했을 때 동생의 위치에 도착하는지 확인 <br/>
  +1, -1 : sec + 1 <br/>
  *2 : sec <br/>
  ⭐ 방문확인 배열에 -1로 초기화 하고, sec를 넣어 동일한 수에 도착해도 더 작은 sec가 나오면 저장할 수 있도록 한다. <br/>
  
  ```
	for (int i = 0; i < 3; i++) {
		int nx = x;
		if (i == 2) {
			nx *= 2;
		}
		else {
			nx += dx[i];
		}

  		if (nx < 0 || nx > 100000) {
			continue;
		}

  		if (i == 2 && (visited[nx] > sec || visited[nx] == -1)) {
			q.push({ nx, sec });
			visited[nx] = sec;
		}
		else if (visited[nx] > sec + 1 || visited[nx] == -1) {
			q.push({ nx, sec + 1 });
			visited[nx] = sec + 1;
		}
	}
 ```

## :black_nib: **Review**

- 처음에 그냥 풀었는데, 엄청 틀리고 컴파일 에러 났다.(원인: 헤더 파일 안 넣어서)
- 메모리 초과 -> 방문 처리 안 해서 중복된 수가 queue에 들어가 queue 메모리 초과
- 시간 초과 -> map을 써서 중복 수가 안 나오게 했는데, 오히려 계속 돌아가서 시간 초과
- 그 이후 틀림 -> 동일한 수가 나오는 지 확인 안 함

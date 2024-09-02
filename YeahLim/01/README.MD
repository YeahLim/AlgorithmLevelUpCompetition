# [코드트리] 마법의 숲 탐색
 
## ⏰  **time**
디버깅 포함 4시간

## :pushpin: **Algorithm**
빡구현

## ⏲️**Time Complexity**
$O(N^3)$

## :round_pushpin: **Logic**
1. 골렘이동
    - 방향 벡터 이용
2. 정령이동
    - BFS 응용

3. 디버깅 부분 - 정령 이동할때 visited 처리를 잘못함
    ```java
    while (!q.isEmpty()) {
			Spirit curr = q.poll();
			
			maxRow = Math.max(maxRow, curr.row);
			
			for (int i = 0; i < dr.length; i++) {
				int nr = curr.row + dr[i];
				int nc = curr.col + dc[i];	
				
				if (checkBoundary(nr, nc) || visited[nr][nc]) {
					continue;
				}
				
				// visited[nr][nc] = true; (틀린 코드)
				
				if (forest[curr.row][curr.col] == forest[nr][nc] || ( exit[curr.row][curr.col] && forest[nr][nc] != 0 )) {
					q.offer(new Spirit(nr, nc));
					visited[nr][nc] = true; // (맞은 코드)
				}
			}
		}
    ```

## :black_nib: **Review**
- ㅇㄴ.... 이거 언제 디버깅하지? 하며 겁먹은 나....
- but,,, visited 위치만 바꿔줬는데 바로 통과해버렸다... 이런 초보적인 실수를 하다니... i'm so stupid...
- visited할때 조건문을 잘 살펴야한다... 주의주의주의!!!!!!!!
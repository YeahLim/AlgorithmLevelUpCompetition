# [백준] 마법사 상어와 비바라기 (21610)

## ⏰  **time**
시간 초과

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N^3)$

## :round_pushpin: **Logic**
1. 이동할 때 나머지를 이용했지만 복잡하게 풀어서 디버깅을 오래했다....
   ```
      int nx = cloud.x + dx[direction]*length;
			int rest = nx % N;
			nx = nx >= N ? rest : nx;
			nx = nx < 0 ? N + rest : nx;
			nx = nx == N ? 0 : nx;
   ```
   - 다음부터는 처음부터 바로 양수를 바꾸는 방법을 이용하자
    ```
       int nx = (cloud.x + dx[direction]*length + length * N) % N;
    ```

2. 시간복잡도를 줄이기 위해 `index`를 이용했다. 하지만 디버깅 시 유의필요
   ```
   // 구름 인덱스 순으로 정렬
		Collections.sort(clouds, (a, b) -> {
			if (a.x == b.x) {
				return a.y - b.y;
			}
			return a.x - b.x;
		});
		
		int index = 0; // 기존 구름의 인덱스
  ```
## :black_nib: **Review**
- 구현 재활...

# [백준] Puyo Puyo (11559)

## ⏰  **time**
시간초과

## :pushpin: **Algorithm**
시뮬레이션

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
1. 뿌요 터뜨리기 : `popPuyo()`
- BFS를 이용해, 4개 이상의 뿌요가 모여있는 경우를 찾아 제거한다.

2. 뿌요 떨어뜨리기 : `dropPuyo()`
- 열 기준으로 탐색해, 뿌요를 전부 stack에 넣는다.
- 가장 밑에 있는 빈공간부터 스택에서 뿌요를 채워넣는다.
	- 단, 가장 밑에 있는 빈공간보다 원래 뿌요의 위치가 아래인 경우는 제외한다.

## :black_nib: **Review**
- 뿌요 떨어뜨리기에서 자꾸 예외 케이스가 발생하여 오래걸렸다....
- 다른 사람 코드를 보니 3중 for문을 돌려서 풀었다.
	- 내 코드보다 효율성을 떨어지나, 확실히 가독성은 더 좋은 것 같다.
	```JAVA
		for (int i = 0; i < 6; i++) {
            for (int j = 11; j > 0; j--) {
                if (field[j][i] == '.') {
                    for (int k = j - 1; k >= 0; k--) {
                        if (field[k][i] != '.') {
                            field[j][i] = field[k][i];
                            field[k][i] = '.';
                            break;
                        }
                    }
                }
            }
        }
	```
	- chatGPT를 통해 효율적이고, 가독성있는 코드를 찾았다
	```JAVA
		for (int j = 0; j < M; j++) {
        
        	int bottomEmptyRow = -1; // 바로 아래 빈 공간
        	
			for (int i = N - 1; i >= 0; i--) {
				
				// 맨 처음으로 빈 공간인 경우
				if (map[i][j] == EMPTY && bottomEmptyRow == -1) {
					bottomRow = i;
				}

				// 뿌요를 '바로 아래 빈 공간'으로 옮기기
				if (map[i][j] != EMPTY && bottomEmptyRow != -1) {
					map[bottomRow--][j] = map[i][j];
					map[i][j] = EMPTY;
				}
        	}
    	}
	```
# [코드트리] 루돌프의 반란
 
## ⏰  **time**
약 4시간 정도?

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
**1. 8방향과 4방향을 같이 쓰는 방법**
<br>
    - 아래 코드처럼, 1,3,5,7번의 인덱스에 각각 상,우,좌,하 순으로 넣는다. 그러면, 8방향 데이터를 돌때 1부터 +2씩하면 4방향으로도 이용할 수 있다.
    - 또한 문제에서 4방향에서는 상우좌하 순으로 요구했기 때문에 그 순서대로 넣어준다.
    ```java
        static int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};  // 대, 상, 대, 우, 대, 하, 대, 좌 순으로
        static int dy[] = {-1, 0, 1, 1, -1, 0, 1, -1};
    ```

**2. 기절** 
<br>
    - 이전에는 한턴씩 지나갈때마다 모든 산타를 `기절--`해서 진행했는데, 쓸데없이 데이터를 한번 더 돌아서 사용했다.
    - 이번에는 `기절 = 현재턴 +2`를 해줘서 `현재 턴 == 기절`이 일치할 경우 `기절 = 0`으로 바꿔서 코드가 더 간결해졌다.
    ```java
        // 기절
		santa.fainted = turn + 2;
    ```
    ```java
        // 기절이 해제됨
        if (santa.fainted == turn) {
            santa.fainted = 0;
        }
    ```

**3. 상호작용**
<br>
    - 나는 재귀를 이용해서 로직을 짰다.
    - `산타`의 바뀐 위치에 이미 `다른 산타`가 존재한다면, 재귀를 돌려서 또 `다른 산타`의 위치를 새로 바꿔주고, 또 `또다른 산타`가 그 위치에 있는지 확인한다.
    ```java
    private static void interact(int direction, Santa santa) {
		
		int nx = santa.row + dx[direction];
		int ny = santa.col + dy[direction];
		santa.row = nx;
		santa.col = ny;
		
		// 게임판 밖이면 탈락
		if (outOfBoard(santa.row, santa.col)) {
			santa.failed = true;
			return;
		}
		
		for (int i = 0; i < santaList.length; i++) {
			
			Santa other = santaList[i];
			
			if (santa == other) {
				continue;
			}
			
			if (santa.row == other.row && santa.col == other.col) {
				interact(direction, other);
				break;
			}
		}
	}
    ```

## :black_nib: **Review**
1. 2차원 배열을 같이 사용하려고 했었는데, 구현하다보니 필요없어졌다.
    - 처음에는 2차원이랑 list 같이 구현해서 필요한 것만 쓰고, 이후 안쓰는 것을 지우는 방법도 괜찮은 것 같다.
2. 예시에는 `santa`의 번호가 순서대로 주어져서 정렬을 하지않았는데, 6번 테케에서 틀렸다.
    - `sort` 반드시 잊지않기!
3. 나도 코드짜기 편한 코드를 짜야한다. 어렵게 짜려하지말고, 문제 그대로 코드 짜쟈!
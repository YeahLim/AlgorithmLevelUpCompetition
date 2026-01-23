import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static int R, C, K;
	static int[][] forest; // 0: 빈자리, 1~: 골렘의 인덱스
	static boolean[][] exit;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		K = Integer.parseInt(st.nextToken());
		
		forest = new int[R][C];
		exit = new boolean[R][C];
		
		int answer = 0; // 정령의 최종 위치의 행 번호의 합
		for (int i = 1; i <= K; i++) {
			st = new StringTokenizer(br.readLine());
			
			// 골렘 이동
			Golem golem = moveGolem(new Golem(i, Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken())));
			
//			printForest();
			
			// 정령 이동
			if (golem != null) {
				answer += moveSpirit(new Spirit(golem.row, golem.col));
			}
		}
		
		System.out.println(answer);
	}

	private static void printForest() {
		for (int i = 0; i < forest.length; i++) {
			for (int j = 0; j <forest[0].length; j++) {
				System.out.print(forest[i][j] + " ");
			}
			System.out.println();
		}
		System.out.println("----------");
	}

	private static int moveSpirit(Spirit spirit) {
		
		Queue<Spirit> q = new LinkedList<>();
		q.offer(spirit);
		
		boolean[][] visited = new boolean[R][C];
		visited[spirit.row][spirit.col] = true;
		
		int maxRow = spirit.row;
		
		while (!q.isEmpty()) {
			Spirit curr = q.poll();
			
			maxRow = Math.max(maxRow, curr.row);
			
			for (int i = 0; i < dr.length; i++) {
				int nr = curr.row + dr[i];
				int nc = curr.col + dc[i];	
				
				if (checkBoundary(nr, nc) || visited[nr][nc]) {
					continue;
				}
				
				// visited[nr][nc] = true;
				
				if (forest[curr.row][curr.col] == forest[nr][nc] || ( exit[curr.row][curr.col] && forest[nr][nc] != 0 )) {
					q.offer(new Spirit(nr, nc));
					visited[nr][nc] = true;
				}
			}
		}
		
		return maxRow + 1;
	}

	private static boolean checkBoundary(int row, int col) {
		return row < 0 || row >= R || col < 0 || col >= C;
	}

	private static Golem moveGolem(Golem golem) {
		
		while (true) {
			
			// 남 이동
			if (checkSouth(golem.row, golem.col)) {
				golem.row++;
				continue;
			}
			
			// 서남 이동
			if (checkSouthWest(golem.row, golem.col)) {
				golem.row++;
				golem.col--;
				golem.exit--; // 반시계 방향
				continue;
			}
			
			// 동남 이동
			if(checkSouthEast(golem.row, golem.col)) {
				golem.row++;
				golem.col++;
				golem.exit++; // 시계방향
				continue;
			}
			
			// 이동 불가
			else {
				
				// 골렘이 숲에 잘 위치한 경우
				if (checkLocation(golem)) {
					fillForest(golem);
				}
				
				// 아닌 경우
				else {
					forest = new int[R][C];
					exit = new boolean[R][C];
					return null;
				}
				
				break;
			}
		}
		
		return golem;
	}

	private static boolean checkLocation(Golem golem) {
		return golem.row > 0 && golem.row < R-1 && golem.col > 0 && golem.col < C -1;
	}

	private static void fillForest(Golem golem) {
		
		// 골렘 표시
		forest[golem.row][golem.col] = golem.index;
		for (int i = 0; i < dr.length; i++) {
			forest[golem.row + dr[i]][golem.col + dc[i]] = golem.index;
		}
		
		// 골렘의 출구 표시
		int dir = (golem.exit + 280) % 4;
		exit[golem.row + dr[dir]][golem.col + dc[dir]] = true;
	}

	private static boolean checkSouthEast(int row, int col) {
		
		if (col < 1 || col >= C-2 || row >= R-2) {
			return false;
		}
		
		if (row == -2) {
			return forest[row+2][col+1] == 0;
		}
		
		if (row == -1) {
			return forest[row+1][col+2] == 0 && forest[row+1][col+1] == 0 && forest[row+2][col+1] == 0;
		}
		
		if (row == 0) {
			return forest[row][col+2] == 0 && forest[row+1][col+2] == 0 && forest[row+1][col+1] == 0 && forest[row+2][col+1] == 0;
		}
		
		return forest[row-1][col+1] == 0 && forest[row][col+2] == 0 && forest[row+1][col+2] == 0 && forest[row+1][col+1] == 0 && forest[row+2][col+1] == 0;
	}

	private static boolean checkSouthWest(int row, int col) {
		
		if (col < 2 || col >= C-1 || row >= R-2) {
			return false;
		}
		
		if (row == -2) {
			return forest[row+2][col-1] == 0;
		}
		
		if (row == -1) {
			return forest[row+1][col-2] == 0 && forest[row+1][col-1] == 0 && forest[row+2][col-1] == 0;
		}
		
		if (row == 0) {
			return forest[row][col-2] == 0 && forest[row+1][col-2] == 0 && forest[row+1][col-1] == 0 && forest[row+2][col-1] == 0;
		}
		
		return forest[row-1][col-1] == 0 && forest[row][col-2] == 0 && forest[row+1][col-2] == 0 && forest[row+1][col-1] == 0 && forest[row+2][col-1] == 0;
	}

	private static boolean checkSouth(int row, int col) {
		
		if (col < 1 || col >= C-1 || row >= R-2) {
			return false;
		}
		
		if (row == -2) {
			return forest[row+2][col] == 0;
		}
		
		return forest[row+1][col-1] == 0 && forest[row+2][col] == 0 && forest[row+1][col+1] == 0;
		
	}

}

class Golem {
	int index, exit;
	int row, col; // 골렘 위치 (중심)
	
	public Golem(int index, int start, int exit) {
		this.index = index;
		this.exit = exit;
		this.row = -2;
		this.col = start - 1;
	}
}

class Spirit {
	int row, col;
	
	public Spirit(int row, int col) {
		this.row = row;
		this.col = col;
	}
}
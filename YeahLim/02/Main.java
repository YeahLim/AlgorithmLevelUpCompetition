import java.io.IOException;
import java.util.Scanner;

public class Main {
	
	static int R, C;
	static char[][] board;
	static int answer;
	static int[] dr = {-1, 1, 0, 0};
	static int[] dc = {0, 0, -1, 1};
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		Scanner sc = new Scanner(System.in);
		R = sc.nextInt();
		C = sc.nextInt();
		
		sc.nextLine();
		
		board = new char[R][C];
		for (int i = 0; i < R; i++) {
			String info = sc.nextLine();
			for (int j = 0; j < C; j++) {
				board[i][j] = info.charAt(j);
			}
		}
		
		answer = 1;
		boolean[] visited = new boolean[26];
		visited[board[0][0] - 'A'] = true;
		searchBoard(0, 0, 1, visited);
		System.out.println(answer);
	}

	private static void searchBoard(int r, int c, int count, boolean[] visited) {
		
		
//		System.out.println(board[r][c]);
		
		if (count > answer) {
			answer = count;
		}
		
		for (int i = 0; i < dr.length; i++) {
			int nr = dr[i] + r;
			int nc = dc[i] + c;
			
			if (nr < 0 || nr >= R || nc < 0 || nc >= C) {
				continue;
			}
			
			int curr = board[nr][nc] - 'A';
			if (!visited[curr]) {
				visited[curr] = true;
				searchBoard(nr, nc, count + 1, visited);
				visited[curr] = false;
			}
		}
	}



}
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static final int N = 9, BLANK = 0;
	static int[][] sudoku;
	
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;

		sudoku = new int[N][N];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < N; j++) {
				sudoku[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		findAnswer(0, 0);
		
	}


	private static void printSudoku() {
		
		StringBuilder answer = new StringBuilder();
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				answer.append(sudoku[i][j]).append(" ");
			}
			answer.append("\n");
		}
		
		System.out.println(answer);
		
	}


	private static boolean findAnswer(int row, int col) {
		
		if (col == N) {
			return findAnswer(row+1, 0);
		}
		
		if (row == N) {
			printSudoku();
			return true; // 스도쿠 다 채웠을 경우
		}
		
		
		if (sudoku[row][col] == BLANK) {
			for (int i = 1; i <= N; i++) {

                // 정답이 들어갈 수 있는 경우
				if (checkAnswer(row, col, i)) {
					sudoku[row][col] = i;
					if (findAnswer(row, col+1)) {
						return true;
					}
					sudoku[row][col] = BLANK;
				}
			}

			return false; // 1~9 중 정답이 없는 경우
		}
		
		return findAnswer(row, col+1);

	}



	private static boolean checkAnswer(int row, int col, int num) {
		
		for (int i = 0; i < N; i++) {
			
			// 가로 탐색
			if (sudoku[row][i] == num) {
				return false;
			}
			
			// 세로 탐색
			if (sudoku[i][col] == num) {
				return false;
			}
		}
		
		// 3x3 탐색
		int x = row < 3 ? 1 : row < 6 ? 2 : 3;
		int y = col < 3 ? 1 : col < 6 ? 2 : 3;
		
		for (int i = 3*(x-1); i < 3*x; i++) {
			for (int j = 3*(y-1); j < 3*y; j++) {
				if (sudoku[i][j] == num) {
					return false;
				}
			}
		}
		
		return true;
	}
}
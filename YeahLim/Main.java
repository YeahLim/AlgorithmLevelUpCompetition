import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static final int N = 5;
	static int K, M;
	static int[][] currMap = new int[N][N];
	static List<Integer> piece;
	
	static class Node {
		int x, y;
		int count;
		
		public Node(int x, int y) {
			this.x = x;
			this.y = y;
			this.count = 0;
		}
	}
	
	static class Board{
		int[][] board;
		
		public Board() {
			board = new int[N][N];
		}
		
        private boolean inRange(int y, int x) {
            return 0 <= y && y < N && 0 <= x && x < N;
        }
		
		public int calculateValue() {
			boolean[][] visited = new boolean[N][N];
			int[] dy = {0, 1, 0, -1};
			int[] dx = {1, 0, -1, 0};
			int value = 0;
			
			for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (!visited[i][j]) {

                        Queue<int[]> q = new LinkedList<>();
                        Queue<int[]> trace = new LinkedList<>();
                        q.offer(new int[]{i, j});
                        trace.offer(new int[]{i, j});
                        visited[i][j] = true;
                        while (!q.isEmpty()) {
                            int[] cur = q.poll();
                            for (int k = 0; k < 4; k++) {
                                int ny = cur[0] + dy[k], nx = cur[1] + dx[k];
                                if (inRange(ny, nx) && board[ny][nx] == board[cur[0]][cur[1]] && !visited[ny][nx]) {
                                    q.offer(new int[]{ny, nx});
                                    trace.offer(new int[]{ny, nx});
                                    visited[ny][nx] = true;
                                }
                            }
                        }
                        if (trace.size() >= 3) {
                            value += trace.size();
                            while (!trace.isEmpty()) {
                                int[] t = trace.poll();
                                board[t[0]][t[1]] = 0;
                            }
                        }
                    }
                }
            }
			
			return value;
		}

		public Board rotate(int x, int y, int degree) {
			Board newBoard = new Board();
			for (int i = 0; i < N; i++) {
				newBoard.board[i] = currMap[i].clone();
			}
			
//			System.out.println("before_ x:" + x + ", y: " + y + ", d: " + degree);
//			printMap(newBoard.board);
			
			for (int d = 0; d < degree; d--) {
				int temp = newBoard.board[x + 0][y + 0];
				newBoard.board[x + 0][y + 0] = newBoard.board[x + 2][y + 0];
				newBoard.board[x + 2][y + 0] = newBoard.board[x + 2][y + 2];
				newBoard.board[x + 2][y + 2] = newBoard.board[x + 0][y + 2];
				newBoard.board[x + 0][y + 2] = temp;
				temp = newBoard.board[x + 0][y + 1];
				newBoard.board[x + 0][y + 1] = newBoard.board[x + 1][y + 0];
				newBoard.board[x + 1][y + 0] = newBoard.board[x + 2][y + 1];
				newBoard.board[x + 2][y + 1] = newBoard.board[x + 1][y + 2];
				newBoard.board[x + 1][y + 2] = temp;
			}

//			System.out.println("after_");
//			printMap(newBoard.board);
			
			return newBoard;
		}

		private void printMap(int[][] map) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					System.out.print(map[i][j] + " ");
				}
				System.out.println();
			}
			System.out.println("-------");
		}

		public void fill(List<Integer> piece) {
			
			for (int j = 0; j < N; j++) {
				for (int i = N - 1; i >= 0; i--) {
					
					if (piece.isEmpty()) {
						break;
					}
					
					if (board[i][j] == 0) {
						board[i][j] = piece.remove(0);
					}
				}
			}
			
		}
		
		
	}
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		K = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		Board board = new Board();
		
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < N; j++) {
				currMap[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		piece = new LinkedList<>();
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < M; i++) {
			piece.add(Integer.parseInt(st.nextToken()));
		}
		
		
		while (K-- > 0) {
			
			int maxValue = 0;
			Board currBoard = null;
			
			for (int d = 1; d <= 3; d++) { // 2. 최소 각도 순
				for (int i = 0; i <= N - 3; i++) { // 3. 열이 작은 순
					for (int j = 0; j <= N - 3; j++) { // 4. 행이 작은 순
						
						Board rotatedBoard = board.rotate(i, j, d); // 회전
						int value = rotatedBoard.calculateValue(); // 1차 유물 찾기
						
						// 1. 유물 가치 최대 순
						if (maxValue < value) {
							maxValue = value;
							currBoard = rotatedBoard;
						}
						
					}
				}
			}
			
			// 유물을 획득할 수 없는 경우
			if (currBoard == null) {
				break;
			}
			
			board = currBoard;
			
			while (true) {
				board.fill(piece);
				int newValue = board.calculateValue();
				if (newValue == 0) {
					break;
				}
				maxValue += newValue;
			}
			
			System.out.println(maxValue + " ");
		}		
	}
	
	

}


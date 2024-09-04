import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static final int N = 5;
	static int K, M;
	static int[][] map = new int[N][N];
	static List<Integer> piece;
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		K = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < N; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		piece = new ArrayList<>();
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < M; i++) {
			piece.add(Integer.parseInt(st.nextToken()));
		}
		
		
		while (K-- > 0) {
			
			// 회전
			printMap(map);
			map = rotate();
			printMap(map);
			// 유물 1차 획득
			
			
			// 빈자리에 유물 조각 채우고
			
			// 유물 2차 획득
		}
		// 종료되는 턴에 아무 값도 출력하지 않음
		
	}

	private static int[][] rotate() {
		
		PriorityQueue<RotateInfo> pq = new PriorityQueue<>();
		for (int i = 0; i <= 2; i++) {
			for (int j = 0; j <= 2; j++) {
				
				// 시계방향으로 90도 회전
				int[][] newMap = cloneMap(map);
				for (int d = 1; d < 4; d++) {
//					printMap(newMap);
					newMap = rotateMap(newMap, i, j);
//					printMap(newMap);
					pq.add(new RotateInfo(newMap, d, i, j));
				}
			}
		}		
		
		return pq.poll().map;
	}

	private static void printMap(int[][] map) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print(map[i][j] + " ");
			}
			System.out.println();
		}
		System.out.println("------------");
	}

	private static int[][] rotateMap(int[][] map, int x, int y) {
		
		int[][] newMap = cloneMap(map);
		
		for (int i = x; i < x + 3; i++) {
			for (int j = y; j < y + 3; j++) {
				newMap[i][j] = map[3 - j - 1][i];
			}
		}
		newMap[x+1][y+1] = map[x+1][y+1]; 
		return newMap;
	}

	private static int[][] cloneMap(int[][] map) {
		
		int[][] newMap = new int[N][N];
		for (int i = 0; i < N; i++) {
			newMap[i] = map[i].clone();
		}
		return newMap;
	}

}

class RotateInfo implements Comparable<RotateInfo>{
	int[][] map;
	int value, degree, row, col;
	
	public RotateInfo(int[][] map, int degree, int row, int col) {
		this.map = map;
		this.degree = degree; // 1: 90, 2: 180, 3:270
		this.row = row + 1;
		this.col = col + 1;
		calculateValue();
	}
	

	private void calculateValue() {
				
	}


	@Override
	public int compareTo(RotateInfo o) {
		
		if (this.value == o.value) {
			
			if (this.degree == o.degree) {
			
				if (this.col == o.col) {					
					return this.row - o.row;
				}
				return this.col - o.col;
			}	
			return this.degree - o.degree;
		}
		return o.value - this.value;
	}
	
	
}
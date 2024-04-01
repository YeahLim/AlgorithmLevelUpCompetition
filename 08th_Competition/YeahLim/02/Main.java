import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


class Main {
	
	static int N, M;
	static int[][] map;
	static int answer = Integer.MAX_VALUE;
	
	public static void main(String[] args) throws IOException {

		// N, M, map 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		map = new int[N][N];
		
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			
			for (int j = 0; j < N; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		
		// M개의 치킨집 선정
		searchChickenRestaurant(0, new ChickenRestaurant[M], 0, 0);
		
		
		// 최소 치킨 거리 출력
		System.out.println(answer);
		
	}

	private static void searchChickenRestaurant(int depth, ChickenRestaurant[] crs, int x, int y) {
		
		if (depth == M) {
			
			// 거리 탐색
			searchDistance(crs);
			
			return;
		}
		
		for (int i = x; i < N; i++) {
			for (int j = (i == x ? y : 0); j < N; j++) {
				
				// 치킨집인 경우
				if (map[i][j] == 2) {
					crs[depth] = new ChickenRestaurant(i, j);
					searchChickenRestaurant(depth + 1, crs, i, j + 1);
				}
			}
		}
		
	}

	private static void searchDistance(ChickenRestaurant[] crs) {
		int total = 0;
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				
				// 집인 경우
				if (map[i][j] == 1) {
					total += getDistance(i, j, crs);
				}
			}
		}
		
		answer = Math.min(total, answer);
	}

	private static int getDistance(int x, int y, ChickenRestaurant[] crs) {
		
		int distance = N * N;
		
		for (int i = 0; i < M; i++) {
			distance = Math.min(distance, Math.abs(x - crs[i].x) + Math.abs(y - crs[i].y));
		}
		
		return distance;
	}

}

class ChickenRestaurant {
	int x, y;
	
	public ChickenRestaurant(int x, int y) {
		this.x = x;
		this.y = y;
}
}
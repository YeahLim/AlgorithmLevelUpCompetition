import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    
	static int N, M;
	static int[][] map;
	static List<Cloud> clouds;
	
	public static void main(String[] args) throws Exception {
        
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
        
        
        // 첫번째 구름 찾기
        clouds = new ArrayList<>();
        clouds.add(new Cloud(N-2, 0));
        clouds.add(new Cloud(N-2, 1));
        clouds.add(new Cloud(N-1, 0));
        clouds.add(new Cloud(N-1, 1));
        
        // M번 이동
        for (int i = 0; i < M; i++) {
//        	System.out.println("#"+(i+1)+"번째 이동");
        	st = new StringTokenizer(br.readLine());
        	
        	// 구름 이동
        	clouds = moveClouds(Integer.parseInt(st.nextToken()) - 1, Integer.parseInt(st.nextToken()));
        	
        	// 비 내리고, 구름 사라지기 
        	cloudsTurnToRain();
        	
        	// 물의 양 증가하기
        	increaseAmountOfWater();
//        	printMap();
        	
        	// 구름 생성
        	clouds = makeClouds();
//        	printMap();
//        	printClouds();
        	
        }
        
        // 물의 합 구하기
        System.out.println(getAmoutOfWater());
         
	}
	
	private static void printClouds() {
		for (int i = 0; i < clouds.size(); i++) {
			System.out.println(clouds.get(i).toString());
		}
		System.out.println("=============");
	}

	private static int getAmoutOfWater() {
		int amount = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				amount += map[i][j];
			}
		}
		return amount;
	}

	private static List<Cloud> makeClouds() {
		
		// 구름 인덱스 순으로 정렬
		Collections.sort(clouds, (a, b) -> {
			if (a.x == b.x) {
				return a.y - b.y;
			}
			return a.x - b.x;
		});
		
		int index = 0; // 기존 구름의 인덱스
		
		
		List<Cloud> newClouds = new ArrayList<>();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				
				// 기존 구름의 위치인 경우
				if (index < clouds.size() && clouds.get(index).x == i && clouds.get(index).y == j) {
					index++;
					continue;
				}
				
				// 물의 양이 2이상인 경우
				if (map[i][j] >= 2) {
					newClouds.add(new Cloud(i, j));
					map[i][j] -= 2;
				}
			}
		}
		
		return newClouds;
	}

	private static void printMap() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print(map[i][j]);
			}
			System.out.println();
		}
		System.out.println("------------");
	}

	private static void increaseAmountOfWater() {
		int[] dx = {-1, -1, 1, 1};
		int[] dy = {-1, 1, -1, 1};
		
		for (int i = 0; i < clouds.size(); i++) {
			Cloud cloud = clouds.get(i);
			
			for (int j = 0; j < dx.length; j++) {
				int nx = cloud.x + dx[j];
				int ny = cloud.y + dy[j];
				
				if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
					continue;
				}
				
				// 바구니에 물이 있는 경우
				if (map[nx][ny] > 0) {
					map[cloud.x][cloud.y]++;
				}
			}
		}
		
	}

	private static void cloudsTurnToRain() {
		for (int i = 0; i < clouds.size(); i++) {
			Cloud cloud = clouds.get(i);
			map[cloud.x][cloud.y]++;
		}
	}

	private static List<Cloud> moveClouds(int direction, int length) {
		int[] dx = {0, -1, -1, -1, 0, 1, 1, 1};
		int[] dy = {-1, -1, 0, 1, 1, 1, 0, -1};
		
		List<Cloud> newClouds = new ArrayList<>();
	
		for (int i = 0; i < clouds.size(); i++) {
			Cloud cloud = clouds.get(i);
			
			int nx = cloud.x + dx[direction]*length;
			int rest = nx % N;
			nx = nx >= N ? rest : nx;
			nx = nx < 0 ? N + rest : nx;
			nx = nx == N ? 0 : nx;
			
			int ny = cloud.y + dy[direction]*length;
			rest = ny % N;
			ny = ny >= N ? rest : ny;
			ny = ny < 0 ? N + rest : ny;
			ny = ny == N ? 0 : ny;
	
			newClouds.add(new Cloud(nx, ny));
		}
	
		return newClouds;
	}
	
}
class Cloud {
	int x, y;
	
	public Cloud(int x, int y) {
		this.x = x;
		this.y = y;
	}

	@Override
	public String toString() {
		return "Cloud [x=" + x + ", y=" + y + "]";
	}
	
	
}

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static int N;
	static List<Fireball>[][] map;
	static List<Fireball>[][] newMap;
	
	public static void main(String[] args) throws IOException {
		
		// N, M, K 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		
		
		// map 초기화
		map = new List[N][N];
		initMap(map);

		while (M-- > 0) {
			st = new StringTokenizer(br.readLine());
			int r = Integer.parseInt(st.nextToken()) - 1;
			int c = Integer.parseInt(st.nextToken()) - 1;
			int m = Integer.parseInt(st.nextToken());
			int s = Integer.parseInt(st.nextToken());
			int d = Integer.parseInt(st.nextToken());
			
			map[r][c].add(new Fireball(r, c, m, s, d));
		}
		
		
		// K번 이돟
		while (K-- > 0) {
			
			// newMap 초기화
			newMap = new List[N][N];
			initMap(newMap);

			
			// 파이어 볼 이동
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					for (int k = 0; k < map[i][j].size(); k++) {
						moveFireball(map[i][j].get(k));
					}
				}
			}
			
			
			// 파이어볼 합체
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (newMap[i][j].size() >= 2) {
						unionFireball(newMap[i][j]);
					}
				}
			}
			
			
			// map -> newMap으로 변경
			for (int i = 0; i < N; i++) {
				map[i] = newMap[i].clone();
			}
			
//			printMap();
		}
		
		
		// 남아있는 파이어볼 질량의 합 출력
		System.out.println(getTotalMass());
	}

	private static void printMap() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print(map[i][j].size());
			}
			System.out.println();
		}
		System.out.println("----------");
	}

	private static int getTotalMass() {
		
		int sum = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < map[i][j].size(); k++) {
					sum += map[i][j].get(k).mass;
				}
			}
		}
		return sum;
	}

	private static void unionFireball(List<Fireball> fireballs) {
		
		
		// 파이어볼에서 필요한 정보 추출
		int row = fireballs.get(0).row;
		int col = fireballs.get(0).col;
		int massSum = fireballs.get(0).mass;
		int speedSum = fireballs.get(0).speed;
		int direction = fireballs.get(0).direction;
		boolean flag = true; // 모든 파이어볼의 방향이 홀수거나 짝수일 경우 true, 아닐경우 false
		
		for (int i = 1; i < fireballs.size(); i++) {
			Fireball fb = fireballs.get(i);
			massSum += fb.mass;
			speedSum += fb.speed;
			
			if (flag && (fb.direction % 2 != direction % 2)) {
				flag = false;
			}
			
		}
		
		// 질량이 0인 파이어볼은 소멸
		if (massSum / 5 == 0) {
			newMap[row][col] = new ArrayList<>();
			return;
		}
		
		// 파이어볼 나누기
		List<Fireball> newFireballs = new ArrayList<>();		
		int dir = flag ? 0 : 1;
		for (int i = 0; i < 4; i++) {
			newFireballs.add(new Fireball(row, col, massSum / 5, speedSum / fireballs.size(), dir));
			dir += 2;
		}
		
		
		// fireballs -> newFireballs로 변경
		newMap[row][col] = newFireballs;
		
	}

	private static void initMap(List<Fireball>[][] map) {
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				map[i][j] = new ArrayList<>();
			}
		}
	}

	private static void moveFireball(Fireball fireball) {
		int[] dx = {-1, -1, 0, 1, 1, 1, 0, -1};
		int[] dy = {0, 1, 1, 1, 0, -1, -1, -1};
		
//		int newRow = (fireball.row + dx[fireball.direction] * (fireball.speed % N) + N) % N;
//		int newCol = (fireball.col + dy[fireball.direction] * (fireball.speed % N) + N) % N;
		int newRow = (fireball.row + dx[fireball.direction] * fireball.speed + (fireball.speed * N)) % N;
		int newCol = (fireball.col + dy[fireball.direction] * fireball.speed + (fireball.speed * N)) % N;
		newMap[newRow][newCol].add(new Fireball(newRow, newCol,fireball.mass, fireball.speed, fireball.direction));
	}

}

class Fireball {
	int row, col;
	int mass, speed, direction;
	
	public Fireball(int row, int col, int mass, int speed, int direction) {
		this.row = row;
		this.col = col;
		this.mass = mass;
		this.speed = speed;
		this.direction = direction;
	}

	@Override
	public String toString() {
		return "Fireball [row=" + row + ", col=" + col + ", mass=" + mass + ", speed=" + speed + ", direction="
				+ direction + "]";
	}

	
	
}
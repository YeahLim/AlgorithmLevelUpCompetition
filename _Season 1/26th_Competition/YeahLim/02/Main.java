import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M;
	static int[][] map;
	static boolean[][] cleaned;

	public static void main(String[] args) throws IOException {
			
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		Robot robot = new Robot(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
		map = new int[N][M];
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < M; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		moveRobot(robot);
		System.out.println(countCleanedRoom());
	}

	private static int countCleanedRoom() {
		int count = 0;
		for (boolean[] cl : cleaned) {
			for (boolean c : cl) {
				if(c) {
					count++;
				}
			}
		}
		return count;
	}

	private static void moveRobot(Robot robot) {
		int[] dr = {-1, 0, 1, 0};
		int[] dc = {0, 1, 0, -1};
		
		cleaned = new boolean[N][M];
		cleaned[robot.r][robot.c] = true;
		
		while (true) {
			
			boolean needClean = false;
			
			// 청소되지않은 빈 칸이 있는 경우
			for (int i = 0; i < dr.length; i++) {
				robot.d = (robot.d + 4 - 1) % 4; // 반시계 방향 회전
				int nr = dr[robot.d] + robot.r;
				int nc = dc[robot.d] + robot.c;
				
				if (nr < 0 || nr >= N || nc < 0 || nc >= M || map[nr][nc] == 1 || cleaned[nr][nc]) {
					continue;
				}
				
				// 청소
				needClean = true;		
				cleaned[nr][nc] = true;
				robot.r = nr;
				robot.c = nc;
				break;
			}
			
			if (needClean) {
				continue;
			}
			
			// 청소되지않은 빈 칸이 없는 경우
			int nr = robot.r + dr[robot.d]*-1;
			int nc = robot.c + dc[robot.d]*-1;
			
			if (nr < 0 || nr >= N || nc < 0 || nc >= M || map[robot.r][robot.c] == 1) {
				break;
			}
			
			robot.r = nr;
			robot.c = nc;
		}
	}

	
}

class Robot {
	int r, c, d;
	
	public Robot(int row, int col, int direction) {
		this.r = row;
		this.c = col;
		this.d = direction;
	}

	@Override
	public String toString() {
		return "Robot [r=" + r + ", c=" + c + ", d=" + d + "]";
	}
}
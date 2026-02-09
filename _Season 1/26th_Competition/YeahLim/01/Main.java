import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

// 7시
public class Main {
	
	static int K, H, W;
	static int[][] map;
	static int[] dx4 = {-1, 0, 1, 0};
	static int[] dy4 = {0, -1, 0, 1};
	static int[] dx8 = {-2, -2, -1, -1, 1, 1, 2, 2};
	static int[] dy8 = {-1, 1, -2, 2, -2, 2, -1, 1};	
	
	public static void main(String[] args) throws IOException {
			
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		K = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		W = Integer.parseInt(st.nextToken());
		H = Integer.parseInt(st.nextToken());
		
		map = new int[H][W];
		for (int i = 0; i < H; i++) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < W; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		System.out.println(moveMonkey());
	}

	private static int moveMonkey() {
		
		Queue<Node> q = new LinkedList<>();
		q.offer(new Node(0, 0, K, 0));
		
		boolean[][][] visited = new boolean[H][W][K+1];
		visited[0][0][K] = true;
		
		while(!q.isEmpty()) {
			Node curr = q.poll();
			
			// 도착
			if (curr.x == H - 1 && curr.y == W - 1) {
				return curr.move;
			}
			
			// 말처럼 움직이는 경우
			if (curr.count > 0) {
				for (int i = 0; i < dx8.length; i++) {
					int nx = curr.x + dx8[i];
					int ny = curr.y + dy8[i];
					if (!isOutOfMap(nx, ny) && map[nx][ny] == 0 && !visited[nx][ny][curr.count-1]) {
						visited[nx][ny][curr.count-1] = true;
						q.offer(new Node(nx, ny, curr.count - 1, curr.move + 1));
					}
				}
			}
			
			// 인접한 곳으로 움직이는 경우
			for (int i = 0; i < dx4.length; i++) {			
				int nx = curr.x + dx4[i];
				int ny = curr.y + dy4[i];
				if (!isOutOfMap(nx, ny) && map[nx][ny] == 0 && !visited[nx][ny][curr.count]) {
					visited[nx][ny][curr.count] = true;
					q.offer(new Node(nx, ny, curr.count, curr.move + 1));
				}
			}
		}
		
		return -1;
	}

	private static boolean isOutOfMap(int nx, int ny) {
		return nx < 0 || nx >= H || ny < 0 || ny >= W;
	}
}

class Node {
	int x, y;
	int count;
	int move;
	
	public Node(int x, int y, int count, int move) {
		this.x = x;
		this.y = y;
		this.count = count;
		this.move = move;
	}
}
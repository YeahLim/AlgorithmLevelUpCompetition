import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M, P, C, D; // 게임판 크기, 게임턴 수, 산타 수, 루돌프 힘, 산타 힘
	static Rudolf rudolf;
	static Santa[] santaList;
	// static int[][] board;
	static int[] score;
	static int turn; // 현재 턴
	static int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};  // 대, 상, 대, 우, 대, 하, 대, 좌 순으로
	static int dy[] = {-1, 0, 1, 1, -1, 0, 1, -1};
	static boolean finished;
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		P = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		D = Integer.parseInt(st.nextToken());
		
		// board = new int[N][N];
		score = new int[P+1];
		
		st = new StringTokenizer(br.readLine());
		int rudolfRow = Integer.parseInt(st.nextToken()) - 1;
		int rudolfCol = Integer.parseInt(st.nextToken()) - 1;
		rudolf = new Rudolf(rudolfRow, rudolfCol);

		santaList = new Santa[P];
		for (int i = 0; i < P; i++) {
			st = new StringTokenizer(br.readLine());
			int no = Integer.parseInt(st.nextToken());
			int row = Integer.parseInt(st.nextToken()) - 1;
			int col = Integer.parseInt(st.nextToken()) - 1;
			santaList[i] = new Santa(no, row, col);
		}
		Arrays.sort(santaList, (a, b) -> a.no - b.no);
		
		turn = 0;
		
		
		
		// M턴만큼 게임 돌리기
		while (turn < M) {
			
			turn++;
//			System.out.println("[" + turn + "번째 turn]");
			
			// 1. 루돌프 이동
			moveRudolf();
//			System.out.println(rudolf);
			
			// 2. 산타들 이동
			moveSantaList();
			
//			printScore();
			
			// 3. 살아있는 산타에게 1점씩 부여
			getScorePerTurn();
			
//			printScore();
			
			// 모든 산타가 탈락한 경우
			if (finished) {
				break;
			}
		}
		
		
		// 각 산타가 얻은 최종 점수 출력
		printScore();
		
	}

	private static void printScore() {
		for (int i = 1; i < score.length; i++) {
			System.out.print(score[i] + " ");
		}
	}

	private static void moveRudolf() {
		
		// 가장 가까운 산타 선택
		Santa selected = selectedSanta();
		
		// 선택된 산타와 가까운 방향 구하고, 그 방향으로 한칸 이동
		int direction = moveToSanta(selected);
		
		// 산타와 충돌
		checkRudolfCrashIntoSanta(direction);
	}

	private static void checkRudolfCrashIntoSanta(int direction) {
		
		for (int i = 0; i < santaList.length; i++) {
			Santa santa = santaList[i];
			
			if (santa.row == rudolf.row && santa.col == rudolf.col) {
				crashIntoSanta(direction, santa);
				break;
			}
		}
		
	}

	private static void crashIntoSanta(int direction, Santa santa) {
		
		// C점 획득
		score[santa.no] += C;
		
		// 루돌프가 이동해온 방향으로 C칸 밀려남
		int nx = santa.row + dx[direction]*C;
		int ny = santa.col + dy[direction]*C;
		santa.row = nx;
		santa.col = ny;

		
		// 게임판 밖이면 탈락
		if (outOfBoard(santa.row, santa.col)) {
			santa.failed = true;
			return;
		}
		
		// 기절
		santa.fainted = turn + 2;
		
		
		// 다른 산타가 있으면 상호작용
		for (int i = 0; i < santaList.length; i++) {
			
			Santa other = santaList[i];
			
			if (santa == other) {
				continue;
			}
			
			
			if (santa.row == other.row && santa.col == other.col) {
				interact(direction, other);
				break;
			}
		}
	}

	private static void interact(int direction, Santa santa) {
		
		int nx = santa.row + dx[direction];
		int ny = santa.col + dy[direction];
		santa.row = nx;
		santa.col = ny;
		
		// 게임판 밖이면 탈락
		if (outOfBoard(santa.row, santa.col)) {
			santa.failed = true;
			return;
		}
		
		for (int i = 0; i < santaList.length; i++) {
			
			Santa other = santaList[i];
			
			if (santa == other) {
				continue;
			}
			
			if (santa.row == other.row && santa.col == other.col) {
				interact(direction, other);
				break;
			}
		}
	}

	private static boolean outOfBoard(int row, int col) {
		return (row < 0 || row >= N || col < 0 || col >= N);
	}

	private static int moveToSanta(Santa santa) {
		
		int minDist = N*N*N;
		int direction = -1;
		for (int i = 0; i < dx.length; i++) {
			int nx = dx[i] + rudolf.row;
			int ny = dy[i] + rudolf.col;
			
			if (outOfBoard(nx, ny)) {
				continue;
			}
			
			santa.calculateDistance(nx, ny);
			if (minDist > santa.dist) {
				minDist = santa.dist;
				direction = i;
			}			
		}
		
		rudolf.row += dx[direction];
		rudolf.col += dy[direction];
		
		return direction;
	}

	private static Santa selectedSanta() {
		
		// 가장 가까운 산타 -> row가 큰 순 -> col이 큰 순
		PriorityQueue<Santa> pq = new PriorityQueue<>((a, b) -> {
			if (a.dist == b.dist) {
				
				if (a.row == b.row) {
					return b.col - a.col;
				}
				
				return b.row - a.row;
			}
			
			return a.dist - b.dist;
		});
		
		
		for (int i = 0; i < santaList.length; i++) {
			Santa curr = santaList[i];
			
			if (curr.failed) {
				continue;
			}
			
			curr.calculateDistance(rudolf.row, rudolf.col);
			pq.offer(curr);
			
		}
		
		return pq.poll();
	}

	private static void moveSantaList() {
		for (int i = 0; i < santaList.length; i++) {
		
			Santa santa = santaList[i];
			
			// 기절이 해제됨
			if (santa.fainted == turn) {
				santa.fainted = 0;
			}
			
			// 기절하거나 탈락한 경우
			if (santa.fainted != 0 || santa.failed) {
				continue;
			}
			
			// 산타 이동
			int direction = moveSanta(santa);
//			System.out.println(santa);
			
			// 산타가 루돌프에게 충돌
			if (santa.row == rudolf.row && santa.col == rudolf.col) {
				crashIntoRudolf(direction, santa);
//				System.out.println("루돌푸와 충돌이후");
//				System.out.println(santa);
			}
			
		}
		
	}

	private static void crashIntoRudolf(int direction, Santa santa) {
		
		// D점 획득
		score[santa.no] += D;
		
		// 산타가 이동해온 반대 방향으로 direction 변경
		if (direction < 4) {
			direction += 4; // 상 -> 하, 우 -> 좌
		}
		else {
			direction -= 4; // 하 -> 상, 좌 -> 우
		}
		
		// D만큼 이동
		int nx = santa.row + dx[direction]*D;
		int ny = santa.col + dy[direction]*D;
		santa.row = nx;
		santa.col = ny;
		
		// 게임판 밖이면 탈락
		if (outOfBoard(santa.row, santa.col)) {
			santa.failed = true;
			return;
		}
		
		// 기절
		santa.fainted = turn + 2;
		
		// 다른 산타가 있으면 상호작용
		for (int i = 0; i < santaList.length; i++) {
			
			Santa other = santaList[i];
			
			if (santa == other) {
				continue;
			}
			
			
			if (santa.row == other.row && santa.col == other.col) {
				interact(direction, other);
				break;
			}
		}
		
	}

	private static int moveSanta(Santa santa) {
		
		rudolf.calculateDistance(santa.row, santa.col);
		int minDist = rudolf.dist;
		int direction = -1;
		
		for (int i = 1; i < dx.length; i+=2) {
			int nx = santa.row + dx[i];
			int ny = santa.col + dy[i];
			
			if (outOfBoard(nx, ny) || checkOtherSanta(nx, ny)) {
				continue;
			}
			
			rudolf.calculateDistance(nx, ny);
			if (minDist > rudolf.dist) {
				minDist = rudolf.dist;
				direction = i;
			}
		}
		
		if (direction == -1) {
			return -1;
		}
		
		santa.row += dx[direction];
		santa.col += dy[direction];
		
		return direction;
	}

	private static boolean checkOtherSanta(int nx, int ny) {
		for (int i = 0; i < santaList.length; i++) {
			Santa other = santaList[i];
			
			if (nx == other.row && ny == other.col) {
				return true;
			}
		}
		return false;
	}

	private static void getScorePerTurn() {
		
		finished = true;
		for (int i = 0; i < santaList.length; i++) {
			Santa santa = santaList[i];
			
			if (!santa.failed) {
				score[santa.no] += 1;
				finished = false;
			}
		}
		
	}
}

class Rudolf {
	int row, col;
	int dist;
	
	public Rudolf(int row, int col) {
		this.row = row;
		this.col = col;
	}

	@Override
	public String toString() {
		return "Rudolf [row=" + row + ", col=" + col + "]";
	}
	
	public void calculateDistance(int santaRow, int santaCol) {
		this.dist = (santaRow - row)*(santaRow - row) + (santaCol - col)*(santaCol - col);
	}
	
}

class Santa {
	int no;
	int row, col;
	int fainted; // 이 턴까지 기절 상태 (0이면 기절X) 
	boolean failed; // 탈락 여부
	int dist; // 거리
	
	public Santa(int no, int row, int col) {
		this.no = no;
		this.row = row;
		this.col = col;
	}
	
	public void calculateDistance(int rudolfRow, int rudolfCol) {
		this.dist = (rudolfRow - row)*(rudolfRow - row) + (rudolfCol - col)*(rudolfCol - col);
	}

	@Override
	public String toString() {
		return "Santa [no=" + no + ", row=" + row + ", col=" + col + ", fainted=" + fainted + ", dist=" + dist + "]";
	}
	
}
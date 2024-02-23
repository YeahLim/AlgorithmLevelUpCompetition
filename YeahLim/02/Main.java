import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Set;
import java.util.StringTokenizer;

public class Main {
	
	static final int EMPTY = 0;
	static int N;
	static int[][] classroom;
	static Map<Integer, Set<Integer>> map;
	static int[] students;
	static int[] dx = {-1, 0, 0, 1};
	static int[] dy = {0, -1, 1, 0};
	
    
	public static void main(String[] args) throws IOException {
		
        
		// N, students, map, preference 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		
		students = new int[N*N];
		map = new HashMap<>();
		classroom = new int[N][N];
		
		for (int i = 0; i < N*N; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			students[i] = Integer.parseInt(st.nextToken());
			
			Set<Integer> preference = new HashSet<>();
			for (int j = 0; j < 4; j++) {
				preference.add(Integer.parseInt(st.nextToken()));
			}
			map.put(students[i], preference);
		
			
			// 학생 자리 정하기 
			Seat seat = searchPlace(preference);
			classroom[seat.row][seat.col] = students[i]; 
		}
			
		
		// 자리 만족도 구하기
		int answer = getSatisfication();
		System.out.println(answer);

	}

    
	private static int getSatisfication() {
		
		
		int satisfication = 0;
	
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				
				int student = classroom[i][j];
				int count = 0;
				
				for (int k = 0; k < dx.length; k++) {
					int nx = dx[k] + i;
					int ny = dy[k] + j;
					
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
						continue;
					}
					
					// 인접한 학생이 좋아하는 학생인 경우
					if (map.get(student).contains(classroom[nx][ny])) {
						count++;
					}
					
					
				}
				
                // 선호도 추가
				switch(count) {
					case 1 : 
						satisfication += 1;
						break;
					case 2 :
						satisfication += 10;
						break;
					case 3 :
						satisfication += 100;
						break;
					case 4 :
						satisfication += 1000;
						break;
				}
			}
		}
		
		return satisfication;
	}

    
	private static Seat searchPlace(Set<Integer> preference) {
		
		PriorityQueue<Seat> pq = new PriorityQueue<>();

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				
				// 자리가 없을 경우
				if (classroom[i][j] != EMPTY) {
					continue;
				}
				
				Seat seat = new Seat(i, j);
				
				for (int k = 0; k < dx.length; k++) {
					int nx = dx[k] + i;
					int ny = dy[k] + j;
					
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
						continue;
					}
					
                    
                    // 자리가 빈 경우
					if (classroom[nx][ny] == EMPTY) {
						seat.empty++;
					}
					
                    
                    // 좋아하는 사람의 자리인 경우
					if (preference.contains(classroom[nx][ny])) {
						seat.like++;
					}
				}
				
				pq.offer(seat);
			}
		}
		
		return pq.poll();
		
	}
}


class Seat implements Comparable<Seat> {
	int row, col;
	int like;
	int empty;
	
	public Seat(int row, int col) {
		this.row = row;
		this.col = col;
	}

	@Override
	public int compareTo(Seat o) {
		
		// 1. 좋아하는 학생이 가장 많이 인접한 칸
		if (this.like == o.like) {
			
			// 2. 인접한 칸 중에서 가장 많이 비어있는 칸
			if (this.empty == o.empty) {
				
				// 3. 행의 번호가 가장 작은 칸
				if (this.row == o.row) {
					
					// 4. 열의 번호가 가장 작은 칸
					return this.col - o.col;
				}
				
				return this.row - o.row;
			}
			
			return o.empty - this.empty;
		}
		
		return o.like - this.like;
	}
	
}

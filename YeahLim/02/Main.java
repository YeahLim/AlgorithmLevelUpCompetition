import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int M = Integer.parseInt(br.readLine());
		
		int[][] cost = new int[N][N];
		final int MAX_COST = 100_001 * N;
		for (int i = 0; i < N; i++) {
			Arrays.fill(cost[i], MAX_COST);	
			cost[i][i] = 0;
		}
		
		StringTokenizer st;
		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken()) - 1;
			int b = Integer.parseInt(st.nextToken()) - 1;
			int c = Integer.parseInt(st.nextToken());
			
			cost[a][b] = Math.min(cost[a][b], c);
		}
		
		for (int k = 0; k < N; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					cost[i][j] = Math.min(cost[i][j], cost[i][k] + cost[k][j]);
				}
			}
		}
		
		for (int[] cst : cost) {
			for (int c : cst) {
				System.out.print((c == MAX_COST ? 0 : c) + " ");
			}
			System.out.println();
		}
	}
}
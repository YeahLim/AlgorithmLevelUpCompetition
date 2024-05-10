import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		
		int[] heights = new int[N+1];
		st = new StringTokenizer(br.readLine());
		for (int i = 1; i <= N; i++) {
			heights[i] = Integer.parseInt(st.nextToken());
		}
		
		int[] heightBounds = new int[N+2];
		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int start = Integer.parseInt(st.nextToken());
			int end = Integer.parseInt(st.nextToken());
			int height = Integer.parseInt(st.nextToken());
			
			// 누적합을 위해 가장 앞부분에 height만큼 더해주고, 범위 바로 다음 부분에 height만큼 빼준다
			heightBounds[start] += height;
			heightBounds[end+1] -= height;
		}
		
		
		// 누적합으로 heightBounds 구하고, heights에 heightBounds를 더해 변동된 heights 구하기
		for (int i = 1; i <= N; i++) {
			heightBounds[i] += heightBounds[i-1];
			heights[i] += heightBounds[i];
			System.out.print(heights[i] + " ");
		}

		
	}
}
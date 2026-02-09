import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Set;
import java.util.StringTokenizer;

public class Main {
	

	public static void main(String[] args) throws IOException {
		
		// N, level 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int[] level = new int[N];
		
		for (int i = 0; i < N; i++) {
			level[i] = Integer.parseInt(br.readLine());
		}
		
		
		Arrays.sort(level);
		
		// 아무 의견이 없을 경우
		if (N == 0) {
			System.out.println(0);
			return;
		}
		
		// 평균 구하기
		int num = (int) Math.round(N * 0.15);
		int total = 0;
		for (int i = num; i < N - num; i++) {
			total += level[i];
		}
		
		System.out.println(Math.round(total / (N - num*2.0)));
	}

	
}

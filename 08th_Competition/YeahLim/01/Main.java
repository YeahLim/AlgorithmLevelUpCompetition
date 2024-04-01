import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M;
	static StringBuilder answer = new StringBuilder();
	
	public static void main(String[] args) throws IOException {
		
		// N, M 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		searchArray(0, new StringBuilder());
		
		System.out.println(answer);
	}

	private static void searchArray(int depth, StringBuilder sb) {
		
		if (depth == M) {
			answer.append(sb).append("\n");
			return;
		}
		
		for (int i = 1; i <= N; i++) {
			sb.append(i).append(" ");
			searchArray(depth + 1, sb);
			sb.delete(sb.length() - 2, sb.length());
		}
		
	}

	
	
}
import java.io.IOException;
import java.util.Scanner;

public class Main {

	static int N, K;
	static String[] words;
	static int answer;
	
	public static void main(String[] args) throws IOException {
			
		// 변수 초기화
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		K = sc.nextInt();
		
		words = new String[N];
		
		for (int i = 0; i < N; i++) {
			words[i] = sc.next();
		}
		
		
		// 가르칠 수 있는 알파벳의 개수가 5개 이하면
		if (K < 5) {
			System.out.println(0);
			return;
		} 
		// 모든 알파벳을 다 카르칠 수 있다면
		else if (K == 26) {
			System.out.println(N);
			return;
		}
		
		boolean[] visited = new boolean[26];
		visited['a' - 'a'] = true;
		visited['n' - 'a'] = true;
		visited['t' - 'a'] = true;
		visited['i' - 'a'] = true;
		visited['c' - 'a'] = true;
		
		searchWords(5, 0, visited);		
		
		System.out.println(answer);
	}

	private static void searchWords(int depth, int start, boolean[] visited) {
		
		if (depth == K) {
			
			// 배울 수 있는 단어의 개수 구하기
			int count = 0;
			for (String word : words) {
				count++;
				for (int j = 4; j < word.length() - 4; j++) {
					if (!visited[word.charAt(j) - 'a']) {
						count--;
						break;
					}
				}
			}
			
			answer = Math.max(answer, count);
			
			return;
		}
		
		for (int i = start; i < 26; i++) {
			
			if (!visited[i]) {
				visited[i] = true;
				searchWords(depth + 1, i, visited);
				visited[i] = false;
			}
		}
	}

}
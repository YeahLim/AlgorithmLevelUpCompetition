import java.util.*;
import java.io.*;

class Main {
	
	static int N, M;
	static int[] array;
	static List<String> list;
	
	public static void main(String[] args) throws IOException {
		
		// N, M 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());


		// array 초기화
		array = new int[N];
		
		st = new StringTokenizer(br.readLine());
		
		for (int i = 0; i < N; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		
		Arrays.sort(array); // 오름차순 정렬
		
		
		// 수열 구하기
		list = new ArrayList<>();
		permutation(0, new boolean[N], new int[M]);
	
		
		// 출력
		for (String arr : list) {
			System.out.println(arr);
		}
		
	}

	private static void permutation(int count, boolean[] visited, int[] temp) {
		
		if (count == M) {
			
			String str = "";
			for (int n : temp) {
				str += n + " ";
			}
			list.add(str);
			
			return;
		}
		
	
		int before = 0; // 이전 값
		
		for (int i = 0; i < array.length; i++) {
			
			if (visited[i] || before == array[i]) {
				continue;
			}
			
			visited[i] = true;
			
			temp[count] = array[i]; 
			before = array[i]; // 이전값에 저장
			permutation(count+1, visited, temp);
			
			visited[i] = false;
		}
		
	}

}

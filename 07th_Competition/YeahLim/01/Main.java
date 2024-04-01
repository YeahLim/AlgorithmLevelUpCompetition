import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {
	
	static int N, M;
	static List<int[]> answer = new ArrayList<>();
	
	public static void main(String[] args) throws IOException {
		
		// N, M 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] info = br.readLine().split(" ");
		N = Integer.parseInt(info[0]);
		M = Integer.parseInt(info[1]);
		
		// 중복 순열
		permutation(1, 0, new int[M]);

		// 출력
		for (int[] arr : answer) {
			for (int i = 0; i < M; i++) {
				System.out.print(arr[i] + " ");
			}
			System.out.println();
		}
	}

	private static void permutation(int index, int count, int[] array) {
		
		if (count == M) {
			answer.add(array.clone());
			return;
		}
		
		for (int i = index; i <= N; i++) {
			array[count] = i;
			permutation(i, count + 1, array);
		}
		
	}

	
}
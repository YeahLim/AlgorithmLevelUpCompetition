import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String first = br.readLine();
		String second = br.readLine();
		
		int[][] dp = new int[first.length()+1][second.length()+1];
		
		for (int i = 0; i < first.length(); i++) {
			for (int j = 0; j < second.length(); j++) {
				
				if (first.charAt(i) == second.charAt(j)) {
					dp[i+1][j+1] = dp[i][j] + 1;
				}
				else {
					dp[i+1][j+1] = Math.max(dp[i+1][j], dp[i][j+1]);
				}
			}
		}
		
		System.out.println(dp[first.length()][second.length()]);
		
	}


}
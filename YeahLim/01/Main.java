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

	static int N, M;
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		M = Integer.parseInt(br.readLine());
		
		List<Node>[] graph = new List[N+1];
		for (int i = 1; i <= N; i++) {
			graph[i] = new ArrayList<>();
		}
		
		StringTokenizer st;
		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int c = Integer.parseInt(st.nextToken());
			
			graph[a].add(new Node(b, c));
		}
		
		st = new StringTokenizer(br.readLine());
		int start = Integer.parseInt(st.nextToken());
		int arrival = Integer.parseInt(st.nextToken());

		int[] cost = new int[N+1];
		Arrays.fill(cost, 100_000_001);
		
		Queue<Node> q = new PriorityQueue<>((a, b) -> a.cost - b.cost);
		q.offer(new Node(start, 0));
		
		cost[start] = 0;
		
		while (!q.isEmpty()) {
			Node curr = q.poll();
			
			if (cost[curr.index] < curr.cost) {
				continue;
			}
			
			for (Node next : graph[curr.index]) {
				if (cost[next.index] > curr.cost + next.cost) {
					cost[next.index] = curr.cost + next.cost;
					q.offer(new Node(next.index, cost[next.index]));
				}
			}
		}
		System.out.println(cost[arrival]);
	}
}

class Node {
	int index;
	int cost;
	
	public Node(int index, int cost) {
		this.index = index;
		this.cost = cost;
	}
}
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static final int INF = 11 * 20000;
	static class Node {
		
		int node;
		int dist;
		
		public Node(int node, int dist) {
			this.node = node;
			this.dist = dist;
		}
	}
	
	public static void main(String[] args) throws IOException {
		
		// 변수 초기화
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int V = Integer.parseInt(st.nextToken());
		int E = Integer.parseInt(st.nextToken());
		
		int start = Integer.parseInt(br.readLine());
		
		List<Node>[] graph = new List[V+1];
		
		for (int i = 0; i <= V; i++) {
			graph[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < E; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int c = Integer.parseInt(st.nextToken());
			
			graph[a].add(new Node(b, c));
		}
		
		int[] dist = new int[V+1];
		
		for (int i = 0; i <= V; i++) {
			dist[i] = INF;
		}
		
		dist[start] = 0;
		
		
		// 다익스트라로 최소 경로 구하기
		PriorityQueue<Node> pq = new PriorityQueue<>( (a, b) -> a.dist - b.dist);
		pq.offer(new Node (start, 0));
		
		while (!pq.isEmpty()) {
			Node curr = pq.poll();
			
			if (dist[curr.node] < curr.dist) {
				continue;
			}
			
			for (Node next : graph[curr.node]) {				
				if (dist[next.node] > curr.dist + next.dist) {
					dist[next.node] = curr.dist + next.dist;
					pq.offer(new Node(next.node, dist[next.node]));
				}
			}
		}
		
		
		// 출력
		for (int i = 1; i <= V; i++) {
			System.out.println(dist[i] == INF ? "INF" : dist[i]);
		}
	}
}
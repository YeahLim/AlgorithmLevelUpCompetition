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

	static int N, E;
	static List<Node>[] graph;
	static final int  MAX_NUM = 160_000_001;
	
	public static void main(String[] args) throws IOException {
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		E = Integer.parseInt(st.nextToken());
		
		graph = new List[N+1];
		for (int i = 1; i <= N; i++) {
			graph[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < E; i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int c = Integer.parseInt(st.nextToken());
			
			graph[a].add(new Node(b, c));
			graph[b].add(new Node(a, c));
		}
		
		st = new StringTokenizer(br.readLine());
		int firstLayover = Integer.parseInt(st.nextToken());
		int secondLayover = Integer.parseInt(st.nextToken());
		
		int[] distFromStart = searchRoute(1);
		int[] distFromFirstLayover = searchRoute(firstLayover);
		int[] distFromSecondLayover = searchRoute(secondLayover);
		
		int firstRoute = distFromStart[firstLayover] + distFromFirstLayover[secondLayover] + distFromSecondLayover[N];
		int secondRoute = distFromStart[secondLayover] + distFromSecondLayover[firstLayover] + distFromFirstLayover[N];
		
		int answer = Math.min(firstRoute, secondRoute);
		
		System.out.println(answer >= MAX_NUM ? -1 : answer);
	}

	private static int[] searchRoute(int start) {

		int[] dist = new int[N+1];
		Arrays.fill(dist, MAX_NUM);
		dist[start] = 0;
		
		Queue<Node> pq = new PriorityQueue<>();
		pq.offer(new Node(start, 0));
		
		while (!pq.isEmpty()) {
			Node curr = pq.poll();
			
			if (dist[curr.index] < curr.dist) {
				continue;
			}
			
			for (Node next : graph[curr.index]) {
				if (dist[next.index] > curr.dist + next.dist) {
					dist[next.index] = curr.dist + next.dist;
					pq.offer(new Node(next.index, dist[next.index]));
				}
			}
		}
		
		return dist;
	}
}

class Node implements Comparable<Node>{
	int index;
	int dist;
	
	public Node(int index, int dist) {
		this.index = index;
		this.dist = dist;
	}

	@Override
	public int compareTo(Node o) {
		return this.dist - o.dist;
	}
}
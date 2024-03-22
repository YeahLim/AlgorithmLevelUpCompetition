import java.util.*;
import java.io.*;
class Node implements Comparable<Node>{
    int end;
    int weight;

    public Node(int end, int weight){
        this.end = end;
        this.weight = weight;
    }

    @Override
    public int compareTo(Node o){
        return weight - o.weight;
    }
}
public class March22_1753 {
    public static int[] dist;
    public static List<Node>[] list;
    public static boolean[] checked;

    public static int v, e, k;


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        v = Integer.parseInt(st.nextToken()); // 정점의 개수
        e = Integer.parseInt(st.nextToken()); // 간선의 개수
        k = Integer.parseInt(br.readLine()); // 시작 정점의 번호

        dist = new int[v + 1];
        checked = new boolean[v + 1];
        for (int i = 0; i < v + 1; i++) {
            dist[i] = Integer.MAX_VALUE;
        }

        list = new ArrayList[v + 1];
        for(int i = 0 ; i < v + 1 ; i++){
            list[i] = new ArrayList<>();
        }
        for(int i = 0 ; i < e ; i++){
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            list[s].add(new Node(e,w));
        }

        dijkstra(k);
        for(int i = 1; i < v + 1 ; i++){
            if(dist[i] == Integer.MAX_VALUE){
                System.out.println("INF");
            }else{
                System.out.println(dist[i]);
            }
        }
    }
    public static void dijkstra(int n){
        PriorityQueue<Node> queue = new PriorityQueue<>();
        queue.add(new Node(n,0));
        dist[n] = 0;

        while(!queue.isEmpty()){
            Node curNode = queue.poll();
            int cur = curNode.end;

            if(checked[cur]){
                continue;
            }
            checked[cur] = true;

            for(Node node : list[cur]){
                if(dist[node.end] > dist[cur] + node.weight){
                    dist[node.end] = dist[cur] + node.weight;
                    queue.add(new Node(node.end, dist[node.end]));
                }
            }
        }
    }
}


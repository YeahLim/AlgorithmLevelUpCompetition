import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static int[] parent;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();

        for(int testcase=1;testcase<=T;testcase++){
            sb.append("Scenario "+testcase+":\n");
            int n = Integer.parseInt(br.readLine());
            parent = new int[n];

            for(int i=1;i<parent.length;i++){
                parent[i] = i;
            }

            int k = Integer.parseInt(br.readLine());

            for(int i=0;i<k;i++){
                StringTokenizer st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                union(a,b);
            }

            int m = Integer.parseInt(br.readLine());

            for(int i=0;i<m;i++){
                StringTokenizer st = new StringTokenizer(br.readLine());
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());

                if(getParent(a) == getParent(b)){
                    sb.append("1\n");
                }else{
                    sb.append("0\n");
                }
            }

            sb.append("\n");
        }

        System.out.print(sb);
    }

    public static int getParent(int a){
        if(parent[a] == a){
            return parent[a];
        }

        parent[a] = getParent(parent[a]);

        return parent[a];
    }

    public static void union(int a,int b){
        int pa = getParent(a);
        int pb = getParent(b);

        if(pa < pb){
            parent[pb] = pa;
        }else{
            parent[pa] = pb;
        }
    }
}
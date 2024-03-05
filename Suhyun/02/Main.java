import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    final static int ROOT = 0;
    final static String DEPTH = "--";

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        AntCave root = new AntCave("",ROOT);

        for(int n=1;n<=N;n++){
            String[] input = br.readLine().split(" ");
            int K = Integer.parseInt(input[0]);

            AntCave curr = root;

            for(int depth=1; depth <= K; depth++){
                AntCave next = curr.next.get(input[depth]);

                if(next == null){
                    next = new AntCave(input[depth],depth);

                    curr.next.put(next.feed,next);
                }

                curr = next;
            }
        }

        printCave(root);
    }

    public static void printCave(AntCave curr){
        if(curr.depth != ROOT){
            StringBuilder sb = new StringBuilder();

            sb.append(DEPTH.repeat(curr.depth - 1));

            sb.append(curr.feed);
            System.out.println(sb.toString());
        }

        for(AntCave next : curr.next.values()){
            printCave(next);
        }
    }
}

class AntCave implements Comparable<AntCave>{
    String feed;
    int depth;
    TreeMap<String, AntCave> next = new TreeMap<>();

    public AntCave(String feed,int depth){
        this.feed = feed;
        this.depth = depth;
    }

    @Override
    public int compareTo(AntCave o) {
        return this.feed.compareTo(o.feed);
    }
}
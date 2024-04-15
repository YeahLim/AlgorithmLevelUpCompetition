import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class April11_10845 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Queue<Integer> queue = new LinkedList<>();

        int tc = Integer.parseInt(br.readLine());
        StringTokenizer st;
        for(int i = 0; i < tc; i++) {
            st = new StringTokenizer(br.readLine());
            String m = st.nextToken();
            if(m.equals("push")) {
                int x = Integer.parseInt(st.nextToken());
                queue.add(x);
            } else if(m.equals("pop")) {
                if(queue.size() == 0) {
                    System.out.println(-1);
                    continue;
                } else {
                    System.out.println(queue.poll());
                }
            } else if(m.equals("size")) {
                System.out.println(queue.size());
            } else if(m.equals("empty")) {
                if(queue.isEmpty()) {
                    System.out.println(1);
                } else {
                    System.out.println(0);
                }
            } else if(m.equals("front")) {
                if(queue.isEmpty()) {
                    System.out.println(-1);
                } else {
                    System.out.println(queue.peek());
                }
            } else if(m.equals("back")) {
                if(queue.isEmpty()) {
                    System.out.println(-1);
                } else {
                    int size = queue.size();
                    int back = 0;
                    for(int k = 0; k < size; k++) {
                        back = queue.poll();
                        queue.add(back);
                    }
                    System.out.println(back);
                }
            }
        }
    }
}

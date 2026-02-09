import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

class Star {
    int x;
    int y;

    public Star(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

public class Main {
    static int n, m, l, k;
    static List<Star> stars;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        l = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());
        stars = new ArrayList<>();
        for (int i = 0; i < K; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            stars.add(new Star(x, y));
        }
        int result = Integer.MIN_VALUE;
        for (Star star1 : stars) {
            for (Star star2 : stars) {
                result = Math.max(result, countStarsInBound(star1.x, star2.y));
            }
        }
        System.out.println(k - result);
    }

    private static int countStarsInBound(int x, int y) {
        int count = 0;
        for (Star star : stars) {
            if (x <= star.x && star.x <= x + l && y <= star.y && star.y <= y + l)
                count++;
        }
        return count;
    }
}
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] info = br.readLine().split(" ");

        int H = Integer.parseInt(info[0]);
        int W = Integer.parseInt(info[1]);
        int N = Integer.parseInt(info[2]) + 1;
        int M = Integer.parseInt(info[3]) + 1;

        int h = H / N;
        if (H % N != 0) {
            h++;
        }

        int w = W / M;
        if (W % M != 0) {
            w++;
        }

        System.out.println(h*w);
    }
}

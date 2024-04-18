import java.io.*;
import java.util.*;

public class Main {

    static int M, N, H; // 가로, 세로, 높이
    static int[][][] tomatoList;
    static final int RIPEN = 1;
    static final int UNRIPE = 0;
    static final int[] dx = {-1, 1, 0, 0, 0, 0};
    static final int[] dy = {0, 0, -1, 1, 0, 0};
    static final int[] dz = {0, 0, 0, 0, -1, 1};

    static class Tomato {
        int x, y, z; // 가로, 세로, 높이

        public Tomato(int x, int y, int z) {
            this.x = x;
            this.y = y;
            this.z = z;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        M = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());
        H = Integer.parseInt(st.nextToken());

        tomatoList = new int[H][N][M];

        Queue<Tomato> queue = new LinkedList<>();

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                st = new StringTokenizer(br.readLine());
                for (int k = 0; k < M; k++) {
                    tomatoList[i][j][k] = Integer.parseInt(st.nextToken());
                    if (tomatoList[i][j][k] == RIPEN) {
                        queue.offer(new Tomato(k, j, i));
                    }
                }
            }
        }

        int days = getDays(queue);

        if (isAllRipe()) {
            System.out.println(days);
        } else {
            System.out.println(-1);
        }
    }

    static int getDays(Queue<Tomato> queue) {
        int days = 0;

        while (!queue.isEmpty()) {
            int size = queue.size();

            for (int i = 0; i < size; i++) {
                Tomato tomato = queue.poll();

                for (int j = 0; j < 6; j++) {
                    int nx = tomato.x + dx[j];
                    int ny = tomato.y + dy[j];
                    int nz = tomato.z + dz[j];

                    if (nx >= 0 && nx < M && ny >= 0 && ny < N && nz >= 0 && nz < H
                            && tomatoList[nz][ny][nx] == UNRIPE) {
                        tomatoList[nz][ny][nx] = RIPEN;
                        queue.offer(new Tomato(nx, ny, nz));
                    }
                }
            }
            days++;
        }
        return days - 1;
    }

    static boolean isAllRipe() {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < M; k++) {
                    if (tomatoList[i][j][k] == UNRIPE) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, map[16][16], result;
bool ch[16][16];
vector < pair <int, int> > v;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
void bfs(int sx, int sy, int ax, int ay) {
    queue < pair <int, int> > q;
    q.push(make_pair(sx, sy));
    ch[sx][sy] = true;
    int time = -1;
    while (!q.empty()) {
        time++;
        int size = q.size();
        for (int t = 0; t < size; t++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx >= 0 && ny >= 0 && nx < n&&ny < n && !ch[nx][ny]
                    && map[nx][ny] != 1) {
                    if (map[nx][ny] == 2) {//소용돌이발생지점
                        if (time % 3 == 2) {//소용돌이가 멈출 때
                            q.push(make_pair(nx, ny));
                            ch[nx][ny] = true;
                        }
                        else q.push(make_pair(x, y));
                    }
                    else if (nx == ax && ny == ay) {
                        result = time + 1;
                        while (!q.empty()) q.pop();
                        return;
                    }
                    else {
                        q.push(make_pair(nx, ny));
                        ch[nx][ny] = true;
                    }
                }
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;
    cin >> test_case;
    for (int t = 1; t <= test_case; t++) {
        //start
        result = 2e9;
        int sx, sy, ax, ay;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> map[i][j];
                ch[i][j] = false;
                if (map[i][j] == 2) {//소용돌이 위치 저장
                    v.push_back(make_pair(i, j));
                }
            }
        }
        cin >> sx >> sy >> ax >> ay;
        bfs(sx, sy, ax, ay);
        //end
        cout << '#' << t << ' ';
        if (result == 2e9)cout << "-1\n";
        else cout << result << '\n';
    }
}

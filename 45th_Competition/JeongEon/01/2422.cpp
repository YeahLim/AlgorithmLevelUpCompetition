#include <iostream>

using namespace std;

bool chk[205][205];
int N, M;

int main(void) {
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int p, q;
        cin >> p >> q;
        chk[p][q] = chk[q][p] = true;
    }

    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            if (chk[i][j]) {
                continue;
            }
            for (int k = j + 1; k <= N; ++k) {
                if (chk[i][k] || chk[j][k]) {
                    continue;
                }
                ++ans;
            }
        }
    }
    cout << ans << endl;

	return 0;
}

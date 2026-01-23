// 13회 알고리즘 스터디
// SWEA D3
// 6730. 장애물 경주 난이도

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        int input;
        vector<int> vec;
        for (int i = 0; i < N; i++) {
            cin >> input;
            vec.push_back(input);
        }

        int up, down, maxUp = 0, maxDown = 0;
        for (int i = 1; i < N; i++) {
            if (vec[i] > vec[i - 1]) {
                up = vec[i] - vec[i - 1];
                if (up > maxUp) {
                    maxUp = up;
                }
            }
            else {
                down = vec[i - 1] - vec[i];
                if (down > maxDown) {
                    maxDown = down;
                }
            }
        }

        cout << "#" << t << " ";
        cout << maxUp << " " << maxDown << '\n';
    }

    return 0;
}
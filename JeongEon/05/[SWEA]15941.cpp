// 13ȸ �˰��� ���͵�
// SWEA D3
// 15941. ����纯��

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

        int result = N * N;

        cout << "#" << t << " ";
        cout << result << '\n';
    }

    return 0;
}
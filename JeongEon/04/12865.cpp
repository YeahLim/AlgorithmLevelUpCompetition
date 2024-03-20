// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 12865��
// ���� �̸�: ����� �賶
// �˰���: DP
// �ۼ���: 24.03.20

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int N, K;
int W[101] = { 0, };
int V[101] = { 0, };
int DP[101][100001];

void dp();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }

    memset(DP, 0, sizeof(DP));

    dp();

    cout << DP[N][K];

    return 0;
}

void dp() {

    for (int limit = 1; limit <= K; limit++) {
        for (int row = 1; row <= N; row++) {
            //1. ���� �� ���� ���
            if (W[row] > limit) {
                DP[row][limit] = DP[row - 1][limit];
            }
            //2. ���� �� �ִ� ���
            else {
                DP[row][limit] = max(DP[row - 1][limit - W[row]] + V[row], DP[row - 1][limit]);
            }
        }
    }

}
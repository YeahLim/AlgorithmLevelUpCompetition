// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 1697��
// ���� �̸�: ���ٲ���
// �˰���: �ʺ� �켱 Ž��
// �ۼ���: ~24.02.20

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define MAX 100001

int N;	// �� ��ġ
int K;	// ���� ��ġ
bool map[MAX] = { false };	// ��ġmap


int bfs(int x);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> K;

	cout << bfs(N);

	return 0;
}

int bfs(int x) {
	queue<pair<int, int>> q;
	map[x] = true;
	int cnt = 0;
	q.push({ x, cnt });

	while (!q.empty()) {
		int nx = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (nx == K) {
			break;
		}

		if (nx * 2 < MAX && nx * 2 >= 0) {
			if (!map[nx * 2]) {
				map[nx * 2] = true;
				q.push({ nx * 2, cnt + 1 });
			}
		}

		if (nx + 1 < MAX && nx + 1 >= 0) {
			if (!map[nx + 1]) {
				map[nx + 1] = true;
				q.push({ nx + 1, cnt + 1 });
			}
		}

		if (nx - 1 < MAX && nx - 1 >= 0) {
			if (!map[nx - 1]) {
				map[nx - 1] = true;
				q.push({ nx - 1, cnt + 1 });
			}
		}
	}

	return cnt;
}
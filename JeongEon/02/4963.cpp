// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 4963��
// ���� �̸�: ���� ����
// �˰���: BFS
// �ۼ���: 24.03.04

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// ���⺤��)	  �»� �� ��� �� ����  �� ���� �� 
int dx[8] = { -1,  0,  1,  1,  1,  0, -1, -1 };
int dy[8] = { 1,  1,  1,  0, -1, -1, -1,  0 };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		// �Է�
		int w;	// ������ �ʺ�	(0 <= w, h <= 50)
		int h;	// ������ ����
		cin >> w >> h;

		if (w == 0 && h == 0) {	// ���� �ݺ��� Ż��
			break;
		}

		int map[51][51] = { -1 };	// 0 = �ٴ�, 1 = ��
		bool visited[51][51] = { false };	// �湮Ȯ��

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> map[i][j];
			}
		}

		// �ڵ�) ����, ����, �밢������ ������ ���� �ϳ��� ��
		queue<pair<int, int>> q;	// ���� ��ǥ x, y
		int cnt = 0;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				if (!visited[i][j] && map[i][j] == 1) {
					q.push({ i, j });
					visited[i][j] = true;
					// bfs
					while (!q.empty()) {
						int y = q.front().first;
						int x = q.front().second;
						q.pop();

						for (int i = 0; i < 8; i++) {
							int ny = y + dy[i];
							int nx = x + dx[i];

							if (ny <= 0 || nx <= 0 || ny > h || nx > w) {	// ���� ������ �Ѿ��
								continue;
							}

							if (map[ny][nx] == 1 && !visited[ny][nx]) {
								q.push({ ny, nx });
								visited[ny][nx] = true;
							}
						}
					}
					cnt++;
				}
			}
		}

		// ���) ���� ����
		cout << cnt << '\n';
	}

	return 0;
}
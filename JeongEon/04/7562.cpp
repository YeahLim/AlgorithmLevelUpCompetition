// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 7562��
// ���� �̸�: ����Ʈ�� �̵�
// �˰���: �ʺ� �켱 Ž��
// �ۼ���: ~24.02.21

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int T;	// �׽�Ʈ ���̽� ����
int I;	// ü���� �� ���� ����

// ����Ʈ�� �����̴� ���⺤��
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int bfs(vector<bool>* visited, vector<int>* arr, int y, int x);

int now_y, now_x;	// ���� ����Ʈ ��ġ
int target_y, target_x;	// ����Ʈ ���� ��ġ

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> I;
		vector<bool>* visited = new vector<bool>[I];	//	 �湮Ȯ��
		vector<int>* arr = new vector<int>[I];	// Ƚ�� ����
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < I; j++) {
				visited[i].push_back(false);
				arr[i].push_back(0);
			}
		}

		cin >> now_y >> now_x;
		cin >> target_y >> target_x;

		cout << bfs(visited, arr, now_y, now_x) << '\n';
	}

	return 0;
}

int bfs(vector<bool>* visited, vector<int>* arr, int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y, x });
	visited[y][x] = true;
	int cnt;

	while (!q.empty()) {
		int ny = q.front().first;
		int nx = q.front().second;
		q.pop();

		if (ny == target_y && nx == target_x) {
			cnt = arr[ny][nx];
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nny = dy[i] + ny;
			int nnx = dx[i] + nx;

			if (nny < 0 || nnx < 0 || nny >= I || nnx >= I) {
				continue;
			}

			if (visited[nny][nnx] == false) {
				q.push({ nny, nnx });
				visited[nny][nnx] = true;
				arr[nny][nnx] = arr[ny][nx] + 1;
			}
		}
	}

	return cnt;
}
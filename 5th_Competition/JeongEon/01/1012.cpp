// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 1012��
// ���� �̸�: ����� ����
// �˰���: ���� �켱 Ž��
// �ۼ���: ~24.02.19

#include <iostream>
#include <vector>

using namespace std;

// ���⺤��
//			  �� �� �� �Ʒ� 
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int cnt = 0;	// ������������ ����
int M;	// ���߹��� ���� ����
int N;	// ���߹��� ���� ����
int K;	// ���߰� �ɾ����ִ� ��ġ�� ����

void dfs(int** arr, bool** visited, int y, int x);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int T;	// �׽�Ʈ ���̽� ����
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;
		cnt = 0;

		int** arr = new int* [M];	// ���߹�
		bool** visited = new bool* [M];	// �湮Ȯ��
		for (int j = 0; j < M; j++) {
			visited[j] = new bool[N];
			arr[j] = new int[N];
			for (int p = 0; p < N; p++) {
				visited[j][p] = false;
				arr[j][p] = 0;
			}
		}

		int x, y;	// ���߰� �ɾ��� ��ġ
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int j = 0; j < M; j++) {
			for (int p = 0; p < N; p++) {
				if (arr[j][p] == 1 && visited[j][p] == false) {
					dfs(arr, visited, j, p);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
	}



	return 0;
}

void dfs(int** arr, bool** visited, int x, int y) {
	visited[x][y] = true;

	// �� ���� Ȯ��
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;

		if (ny < 0 || nx < 0 || nx >= M || ny >= N) {
			continue;
		}

		if (arr[nx][ny] == 1 && visited[nx][ny] == false) {
			dfs(arr, visited, nx, ny);
		}
	}
}
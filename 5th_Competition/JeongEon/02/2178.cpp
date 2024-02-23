// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 2178��
// ���� �̸�: �̷� Ž��
// �˰���: �ʺ� �켱 Ž��
// �ۼ���: ~24.02.20

#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// ���⺤��
//			  �� �� �� �Ʒ� 
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int N, M;	// �̷� ũ��

void bfs(vector<int>* maze, vector<int>* visited, int y, int x);


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M;

	vector<int>* maze = new vector<int>[N];	// �̷�
	vector<int>* visited = new vector<int>[N];	// �湮Ȯ��
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < M; j++) {
			maze[i].push_back(input[j] - '0');
			visited[i].push_back(0);
		}
	}

	bfs(maze, visited, 0, 0);

	cout << visited[N - 1][M - 1];

	delete[] maze;
	delete[] visited;

	return 0;
}

void bfs(vector<int>* maze, vector<int>* visited, int y, int x) {
	queue<pair<int, int>> Q;
	Q.push({ y, x });
	visited[y][x] = 1;

	while (!Q.empty()) {
		int ny = Q.front().first;
		int nx = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nny = dy[i] + ny;
			int nnx = dx[i] + nx;

			if (nny < 0 || nnx < 0 || nny >= N || nnx >= M) {	// �̷� ũ�⸦ ����ٸ�
				continue;
			}

			if (maze[nny][nnx] == 0) {	// �̵��� �� ���� ���̶��
				continue;
			}

			if (maze[nny][nnx] == 1 && visited[nny][nnx] == 0) {
				Q.push({ nny, nnx });
				visited[nny][nnx] = visited[ny][nx] + 1;
			}
		}
	}
}
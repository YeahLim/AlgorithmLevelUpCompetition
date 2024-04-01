// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 244445��
// ���� �̸�: �˰��� ���� - �ʺ� �켱 Ž�� 2
// �˰���: �ʺ� �켱 Ž��
// �ۼ���: ~24.02.16

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;	// ����� ��
int M;	// ������ ��
int R;	// ���� ���
int cnt = 0;	// �湮 Ƚ��

vector<int> graph[100001];	// �׷���
bool visited[100001] = { false };	// �ٳ�� ��� üũ
int result[100001];		// �湮 ��� ���� ����

void bfs(int x);
bool compare(int a, int b);	// ��������

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N >> M >> R;

	int u, v;
	for (int i = 1; i <= M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// �������� ����
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end(), compare);
	}

	bfs(R);

	for (int i = 1; i <= N; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}

void bfs(int x) {
	queue<int> Q;
	Q.push(x);
	visited[x] = true;
	cnt++;
	result[x] = cnt;

	while (!Q.empty()) {
		int tmp = Q.front();
		Q.pop();
		for (int i = 0; i < graph[tmp].size(); i++) {
			int temp = graph[tmp][i];
			if (!visited[temp]) {
				visited[temp] = true;
				cnt++;
				result[temp] = cnt;
				Q.push(temp);
			}
		}
	}

}

bool compare(int a, int b) {
	return a > b;
}
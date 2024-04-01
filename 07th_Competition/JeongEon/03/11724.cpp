// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 11724��
// ���� �̸�: ���� ����� ����
// �˰���: BFS
// �ۼ���: 24.03.05

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ������ ����
	int M;	// ������ ����
	cin >> N >> M;

	int u, v;
	vector<int>* map = new vector<int>[N + 1];
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}

	// �ڵ�
	int cnt = 0;
	queue<int> q;
	bool visited[1001] = { false };
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			q.push(i);
			while (!q.empty()) {
				int x = q.front();
				q.pop();

				for (int i = 0; i < map[x].size(); i++) {
					if (!visited[map[x][i]]) {
						visited[map[x][i]] = true;
						q.push(map[x][i]);
					}
				}
			}
			cnt++;
		}
	}

	// ���
	cout << cnt;

	return 0;
}
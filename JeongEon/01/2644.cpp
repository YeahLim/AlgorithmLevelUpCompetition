// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 2644��
// ���� �̸�: �̼� ���
// �˰���: BFS
// �ۼ���: 24.03.04

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;	// ��ü ��� ��
int find1, find2;	// �̼��� ����ؾ��ϴ� ���� �ٸ� �� ����� ��ȣ
int m;	// �θ� �ڽ� ���� ������ ����
vector<int> family[101];
bool visited[101] = { false };	// �湮Ȯ��
int depth[101] = { 0 };

void bfs(int check);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> n;
	cin >> find1 >> find2;
	cin >> m;

	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		family[x].push_back(y);
		family[y].push_back(x);
	}

	// �ڵ�
	bfs(find1);

	// ���
	if (depth[find2] == 0) {
		cout << -1;
	}
	else {
		cout << depth[find2];
	}

	return 0;
}

void bfs(int now) {
	queue<int> q;
	q.push(now);
	visited[now] = true;

	while (!q.empty()) {
		now = q.front();
		q.pop();

		for (int i = 0; i < family[now].size(); i++) {
			if (visited[family[now][i]] == false) {
				q.push(family[now][i]);
				visited[family[now][i]] = true;
				depth[family[now][i]] = depth[now] + 1;
			}
		}
	}
}
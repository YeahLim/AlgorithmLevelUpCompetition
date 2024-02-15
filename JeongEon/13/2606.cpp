// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 2606��
// ���� �̸�: ���̷���
// �˰���: ���� �켱 Ž��
// �ۼ���: ~24.02.16

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;	// ��ǻ�� ��
int K;	// ���� ��

vector<int> graph[101];	// �׷���
bool visited[101] = { false };
int cnt = 0;

void dfs(int x);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> N;
	cin >> K;

	int a, b;
	for (int i = 0; i < K; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// ������������ ����
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(1);

	cout << cnt - 1;	// 1�� ��ǻ�� ����!

	return 0;
}

void dfs(int x) {
	if (visited[x] == true) {
		return;
	}

	visited[x] = true;
	cnt++;

	for (int i = 0; i < graph[x].size(); i++) {
		dfs(graph[x][i]);
	}

}
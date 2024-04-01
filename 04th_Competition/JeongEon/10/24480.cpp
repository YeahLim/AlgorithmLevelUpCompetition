// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 24480��
// ���� �̸�: �˰��� ���� - ���� �켱 Ž�� 2
// �˰���: ���� �켱 Ž��
// �ۼ���: ~24.02.16

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;	// ������ ����
int M;	// ������ ����
int R;	// ���� ����
int cnt = 0;	// �湮 ����
vector<int> graph[100001];	// �׷���
bool visited[100001] = { false };	// ���ٿԴ��� Ȯ��
int result[100001];	// �ش� ���� ��忡 ���°�� �湮�ߴ��� ����

void dfs(int x);
bool compare(int a, int b);

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

	// ������������ ����
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end(), compare);
	}

	dfs(R);

	// ���)  i��° �ٿ��� ���� i�� �湮 ����
	for (int i = 1; i <= N; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}

void dfs(int x) {
	if (visited[x] == true) {	// �̹� �湮������ ���ư�
		return;
	}

	// �湮���� �ʾҴٸ�
	visited[x] = true;
	cnt++;
	result[x] = cnt;

	for (int i = 0; i < graph[x].size(); i++) {
		dfs(graph[x][i]);
	}
}

bool compare(int a, int b) {
	return a > b;
}
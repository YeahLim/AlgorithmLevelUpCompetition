// 백준 알고리즘 스터디 7회차
// 문제 번호: 2644번
// 문제 이름: 촌수 계산
// 알고리즘: BFS
// 작성일: 24.03.04

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;	// 전체 사람 수
int find1, find2;	// 촌수를 계산해야하는 서로 다른 두 사람의 번호
int m;	// 부모 자식 간의 관계의 개수
vector<int> family[101];
bool visited[101] = { false };	// 방문확인
int depth[101] = { 0 };

void bfs(int check);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> n;
	cin >> find1 >> find2;
	cin >> m;

	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		family[x].push_back(y);
		family[y].push_back(x);
	}

	// 코드
	bfs(find1);

	// 출력
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
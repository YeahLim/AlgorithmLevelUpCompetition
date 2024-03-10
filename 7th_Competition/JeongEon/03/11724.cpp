// 백준 알고리즘 스터디 7회차
// 문제 번호: 11724번
// 문제 이름: 연결 요소의 개수
// 알고리즘: BFS
// 작성일: 24.03.05

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	int N;	// 정점의 개수
	int M;	// 간선의 개수
	cin >> N >> M;

	int u, v;
	vector<int>* map = new vector<int>[N + 1];
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}

	// 코드
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

	// 출력
	cout << cnt;

	return 0;
}
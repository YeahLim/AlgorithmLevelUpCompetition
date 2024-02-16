// 백준 알고리즘 스터디 4회차
// 문제 번호: 244445번
// 문제 이름: 알고리즘 수업 - 너비 우선 탐색 2
// 알고리즘: 너비 우선 탐색
// 작성일: ~24.02.16

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;	// 노드의 수
int M;	// 연결의 수
int R;	// 시작 노드
int cnt = 0;	// 방문 횟수

vector<int> graph[100001];	// 그래프
bool visited[100001] = { false };	// 다녀온 노드 체크
int result[100001];		// 방문 노드 순서 저장

void bfs(int x);
bool compare(int a, int b);	// 내림차순

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M >> R;

	int u, v;
	for (int i = 1; i <= M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// 오름차순 정렬
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
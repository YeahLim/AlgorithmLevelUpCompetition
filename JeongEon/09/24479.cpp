// 백준 알고리즘 스터디 4회차
// 문제 번호: 24479번
// 문제 이름: 알고리즘 수업 - 깊이 우선 탐색 1
// 알고리즘: 깊이 우선 탐색
// 작성일: ~24.02.15

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;	// 정점의 개수
int M;	// 간선의 개수
int R;	// 시작 정점
int cnt = 0;	// 방문 순서
vector<int> graph[100001];	// 그래프
bool visited[100001] = { false };	// 갔다왔는지 확인
int result[100001];	// 해당 숫자 노드에 몇번째로 방문했는지 저장

void dfs(int x);

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

	// 오름차순으로 정렬
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(R);

	// 출력)  i번째 줄에는 정점 i의 방문 순서
	for (int i = 1; i <= N; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}

void dfs(int x) {
	if (visited[x] == true) {	// 이미 방문했으면 돌아감
		return;
	}

	// 방문하지 않았다면
	visited[x] = true;
	cnt++;
	result[x] = cnt;

	for (int i = 0; i < graph[x].size(); i++) {
		dfs(graph[x][i]);
	}
}
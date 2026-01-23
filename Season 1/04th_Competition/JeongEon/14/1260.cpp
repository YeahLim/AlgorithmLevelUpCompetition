// 백준 알고리즘 스터디 4회차
// 문제 번호: 1260번
// 문제 이름: DFS와 BFS
// 알고리즘: 깊이 우선 탐색, 너비 우선 탐색
// 작성일: ~24.02.16

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;	// 노드 수
int M;	// 간선 수
int V;	// 시작 노드

vector<int> graph[1001];	// 그래프
int result[1001];
bool visited_dfs[1001] = { false };
bool visited_bfs[1001] = { false };
int cnt_dfs = 0;
int cnt_bfs = 0;

void dfs(int x);
void bfs(int x);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N >> M >> V;

	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// 오름차순으로 정렬
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(V);
	for (int i = 1; i <= N; i++) {
		if (result[i] == 0) {
			break;
		}
		cout << result[i] << " ";
	}
	cout << '\n';

	bfs(V);
	for (int i = 1; i <= N; i++) {
		if (result[i] == 0) {
			break;
		}
		cout << result[i] << " ";
	}

	return 0;
}

void dfs(int x) {
	if (visited_dfs[x] == true) {
		return;
	}

	visited_dfs[x] = true;
	cnt_dfs++;
	result[cnt_dfs] = x;

	for (int i = 0; i < graph[x].size(); i++) {
		dfs(graph[x][i]);
	}

}

void bfs(int x) {
	queue<int> Q;
	Q.push(x);
	visited_bfs[x] = true;
	cnt_bfs++;
	result[cnt_bfs] = x;

	while (!Q.empty()) {
		int tmp = Q.front();
		Q.pop();
		for (int i = 0; i < graph[tmp].size(); i++) {
			int temp = graph[tmp][i];
			if (!visited_bfs[temp]) {
				visited_bfs[temp] = true;
				cnt_bfs++;
				result[cnt_bfs] = temp;
				Q.push(temp);
			}
		}
	}

}
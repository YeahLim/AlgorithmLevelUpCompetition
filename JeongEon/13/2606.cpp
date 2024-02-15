// 백준 알고리즘 스터디 4회차
// 문제 번호: 2606번
// 문제 이름: 바이러스
// 알고리즘: 깊이 우선 탐색
// 작성일: ~24.02.16

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;	// 컴퓨터 수
int K;	// 연결 수

vector<int> graph[101];	// 그래프
bool visited[101] = { false };
int cnt = 0;

void dfs(int x);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력
	cin >> N;
	cin >> K;

	int a, b;
	for (int i = 0; i < K; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// 오름차순으로 정렬
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(1);

	cout << cnt - 1;	// 1번 컴퓨터 제외!

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
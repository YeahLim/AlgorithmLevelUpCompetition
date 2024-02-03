// <백준>
// 문제번호: 15649번
// 문제이름: N과 M (1)
// 알고리즘: 백트레킹
// 마지막 수정일: 24.02.03

#include <iostream>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int N, M;
int arr[9] = { 0 };
int visited[9] = { 0 };

void dfs(int cnt);

int main(void) {
	cin >> N >> M;

	dfs(0);

	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i + 1;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}

// 코테 알고리즘 스터디 17회차
// SWEA D3
// 2814. 최장 경로

#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

int result;

void DFS(vector<int> arr[11], bool visited[11], int y, int length) {
	if (result < length) {
		result = length;
	}

	for (int i = 0; i < arr[y].size(); i++) {
		if (!visited[arr[y][i]]) {
			visited[arr[y][i]] = true;
			DFS(arr, visited, arr[y][i], length + 1);
			visited[arr[y][i]] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N, M;
		cin >> N >> M;

		vector<int> arr[11];
		for (int i = 0; i < M; i++) {
			int x, y;
			cin >> x >> y;

			arr[x].push_back(y);
			arr[y].push_back(x);
		}

		bool visited[11] = { false };
		memset(visited, false, sizeof(visited));

		result = 1;
		for (int i = 1; i <= N; i++) {
			visited[i] = true;
			DFS(arr, visited, i, 1);
			visited[i] = false;
		}

		cout << "#" << tc << " ";
		cout << result << '\n';
	}

	return 0;
}
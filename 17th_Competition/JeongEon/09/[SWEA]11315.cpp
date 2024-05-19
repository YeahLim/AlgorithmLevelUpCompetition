// 코테 알고리즘 스터디 17회차
// SWEA D3
// 11315. 오목 판정

#include <iostream>
#include <string>

using namespace std;

int dy[8] = { 1, 1, 0, -1, -1, -1, 1 };
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		char** arr = new char* [N];
		for (int i = 0; i < N; i++) {
			arr[i] = new char[N];
			string input;
			cin >> input;
			for (int j = 0; j < N; j++) {
				arr[i][j] = input[j];
			}
		}

		bool result = false;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] == 'o') {
					for (int k = 0; k < 8; k++) {
						int ny = i + dy[k];
						int nx = j + dx[k];

						int cnt = 1;
						while (1) {
							if (ny < 0 || ny >= N || nx < 0 || ny >= N) {
								break;
							}

							if (arr[ny][nx] != 'o') {
								break;
							}

							cnt++;

							ny += dy[k];
							nx += dx[k];
						}

						if (cnt == 5) {
							result = true;
						}
					}
				}

				if (result) {
					break;
				}
			}
			if (result) {
				break;
			}
		}

		cout << "#" << tc << " ";
		if (result) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}
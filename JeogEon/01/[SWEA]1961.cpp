// 코테 알고리즘 스터디 16회차
// SWEA D2
// 1961. 숫자 배열 회전


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;	// 배열 사이즈 입력

		int arr[10][10];
		for (int i = 0; i < N; i++) {	// 배열 숫자 입력
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		vector<string> result[7];
		for (int i = 0; i < N; i++) {	// result 초기화
			for (int j = 0; j < 3; j++) {
				result[i].push_back("");
			}
		}

		// 90도
		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j < N; j++) {
				result[j][0] += to_string(arr[i][j]);	// 90도
				result[j][1] += to_string(arr[N - j - 1][i]);	// 180도
				result[j][2] += to_string(arr[N - i - 1][N - j - 1]);	// 270도
			}
		}

		cout << "#" << t << "\n";
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < 3; j++) {
				cout << result[i][j] << " ";
			}
			cout << '\n';
		}
	}
}
// 코테 알고리즘 스터디 16회차
// SWEA D3
// 5431. 민석이의 과제 체크하기

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N, K;
		cin >> N >> K;

		bool arr[101];
		memset(arr, false, sizeof(arr));

		for (int i = 1; i <= K; i++) {
			int input;
			cin >> input;
			arr[input] = true;
		}

		cout << "#" << t << " ";
		for (int i = 1; i <= N; i++) {
			if (!arr[i]) {
				cout << i << " ";
			}
		}
		cout << '\n';
	}
}
// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 파리 퇴치
// 문제번호: 2001번

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;

		int input;
		vector<int>* vec = new vector<int>[N];
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cin >> input;
				vec[j].push_back(input);
			}
		}

		int maxi = 0;
		for (int j = 0; j < N - M + 1; j++) {
			for (int k = 0; k < N - M + 1; k++) {
				int sum = 0;
				for (int l = j; l < j + M; l++) {
					for (int m = k; m < k + M; m++) {
						sum += vec[l][m];
					}
				}
				if (maxi < sum)
					maxi = sum;
			}
		}

		cout << "#" << i + 1 << " " << maxi << '\n';
	}

	return 0;
}
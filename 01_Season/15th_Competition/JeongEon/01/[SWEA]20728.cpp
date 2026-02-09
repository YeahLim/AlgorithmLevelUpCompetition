// 코테 스터디 15회차
// SWEA D3
// 20728. 공평한 분배 2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N, K;
		cin >> N >> K;

		vector<long long int> candy;
		for (int i = 0; i < N; i++) {
			long long int input;
			cin >> input;
			candy.push_back(input);
		}

		sort(candy.begin(), candy.end());

		long long int result = candy[K - 1] - candy[0];
		for (int i = 0; i < N; i++) {
			for (int j = i + K - 1; j < N; j++) {
				if (candy[j] - candy[i] < result) {
					result = candy[j] - candy[i];
				}
				else {
					break;
				}
			}
		}


		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}

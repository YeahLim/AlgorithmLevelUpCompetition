// 코테 알고리즘 스터디 17회차
// SWEA D3
// 9229. 한빈이와 Spot Mart

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N, M;
		cin >> N >> M;

		vector<int> snack;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			snack.push_back(input);
		}

		sort(snack.begin(), snack.end(), greater<>());

		int result = -1;
		for (int i = 0; i < N - 1; i++) {
			for (int j = N - 1; j > i; j--) {
				if (snack[i] + snack[j] > M) {
					break;
				}
				else if (snack[i] + snack[j] < M) {
					if (result < snack[i] + snack[j]) {
						result = snack[i] + snack[j];
					}
				}
				else if (snack[i] + snack[j] == M) {
					result = M;
					break;
				}
			}
			if (result == M) {
				break;
			}
		}

		cout << "#" << tc << " ";
		cout << result << "\n";
	}

	return 0;
}
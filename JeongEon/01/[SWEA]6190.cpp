// 알고리즘 코딩 스터디 14회차
// SWEA D3
// 6190. 정곤이의 단조 증가하는 수

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool Danjo(int x) {
	string input = to_string(x);
	for (int i = 0; i < input.length() - 1; i++) {
		if (input[i] > input[i + 1]) {
			return false;
		}
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;

		vector<int> A;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			A.push_back(input);
		}

		sort(A.begin(), A.end(), greater<>());

		int result = 0;
		for (int i = 0; i < N - 1; i++) {
			for (int j = i + 1; j < N; j++) {
				if (Danjo(A[i] * A[j])) {
					if (result < A[i] * A[j]) {
						result = A[i] * A[j];
					}
				}
			}
		}


		cout << "#" << t << " ";
		if (result != 0) {
			cout << result << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}

	return 0;
}
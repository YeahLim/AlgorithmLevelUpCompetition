// 코테 스터디 15회차
// SWEA D3
// 19185. 육십갑자

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int N, M;
		cin >> N >> M;

		vector<string> S;
		for (int i = 0; i < N; i++) {
			string input;
			cin >> input;
			S.push_back(input);
		}

		vector<string> T;
		for (int i = 0; i < M; i++) {
			string input;
			cin >> input;
			T.push_back(input);
		}


		int Q;
		cin >> Q;

		vector<int> Y;
		for (int i = 0; i < Q; i++) {
			int input;
			cin >> input;
			Y.push_back(input);
		}

		cout << "#" << t << " ";

		for (int i = 0; i < Q; i++) {
			int first;
			if (Y[i] % N == 0) {
				first = N - 1;
			}
			else {
				first = Y[i] % N - 1;
			}
			int second;
			if (Y[i] % M == 0) {
				second = M - 1;
			}
			else {
				second = Y[i] % M - 1;
			}

			cout << S[first] << T[second] << " ";
		}
		cout << '\n';
	}

	return 0;
}

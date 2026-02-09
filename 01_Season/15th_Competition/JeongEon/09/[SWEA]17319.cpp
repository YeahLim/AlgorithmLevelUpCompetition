// 코테 스터디 15회차
// SWEA D3
// 17319. 문자열문자열

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		string S;
		cin >> S;

		cout << "#" << t << " ";

		bool possible = true;
		if (N % 2 == 0) {
			queue<char> Q;
			for (int i = 0; i < N / 2; i++) {
				Q.push(S[i]);
			}

			for (int i = N / 2; i < N; i++) {
				if (Q.front() != S[i]) {
					possible = false;
					break;
				}
				Q.pop();
			}
		}
		else {
			possible = false;
		}

		if (possible) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}

	return 0;
}

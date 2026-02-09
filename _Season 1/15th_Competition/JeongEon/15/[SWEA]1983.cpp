// 코테 스터디 15회차
// SWEA D2
// 1983. 조교의 성적 매기기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, double> A, pair<double, double> B) {
	return A.first > B.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int N, K;
		cin >> N >> K;

		vector<pair<double, double>> score;
		for (int i = 0; i < N; i++) {
			int mid;
			cin >> mid;

			int final;
			cin >> final;

			int assign;
			cin >> assign;

			double total = (double)mid * 0.35 + final * 0.45 + assign * 0.2;
			score.push_back({ total, i + 1 });
		}

		sort(score.begin(), score.end(), compare);

		cout << "#" << t << " ";
		for (int i = 0; i < N; i++) {
			if (score[i].second == K) {
				if (i < ((N / 10) * 1) && i >= 0) {
					cout << "A+" << '\n';
				}
				else if (i < ((N / 10) * 2) && i >= ((N / 10) * 1)) {
					cout << "A0" << '\n';
				}
				else if (i < ((N / 10) * 3) && i >= ((N / 10) * 2)) {
					cout << "A-" << '\n';
				}
				else if (i < ((N / 10) * 4) && i >= ((N / 10) * 3)) {
					cout << "B+" << '\n';
				}
				else if (i < ((N / 10) * 5) && i >= ((N / 10) * 4)) {
					cout << "B0" << '\n';
				}
				else if (i < ((N / 10) * 6) && i >= ((N / 10) * 5)) {
					cout << "B-" << '\n';
				}
				else if (i < ((N / 10) * 7) && i >= ((N / 10) * 6)) {
					cout << "C+" << '\n';
				}
				else if (i < ((N / 10) * 8) && i >= ((N / 10) * 7)) {
					cout << "C0" << '\n';
				}
				else if (i < ((N / 10) * 9) && i >= ((N / 10) * 8)) {
					cout << "C-" << '\n';
				}
				else if (i < ((N / 10) * 10) && i >= ((N / 10) * 9)) {
					cout << "D0" << '\n';
				}
			}
		}
	}

	return 0;
}

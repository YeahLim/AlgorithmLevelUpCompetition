// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: [S/W 문제해결 기본] 1일차 - 최빈수 구하기
// 문제번호: 1204번

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int input;
		vector<int> score;
		for (int j = 0; j < 1000; j++) {
			cin >> input;
			score.push_back(input);
		}

		sort(score.begin(), score.end());

		int result;
		int maxi = 0;
		int cnt = 0;
		int ptr = score[0];
		for (int j = 0; j < 1000; j++) {
			if (ptr == score[j]) {
				cnt++;
			}
			else {
				ptr = score[j];
				if (cnt >= maxi) {
					maxi = cnt;
					result = score[j - 1];
				}
				cnt = 1;
			}
		}

		cout << "#" << N << " " << result << '\n';
	}

	return 0;
}
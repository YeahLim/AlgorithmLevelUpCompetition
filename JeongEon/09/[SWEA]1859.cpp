// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 백만 장자 프로젝트
// 문제번호: 1859번

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		long long int input;
		vector<long long int> vec;
		for (int j = 0; j < N; j++) {
			cin >> input;
			vec.push_back(input);
		}

		long long int sum = 0;
		int max = N - 1;
		for (int j = N - 1; j >= 0; j--) {
			if (vec[j] <= vec[max]) {
				sum += vec[max] - vec[j];
			}
			else {
				max = j;
			}
		}

		cout << "#" << i + 1 << " " << sum << '\n';
	}

	return 0;
}
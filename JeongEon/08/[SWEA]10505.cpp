// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: 소득 불균형
// 문제번호: 10505번

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int input;
		int sum = 0;
		vector<int> vec;
		for (int j = 0; j < N; j++) {
			cin >> input;
			sum += input;
			vec.push_back(input);
		}

		double ave = (double)sum / N;

		int cnt = 0;
		for (int j = 0; j < vec.size(); j++) {
			if (ave >= vec[j]) {
				cnt++;
			}
		}

		cout << "#" << i + 1 << " " << cnt << '\n';
	}

	return 0;
}
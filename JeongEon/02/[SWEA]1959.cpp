// 13회 알고리즘 스터디
// SWEA
// 1959. 두 개의 숫자열

#include <iostream>
#include <vector>

using namespace std;

int calculate(int x1, int x2, vector<int> arr1, vector<int> arr2) {
	int num = 0;

	int result = 0;
	while (num + x2 <= x1) {
		int sum = 0;
		for (int i = 0; i < x2; i++) {
			sum += arr1[i + num] * arr2[i];
		}

		if (result < sum) {
			result = sum;
		}
		num++;
	}

	return result;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N, M;
		cin >> N >> M;

		int input;
		vector<int> A;
		for (int i = 0; i < N; i++) {
			cin >> input;
			A.push_back(input);
		}

		vector<int> B;
		for (int i = 0; i < M; i++) {
			cin >> input;
			B.push_back(input);
		}

		int result;
		if (N >= M) {
			result = calculate(N, M, A, B);
		}
		else {
			result = calculate(M, N, B, A);
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}